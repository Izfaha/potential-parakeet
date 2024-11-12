#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {

    int option = -1;  // Initialize option to enter the loop
    string nama;

    cout << "Menu\n"
         << "1. Asia\n"
         << "2. Eropa\n"
         << "0. Exit" << endl;

    while(option != 0) {
        cout << "Select an option: ";
        cin >> option;

        // Ignore leftover newline from previous input
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (option == 0) {
            cout << "Exiting program." << endl;
            break;
        }

        cout << "What is your name: ";
        getline(cin, nama);

        cout << "Hello, " << nama << "!" << endl;
    }

    return 0;
}
