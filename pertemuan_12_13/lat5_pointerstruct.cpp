#include <iostream>
using namespace std;

struct sepeda {
    string merk;
    string type;
    int tahun;
    string harga;
};

int main() {
    sepeda Sepeda;
    Sepeda.merk = "Polygon";
    Sepeda.type = "Sepeda Gunung";
    Sepeda.tahun = 2013;
    Sepeda.harga = "2.000.000";

    sepeda* ptrSepeda = &Sepeda;

    cout << "Merk: " << ptrSepeda->merk << endl;
    cout << "Type: " << ptrSepeda->type << endl;
    cout << "Tahun: " << ptrSepeda->tahun << endl;
    cout << "Harga: " << ptrSepeda->harga << endl;

    return 0;
}
