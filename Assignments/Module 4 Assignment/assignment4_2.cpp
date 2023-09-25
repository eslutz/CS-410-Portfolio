#include <iostream>
using namespace std;

int main()
{
    float vol, pi = 3.14159;
    int rad;

    cout << "Enter Radius: " << endl;
    cin >> rad;

    vol = rad * rad * rad * pi;
    cout << "The volume is: " << vol << endl;

    return 0;
}
