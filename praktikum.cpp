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
int main() {
    Barang elektronik;
    elektronik.nama ="PC";
    elektronik.jumlah = 2;
    elektronik.kategori ="elektronik";
    elektronik.tanggalproduksi = "20-12-2021";

    Barang nonelektronik;
    nonelektronik.nama ="Piring";
    nonelektronik.jumlah = 2;
    nonelektronik.kategori ="nonelektronik";
    nonelektronik.tanggalproduksi = "20-12-2021";

}