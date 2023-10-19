// project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// SNHU
// CS-410: Software Reverse Engineering
// Eric Slutz
//

#include <iostream>

using namespace std;

int num1 = 1,
        num2 = 1,
        num3 = 1,
        num4 = 1,
        num5 = 1;
string name1 = "Bob Jones",
        name2 = "Sarah Davis",
        name3 = "Amy Friendly",
        name4 = "Johnny Smith",
        name5 = "Carol Spears";

/**
* Check that user is allowed access
*/
int CheckUserPermissionAccess() {
    string password;
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
    cout << "Client's Name | Service Selected(1 = Brokerage, 2 = Retirement)" << endl;
    cout << "1. " << name1 << " selected option " << num1 << endl;
    cout << "2. " << name2 << " selected option " << num2 << endl;
    cout << "3. " << name3 << " selected option " << num3 << endl;
    cout << "4. " << name4 << " selected option " << num4 << endl;
    cout << "5. " << name5 << " selected option " << num5 << endl;
}

/**
* Select a customer and change their choice
*/
void ChangeCustomerChoice() {
    int changechoice, newservice;

    cout << "Enter the number of the client that you wish to change" << endl;
    cin >> changechoice;
    cout << "Please enter the client's new service choice (1 = Brokerage, 2 = Retirement)" << endl;
    cin >> newservice;

    // Update service for client 1
    if (changechoice == 1) {
        num1 = newservice;
    }
        // Update service for client 2
    else if (changechoice == 2) {
        num2 = newservice;
    }
        // Update service for client 3
    else if (changechoice == 3) {
        num3 = newservice;
    }
        // Update service for client 4
    else if (changechoice == 4) {
        num4 = newservice;
    }
        // Update service for client 5
    else if (changechoice == 5) {
        num5 = newservice;
    }
}

int main() {
    string username;
    int answer;

    cout << "CS-410: Software Reverse Engineering | Project 1 | Eric Slutz" << endl;

    cout << "Hello! Welcome to our Investment Company" << endl;

    // Check if user is authenticated
    do {
        cout << "Enter your username:" << endl;
        cin >> username;

        answer = CheckUserPermissionAccess();

        if (answer != 1) {
            cout << "Invalid Password. Please try again" << endl;
        }
    } while (answer != 1);

    // Gets what user wants to do
    while (true) {
        cout << "What would you like to do?" << endl;
        cout << "DISPLAY the client list (enter 1)" << endl;
        cout << "CHANGE a client's choice (enter 2)" << endl;
        cout << "Exit the program (enter 3)" << endl;
        cin >> answer;
        cout << "You chose " << answer << endl;

        if (answer == 1) {
            DisplayInfo();
        }
        else if (answer == 2)
        {
            ChangeCustomerChoice();
        }
        else if (answer == 3) {
            break;
        }
    }

    return 0;
}
