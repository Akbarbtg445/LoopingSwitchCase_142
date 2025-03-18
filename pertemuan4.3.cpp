#include <iostream>
using namespace std;

float luaspersegipanjang(float x, float y){
    return x * y;
}

float luaslingkaran(float x){
    return 3.14 * x *x;
}

int main(){
    int pilihan;
    float panjang,lebar,jejari;
    do{
        cout << "***MENU***" << endl;
        cout << "1. Menghitung Luas Persegi Panjang" << endl;
        cout << "2. Menghitung Luas Lingkaran" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih (1/2/3):";
        cin >> pilihan; 

        switch(pilihan)
        {
            case 1 :
            cout << "Hitung luas persegi panjang" << endl;
            cout << "Masukan panjang = ";
            cin >> panjang;
            cout << "Masukan lebar =";
            cin >> lebar;
            cout << "Luas persegi panjang =" << luaspersegipanjang(panjang,lebar) << endl;
            break;
            case 2 :
            cout << "Hitung luas lingkaran" << endl;
            cout << "Masukan jari - jari";
            cin >> jejari;
            cout <<"Luas lingkaran ="<< luaslingkaran(jejari) << endl;
            break;
            case 3 :
            break;
            default:
            cout <<"Pilihan salah, pilihan harus di anntara 1-3.";
            break;
         }
    }while(pilihan !=3);
}