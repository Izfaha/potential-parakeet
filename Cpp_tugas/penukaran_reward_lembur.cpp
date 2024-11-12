#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int total_working_hours, overtime, overtime_input, input_reward;
    
    // Output program =>
    cout << "===== * Overtime Reward * =====" << endl;
    cout << "Input Total Jam Kerja: "; cin >> total_working_hours;
    // Formula
    overtime = total_working_hours - 40;
    cout << "Lembur Kerja: " << overtime << endl;

    cout << "Penukaran Lembur Kerja:\n"
        << "1. Reward Uang.\n"
        << "2. Reward Elektronik.\n";
    cout << "Input Reward [1/2]: "; cin >> input_reward;
    cout << "You chose " << abs(input_reward);
    cout << endl;
    cout << "Selamat!, Anda mendapatkan Reward";

    return 0;
}