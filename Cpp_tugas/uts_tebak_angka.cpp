#include <iostream>
using namespace std;

int main(){
    char conInt = 'Y'; // for dummy
    int inNum; // intput from user
    
    while(conInt == 'Y' || conInt == 'y' && conInt != 'N' || conInt != 'n'){

        // Input neded from the ueser
        cout << "Input angka: "; cin >> inNum;

        // Questioning user whether wants to continue or not
        cout << "Ingin input angka lagi? [Y/N] "; cin >> conInt;

        /*
        while(conInt != 'Y' || conInt != 'y' && conInt != 'N' || conInt != 'n'){
            cout << "Invalid value. Please input Y (for continue) or N (for terminating) ! : "; cin >> conInt;
        }
        */
    }
    return 0;
}