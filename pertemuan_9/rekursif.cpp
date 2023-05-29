#include <iostream>
using namespace std;

int tambah (int a,int b){
    if (a == 0)
    {
        return b;
    }else
    {
        return 1 + tambah(a-1,b);
    }
}

int kurang (int a, int b){
    if ( b == 0)
    {
        return a;
    }else
    {
        return -1 + kurang(a,b-1);
    }
}

int kali (int a,int b){
    if (a == 1)
    {
        return b;
    }else
    {
        return b + kali(a-1,b);
    }
}

int bagi (int a,int b){
    if (a < b)
    {
        return 0;
    }else
    {
        return 1 + bagi(a-b,b);
    }
}

int pangkat (int a,int b){
    if (b == 0)
    {
        return 1;
    }else
    {
        return a * pangkat(a,b-1);
    }
}


int main()
{
    cout << tambah(5,5) << endl;
    cout << kurang(5,3) << endl;
    cout << kali(4,2) << endl;
    cout << bagi(8,2) << endl;
    cout << pangkat(3,3) << endl;

    return 0;
}
