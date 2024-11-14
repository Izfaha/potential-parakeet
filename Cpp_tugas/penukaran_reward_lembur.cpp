#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int total_working_hours, overtime, input_reward;
    const int standar_jam_kerja = 40;

    // Output program =>
    cout << "===== * Overtime Reward * =====" << endl;
    cout << "Input Total Jam Kerja: ";
    cin >> total_working_hours;

    // Calculate overtime
    overtime = (total_working_hours > standar_jam_kerja) ? (total_working_hours - standar_jam_kerja) : 0; // New logic
    cout << "Lembur Kerja: " << overtime << endl;
    cout << "===============================" << endl;

    cout << "Penukaran Lembur Kerja:\n"
         << "1. Reward Uang.\n"
         << "2. Reward Elektronik.\n";
    cout << "Input Reward [1/2]: ";
    cin >> input_reward;

    // Switch for option condition. ==>
    switch (input_reward)
    {
    case 1:
    {
        if (overtime <= 40)
        {
            int reward_amount = total_working_hours * 100000; // Calculate reward amount based on overtime
            cout << "Selamat!, Anda mendapatkan Reward " << abs(reward_amount) << " IDR." << endl;
        }
        else
        {
            int reward_amount = overtime * 100000;
            cout << "Selamat!, Anda mendapatkan Reward " << reward_amount << " IDR." << endl;
        }
        break;
    }
    case 2:
    {
        int reward_amount = overtime * 100000; // Calculate reward amount based on overtime
        if (reward_amount >= 10000000)
        {
            cout << "Selamat!, Anda mendapatkan Reward Laptop ASUS I5." << endl;
        }
        else if (reward_amount >= 5000000)
        {
            cout << "Selamat!, Anda mendapatkan Reward Smart TV 43 inch." << endl;
        }
        else if (reward_amount >= 3000000)
        {
            cout << "Selamat!, Anda mendapatkan Reward Smart watch." << endl;
        }
        else
        {
            cout << "Konversi sisa lembur kerja: " << reward_amount << " IDR." << endl;
        }
        break;
    }
    default:
        cout << "You input wrong number. The number should be 1 - 2." << endl;
    }

    return 0;
}