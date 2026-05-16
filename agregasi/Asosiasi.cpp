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
};

int main() {

    return 0;
}