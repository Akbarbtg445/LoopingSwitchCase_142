#include <iostream>
using namespace std;

float Luas, Panjang, Lebar;

void ProsedurHitungLuas(){
    Luas = Panjang * Lebar;
}

int main ()
{
    cout <<"Masukan Panjangnya : ";
    cin >> Panjang;
    cout <<"Masukan Lebarnya : ";
    cin >> Lebar;
    ProsedurHitungLuas();
    cout <<"Luas Persegi Panjang : " <<Luas; 
}