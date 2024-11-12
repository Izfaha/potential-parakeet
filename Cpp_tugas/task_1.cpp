#include <iostream>
using namespace std;

int main() {
    int adder, nilai, numSuggestion, result_1, result_2, result_3, rumus;

    cout << "Must be resulting 10" << endl;
    cout << "Masukan nilai: "; cin >> nilai; // Input masukan nilai

    if (nilai == 10) {
        cout << "Bilangan anda sudah 10" << endl;
        cout << "Selamat, program telah menampilkan bilangan " << nilai << endl;
    } else if (nilai < 10) {
        // Logic Formula untuk "Lebih Kecil"
        adder = 10 - nilai;
        cout << "Bilangan anda kurang dari 10" << endl;
        cout << "Untuk menjadi 10, maka program harus di tambahkan " << adder << endl;
        cout << "Silahkan TEKAN angka " << adder << "!!!" << endl;
        cin >> numSuggestion;
        result_1 = nilai + numSuggestion;
        cout << "Nilai anda sudah " << result_1 << endl;
    } else if (nilai > 10) {
        // Logic Formula untuk "Lebih Besar"
        adder = nilai - 10;
        cout << "Bilangan anda LEBIH DARI 10" << endl;
        cout << "Untuk menjadi 10, maka program harus dikurangkan " << adder << endl;
        cout << "Silahkan TEKAN angka " << adder << "!!!" << endl;
        cin >> numSuggestion;
        rumus = nilai - numSuggestion;
        cout << "Nilai anda sudah " << rumus << endl;
    } else {
        cout << "NaN" << endl;
    }
    return 0;
}