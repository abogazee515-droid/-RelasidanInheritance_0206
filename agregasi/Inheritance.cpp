#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) : nama(pNama) {
        cout << "orang dibuat\n";
    }

    ~orang() {
        cout << "orang dihapus\n";
    }
};

int main() {

    return 0;
}