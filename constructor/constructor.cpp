#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private:
    int nim;
    string nama;

public:
    Mahasiswa() {
        nim = 0;
        nama = "";
    };

    Mahasiswa(int iNim) {
        nim = iNim;
    };

    Mahasiswa(string);
    Mahasiswa(int iNim, string iNama);
    void cetak();
};

Mahasiswa::Mahasiswa(string iNama) {
    nim = 0;
    nama = iNama;
}

Mahasiswa::Mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void Mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama = " << nama << endl;
}

int main()
{
    Mahasiswa joko;
    Mahasiswa lia (123);
    Mahasiswa asroni ("Budi");
    Mahasiswa faiq{ 123,"ogoh" };

    joko.cetak();
    lia.cetak();
    asroni.cetak();
    faiq.cetak();

    system("pause");
    return 0;

}


