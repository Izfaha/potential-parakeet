#include <iostream>
using namespace std;

int main() {
    // Program Tahun Kabisat
    int year = 2026;

    if (year % 4 == 0) {
        cout << "2026 is a leap year";
    } else {
        cout << "2026 is not a leap year";
    }
    return 0;
}