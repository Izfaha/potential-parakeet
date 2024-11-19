#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int jenisModelPakaian, biayaDasarModel, biayaJual, waktuPengerjaan; // biaya jual will be considered later on
    jenisModelPakaian = 3;
    int keuntungan;

    while (jenisModelPakaian != 1 && jenisModelPakaian != 2)
    {
        cout << "====================== Model Pakaian =======================\n"
             << "1. Modul pakaian biasa.\n"
             << "2. Model pakaian custom.\n";
        cout << "Masukan pilihan anda [1 atau 2]: ";
        cin >> jenisModelPakaian;
        cout << "============================================================\n";
        
        while (jenisModelPakaian != 1 && jenisModelPakaian != 2)
        {
            cout << "Input tidak valid!. Mohon masukan pilihan 1 atau 2 : "; cin >> jenisModelPakaian;
        }
        // cout << "Input tidak valid!. Mohon masukan pilihan 1 atau 2.\n";
        // cin >> jenisModelPakaian;
    }
    // determining cost
    if (jenisModelPakaian == 1)
    {
        waktuPengerjaan = 2;     // dalam 2 hari minimal pengerjaan
        biayaDasarModel = 50000; // biaya dalam rupiah "Rp 50.000"
        biayaJual = 80000;       
    }
    else if (jenisModelPakaian == 2)
    {
        waktuPengerjaan = 3;     // dalam 3 hari minimal pengerjaan
        biayaDasarModel = 70000; // biaya dalam rupiah "Rp 70.000"
        biayaJual = 100000;      
    }

    keuntungan = biayaJual - biayaDasarModel;

    cout << "Untuk waktu pengerjaan pakaian adalah " << waktuPengerjaan << " hari." << endl;
    cout << "Biaya dasar seharga Rp " << biayaDasarModel << endl;
    cout << "Biaya jual seharga Rp " << biayaJual << endl;
    cout << "Keuntungan seharga Rp " << keuntungan << endl;
    return 0;
}