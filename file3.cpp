#include <iostream>
using namespace std;

float FungsiHitungLuasBerparameter(float a, float b){
    return a * b;
}

int main()
{
    float Panjang,Lebar;

    cout << "Masukan Panjangnya : ";
    cin >> Panjang;
    cout << "Masukan Lebarnya : ";
    cin >> Lebar;

    cout << "Luas Persegi Panjang : "
    << FungsiHitungLuasBerparameter(Panjang, Lebar);
}