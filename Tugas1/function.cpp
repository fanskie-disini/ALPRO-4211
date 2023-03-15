//judul : function c++

#include<iostream>
#include<cstring>
using namespace std;

//kamus :
    int x, y, sizeArr;
    char ulang[2];

    //fungsi penjumlahan 2 bilangan
    int tambah(int a, int b)
    {
        return a + b;
    }

    //fungsi pengurangan 2 bilangan
    int kurang(int a, int b)
    {
        return a - b;
    }

    //fungsi menghitung nilai total dari array
    int sumArr(int arr[], int i)
    {
        int sum = 0;
        for(int n=0; n<i; n++)
        {
            sum += arr[n];
        }
        return sum;
    }

    //fungsi menghitung rata-rata dari array
    double avgArr(int arr[], int i)
    {
        int sum = 0;
        for(int n=0; n<i; n++)
        {
            sum += arr[n];
        }
        double avg = (double) sum / i ;
        return avg;
    }

//algoritma :
int main(){

    do{

    cout << "input bil : "; cin >> x;
    cout << "input bil lagi : "; cin >> y;
    cout << endl;

    cout << "penjumlahan dari " << x << " + " << y << " = ";
    cout << tambah(x, y) << endl;

    cout << "pengurangan dari " << x << " - " << y << " = ";
    cout << kurang(x, y) << endl;
    cout << endl;

    cout << "masukkan ukuran array : "; cin >> sizeArr;
    cout << endl;
    int arr[sizeArr];
    for(int n=0; n<sizeArr; n++)
    {
        cout << "\tnilai ke " << n+1 << " = "; cin >> arr[n];
        cout << endl;
    }
    int total = sumArr(arr, sizeArr);
    cout << "total nilai dalam array = " << total << endl;
    double avg = avgArr(arr, sizeArr);

    cout << "rata-rata nilai dalam array = " << avg << endl;
    cout << endl;
    cout << "jika ingin ulang program ketik y or Y -> "; cin >> ulang;
    cout << endl;

    }while((strcmp(ulang,"y")==0)or(strcmp(ulang,"Y")==0));

    return 0;
}
