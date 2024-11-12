#include<iostream>
using namespace std;

int main() {
    int i, life;
    i = 1;

    while(i > 0) {
        cout << "Program random number!" << endl;
        cout << "Input your number: "; cin >> i;
        if (i == 10) {
            cout << "Your guess is as good as mine\n";
            cout << "Program is terminated\n";
            break;
        }
        cout << i << endl;
        cout << "You chose incorrect answer\n";
    }
    return 0;
}