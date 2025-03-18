#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    //perulangan while
    int x;
    int perulanganwhile = 0;
    int perulanganDo = 0;
    
    srand(time(0));
    x = rand() % 10;
    cout << "Perulangan While" << endl;
    cout << "Nilai x awal = " << x << endl;

    while(x <7){
        cout << "Nilai x = "<< x << "Lari keliling" << endl;
        x = rand () % 10;
        perulanganwhile++;
    }
    cout << "Nilai x terakhir = " << x <<endl;
    cout<< "Jumlah perulangan = " << perulanganwhile <<endl;

    //perulangan DO while
    cout << endl;
    cout << "Perulangan Do While" << endl;
    do{
        cout << "Nilai x = "<< x <<"Lari keliling" << endl;
        x = rand() % 10;
        perulanganDo++;
    }while(x <7);
    cout << "Nilai x terakhir : "<< x <<endl;
    cout << "Jumlah perulangan Do while :" <<perulanganDo << endl;
}