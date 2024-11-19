#include <iostream>
using namespace std;

int hitungLembur(int totalJamKerja) {
    const int standarJamKerja = 40;
    int lemburKerja = totalJamKerja - standarJamKerja;
    return (lemburKerja > 0) ? lemburKerja : 0; // Logic found = return jika 'lembur_kerja' lebih besar dari maka nilai lembur kerja. jika tidak lembur kerja = 0. 
}

void tampilkanReward(int lemburKerja, int &rewardUang, string &rewardElektronik) {
    if (lemburKerja >= 100) {
        rewardUang = 10000000;
        rewardElektronik = "Laptop ASUS I5";
    } else if (lemburKerja >= 50) {
        rewardUang = 5000000;
        rewardElektronik = "Smart TV 43 inch";
    } else if (lemburKerja >= 30) {
        rewardUang = 3000000;
        rewardElektronik = "Smart Watch";
    } else {
        rewardUang = 0;
        rewardElektronik = "";
    }
}

int konversiUang(int sisaLembur) {
    return sisaLembur * 100000;
}

int main() {
    int totalJamKerja, lemburKerja;
    cout << "Input Total Jam Kerja: ";
    cin >> totalJamKerja;

    lemburKerja = hitungLembur(totalJamKerja);
    cout << "Lembur Kerja: " << lemburKerja << endl;

    int rewardUang;
    string rewardElektronik;
    tampilkanReward(lemburKerja, rewardUang, rewardElektronik);

    while (lemburKerja > 0) {
        cout << "Penukaran Lembur Kerja:" << endl;
        if (rewardUang > 0) {
            cout << "1. Reward Uang" << endl;
        }
        if (!rewardElektronik.empty()) {
            cout << "2. Reward Elektronik" << endl;
        }

        int pilihan;
        cout << "Input Reward [1/2]: ";
        cin >> pilihan;

        if (pilihan == 1 && rewardUang > 0) {
            cout << "Selamat, Anda mendapat Reward Rp. " << rewardUang << endl;
            lemburKerja = 0;
        } else if (pilihan == 2 && !rewardElektronik.empty()) {
            cout << "Selamat, Anda mendapat Reward " << rewardElektronik << endl;
            lemburKerja = 0;
        } else {
            cout << "Pilihan tidak valid." << endl;
            continue;
        }

        cout << "Sisa Lembur Kerja: " << lemburKerja << endl;

        if (lemburKerja >= 30) {
            int lagi;
            cout << "Apakah ingin melakukan penukaran Reward Lembur Kerja lagi [1: Ya, 0: Tidak]: ";
            cin >> lagi;
            if (lagi == 1) {
                tampilkanReward(lemburKerja, rewardUang, rewardElektronik);
            } else {
                break;
            }
        } else {
            break;
        }
    }

    if (lemburKerja > 0) {
        int konversi = konversiUang(lemburKerja);
        cout << "Konversi Sisa Lembur Kerja: " << konversi << endl;
    }

    return 0;
}