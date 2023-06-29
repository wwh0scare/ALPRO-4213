#include <iostream>
using namespace std;

    struct motor{
        string Merk;
        string type;
        int Tahun;
        int Harga;

};
struct motor myMotor;

int main(){
    myMotor.Merk = "Kawasaki";
    myMotor.type = "ZX636R";
    myMotor.Tahun = 2018;
    myMotor.Harga = 600000000;

    motor *pointerMotor;
    pointerMotor = &myMotor;

    cout << "Merk : " << pointerMotor->Merk << endl;
    cout << "Type : " << pointerMotor->type << endl;
    cout << "Tahun : " << pointerMotor->Tahun << endl;
    cout << "Harga : " << pointerMotor->Harga << endl;

    return 0;
}
