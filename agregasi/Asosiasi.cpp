#include <iostream>
#include <vector>
using namespace std;

class dokter;

class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;

    pasien(string pNama) : nama(pNama) {
        cout << "Pasien ada\n";
    }

    ~pasien() {
        cout << "Pasien tidak ada\n";
    }

    void tambahDokter(dokter*);
    void cetakDokter();
};

class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama) : nama(pNama) {
        cout << "Dokter ada\n";
    }

    ~dokter() {
        cout << "Dokter tidak ada\n";
    }

    void tambahPasien(pasien*);
    void cetakPasien();
};

int main() {

    return 0;
}