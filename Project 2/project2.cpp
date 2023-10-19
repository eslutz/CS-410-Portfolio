// project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// SNHU
// CS-410: Software Reverse Engineering
// Eric Slutz
//

#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>

using namespace std;

class Customer {
    private:
        static unsigned int nextCustomerId;
        unsigned int customerId;
        string name;
        int serviceChoice;
    public:
        Customer(string name, int serviceChoice) {

            this->customerId = ++nextCustomerId;
            this->name = name;
            this->serviceChoice = serviceChoice;
        }
        unsigned int getId() const { return this->customerId; }
        string getName() { return this->name; }
        int getServiceChoice() const { return this->serviceChoice; }
        void setServiceChoice(int choice) { this->serviceChoice = choice; }
};
unsigned int Customer::nextCustomerId = 0;

// FIX: Create a vector of customers and their service choice.
//      Not limited to a set number of customers.
vector<Customer> customers = {
    Customer("Bob Jones", 1),
    Customer("Sarah Davis", 1),
    Customer("Amy Friendly", 1),
    Customer("Johnny Smith", 1),
    Customer("Carol Spears", 1)
};

/**
* Check that user is allowed access
*/
int CheckUserPermissionAccess() {
    string username, password;

    cout << "Enter your username:" << endl;
    cin >> username;

    cout << "Enter your password:" << endl;
    cin >> password;

    if (password == "123") {
        return 1;
    }
    else {
        return 2;
    }
}

/**
* Displays all users and their selected options
*/
void DisplayInfo() {
    cout << "Client's Name | Service Selected (1 = Brokerage, 2 = Retirement)" << endl;
    // FIX: Can display any number of customers.
    for (Customer & client : customers) {
        cout << client.getId() << ". "
             << client.getName() << " selected option "
             << client.getServiceChoice() << endl;
    }
}

/**
* Select a customer and change their choice
*/
void ChangeCustomerChoice() {
    unsigned int numCustomers = customers.size();
    int changeChoice, newService;

    // FIX: Validate user input for customer choice.
    do {
        cout << "Enter the number of the client that you wish to change" << endl;
        cin >> changeChoice;

        if (cin.good() && changeChoice >= 1 && changeChoice <= numCustomers) {
            break;
        }
        else {
            cout << "Invalid customer choice. Please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (true);

    // FIX: Validate user input for service choice.
    do {
        cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
        cin >> newService;

        if (cin.good() && newService >= 1 && newService <= 2) {
            break;
        }
        else {
            cout << "Invalid service choice. Please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    } while (true);

    // FIX: Update service choice for customer.
    find_if(customers.begin(),
            customers.end(),
            [&changeChoice](const Customer& customer) { return customer.getId() == changeChoice; })
            ->setServiceChoice(newService);
}

int main() {
    int accessAuthorized = 0, menuInput = 0;

    cout << "CS-410: Software Reverse Engineering | Project 2 | Eric Slutz" << endl;

    cout << "Hello! Welcome to our Investment Company" << endl;

    // Check if user is authenticated
    do {
        // FIX: Check username with password.
        accessAuthorized = CheckUserPermissionAccess();

        if (accessAuthorized != 1) {
            cout << "Invalid username or password. Please try again." << endl;
        }
    } while (accessAuthorized != 1);

    while (true) {
        cout << "What would you like to do?" << endl;
        cout << "DISPLAY the client list (enter 1)" << endl;
        cout << "CHANGE a client's choice (enter 2)" << endl;
        cout << "Exit the program (enter 3)" << endl;

        // FIX: Validate user input for menu choice.
        do {
            cin >> menuInput;

            if (cin.good() && menuInput >= 1 && menuInput <= 3) {
                break;
            }
            else {
                cout << "Invalid menu choice. Please try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (true);
        cout << "You chose " << menuInput << endl;

        if (menuInput == 1) {
            DisplayInfo();
        }
        else if (menuInput == 2)
        {
            ChangeCustomerChoice();
        }
        else if (menuInput == 3) {
            break;
        }
    }

    return 0;
}
