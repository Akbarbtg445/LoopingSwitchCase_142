#include <iostream>
using namespace std;

float FungsiHitungRerata(float p,float q){
    return (p + q)/2;
}

string FungsiCekStatus(float r){
    if (r>=60){
        return "Lulus";
    }
    else{
        return "TidakLulus";
    }
}

int main(){
    float Nilai1,Nilai2;

    cout << "Masukan Nilai 1 : ";
    cin >> Nilai1;
    cout << "Masukan Nilai 2 : ";
    cin >> Nilai2;

    cout <<"Status Kelulusan : "
    << FungsiCekStatus(FungsiHitungRerata (Nilai1,Nilai2));
}