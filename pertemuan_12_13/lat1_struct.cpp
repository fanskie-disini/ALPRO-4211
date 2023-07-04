#include<iostream>
using namespace std;

//cara 1
struct persegiPanjang{
    int p, l, luas;
};

struct lingkaran{
    float phi, r, jml;
};

struct kerucut{
    float phi, r, t, jml;
};

struct bola{
    float phi, r, jml;
};


//cara 2
const float phi = (22.0 / 7.0);

struct bangunDatar{
    float p, l;

    float luasPersegiPanjang(){
        return p * l;
    }
    float luasLingkaran(float r){
        return phi * r * r;
    }
};

struct bangunRuang {
    float r, t;

    float volumeKerucut() {
        return (1.0 / 3.0) * phi * r * r * t;
    }

    float volumeBola() {
        return (4.0 / 3.0) * phi * r * r * r;
    }
};


int main()
{
    //cara 1
    cout << "ADT CARA 1" << endl;

    struct persegiPanjang luasPer;
    luasPer.p = 7;
    luasPer.l = 3;
    luasPer.luas = luasPer.p * luasPer.l;
    cout << "Luas Persegi Panjang \t: " << luasPer.luas << endl;

    struct lingkaran luasLing;
    luasLing.phi = (22.0 / 7.0);
    luasLing.r = 4;
    luasLing.jml = luasLing.phi * luasLing.r * luasLing.r;
    cout << "Luas Lingkaran \t\t: " << luasLing.jml << endl;

    struct kerucut volKer;
    volKer.phi = (22.0 / 7.0);
    volKer.r = 4;
    volKer.t = 18;
    volKer.jml = (1.0 / 3.0) * volKer.phi * volKer.r * volKer.r * volKer.t;
    cout << "Volume Kerucut \t\t: " << volKer.jml << endl;

    struct bola volBola;
    volBola.phi = (22.0 / 7.0);
    volBola.r = 4;
    volBola.jml = (4.0 / 3.0) * volBola.phi * volBola.r * volBola.r * volBola.r;
    cout << "Volume Bola \t\t: " << volBola.jml << endl;

    cout << endl;

    //cara 2
    cout << "ADT CARA 2" << endl;

    bangunDatar persegiPanjang;
    persegiPanjang.p = 7;
    persegiPanjang.l = 3;
    cout << "Luas Persegi Panjang \t: " << persegiPanjang.luasPersegiPanjang() << endl;

    bangunDatar lingkaran;
    float r = 4;
    cout << "Luas Lingkaran \t\t: " << lingkaran.luasLingkaran(r) << endl;

    bangunRuang kerucut;
    kerucut.r = 4;
    kerucut.t = 18;
    cout << "Volume Kerucut \t\t: " << kerucut.volumeKerucut() << endl;

    bangunRuang bola;
    bola.r = 4;
    cout << "Volume Bola \t\t: " << bola.volumeBola() <<endl;


    return 0;
}
