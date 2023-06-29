#include <iostream>
using namespace std;

struct AOS{
    string nama;
    string nim;
    string jurusan;
    int tahun;
};

int main()
{
    const int jumlahArray = 4;
    AOS myAOS[jumlahArray];

    myAOS[0].nim = "A11.2020.14489";
    myAOS[0].nama = "Rama";
    myAOS[0].jurusan = "Teknik Informatika";
    myAOS[0].tahun = 2023;

    myAOS[1].nim = "A11.2010.14000";
    myAOS[1].nama = "Ali";
    myAOS[1].jurusan = "Manajemen";
    myAOS[1].tahun = 2013;

    myAOS[2].nim = "A11.2000.1200";
    myAOS[2].nama = "Rian";
    myAOS[2].jurusan = "Teknik Industri";
    myAOS[2].tahun = 2003;

    myAOS[3].nim = "A11.1990.11000";
    myAOS[3].nama = "Junet";
    myAOS[3].jurusan = "DKV";
    myAOS[3].tahun = 1993;

    for (int i = 0; i < jumlahArray; i++) {
        cout << "NIM: " << myAOS[i].nim << endl;
        cout << "Nama: " << myAOS[i].nama << endl;
        cout << "Jurusan: " << myAOS[i].jurusan << endl;
        cout << "Tahun Lulus: " << myAOS[i].tahun << endl;
        cout << endl;
    }
return 0;
}
