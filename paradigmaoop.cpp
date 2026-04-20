#include <iostream>
using namespace std;

class Mahasiswa {

public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "NIM : " << nim << endl;
        cout << "Nama : " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }
}; //batas kelas

int main(){
    Mahasiswa mhs;
    mhs.nim = 2022;
    mhs.nama = "Abra";
    mhs.nilai = 90.5;

    mhs.printData();
}

#include <iostream>
#include <string>
using namespace std;

class Barang {
    public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

void printData(){
        cout << "Nama: " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Tanggalproduksi: " << tanggalproduksi<< endl;
    }   
};
