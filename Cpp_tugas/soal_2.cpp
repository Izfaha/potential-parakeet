#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Soal = y = ax^2 + bx + c, tentukan hasil y"<< "\n";

    int a, b, c;
    double x, y;

    cout << "Masukan nilai untuk a :"; cin >> a;
    cout << "Masukan nilai untuk x :"; cin >> x;
    cout << "Masukan nilai untuk b :"; cin >> b;
    cout << "Masukan nilai untuk c :"; cin >> c;
    
    // Formula 
    y = a * x * x + b * x + c; 

    // The result of the formula
    cout << "Hasil dari y adalah " << y << "\n";
    return 0;
}