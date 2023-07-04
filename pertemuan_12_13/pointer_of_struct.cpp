#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string* merk;
    string* type;
    int* tahun;
    string* harga;
};

int main() {
    Sepeda sepeda;
    string merk = "Polygon";
    string type = "Sepeda Gunung";
    int tahun = 2013;
    string harga = "2.000.000";

    // Assigning pointers to members
    sepeda.merk = &merk;
    sepeda.type = &type;
    sepeda.tahun = &tahun;
    sepeda.harga = &harga;

    // Accessing members using pointers
    cout << "Merk: " << *sepeda.merk << endl;
    cout << "Type: " << *sepeda.type << endl;
    cout << "Tahun: " << *sepeda.tahun << endl;
    cout << "Harga: " << *sepeda.harga << endl;

    return 0;
}
