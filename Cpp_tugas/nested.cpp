#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Current assiment variable
    int a = 220;
    int b = 300;
    int c = 9;

    // nested if condition
    if (a > b) { // False condition
        if (c > b) {
            cout << "Salah_1";
        }
        else {
            cout << "Benar_1";
        }
    }
    else { // True Condition
        if (b < c) { // False 
            cout << "Salah_2";
        }
        else { // True
            cout << "Benar_2";
        }
    }
        
} // namespace std;
