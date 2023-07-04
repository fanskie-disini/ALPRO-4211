#include <iostream>
using namespace std;

typedef struct {
    int x, y, jml;
} hitung;

typedef struct {
    int p, l, luas;
} persegi;

typedef struct {
    float phi, r, luas;
} lingkaran;

typedef struct {
    float phi, r, t, volume;
} kerucut;

typedef struct {
    float phi, r, volume;
} bola;

int main()
{
    //luas persegi panjang
    persegi luasPer;
    luasPer.p = 10;
    luasPer.l = 5;
    luasPer.luas = luasPer.p * luasPer.l;
    cout << "Luas Persegi panjang adalah = " << luasPer.luas << endl;

    //luas lingkaran
    lingkaran luasLing;
    luasLing.r = 4;
    luasLing.phi = 22.0 / 7.0;
    luasLing.luas = luasLing.phi * luasLing.r * luasLing.r;
    cout << "Luas Lingkaran adalah = " << luasLing.luas << endl;

    //volume kerucut
    kerucut volKer;
    volKer.phi = 22.0 / 7.0;
    volKer.r = 4;
    volKer.t = 18;
    volKer.volume = (1.0 / 3.0) * volKer.phi * volKer.r * volKer.r * volKer.t;
    cout << "Luas Kerucut adalah = " << volKer.volume<< endl;

    //volume bola
    bola volBola;
    volBola.phi = 22.0 / 7.0;
    volBola.r = 4;
    volBola.volume = (4.0 / 3.0) * volBola.phi * volBola.r * volBola.r * volBola.r;
    cout << "Luas Kerucut adalah = " << volBola.volume << endl;

    return 0;
}
