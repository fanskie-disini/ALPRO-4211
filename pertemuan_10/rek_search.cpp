#include<iostream>
using namespace std;

bool searching(int a[], int n, int x, int& index){
    if(n == 0)
        return false;
    if(a[n-1] == x){
        index = n-1;
        return true;
    }
    else{
        return searching(a, n-1, x, index);
    }
}

int main(){
    int arr[] = {1,7,6,4};
    int cari = 6;
    int size = sizeof(arr)/sizeof(arr[0]);
    int index;
    bool ketemu = searching(arr, size, cari, index);

    if(ketemu){
        cout << "elemen " << cari << " ditemukan pada indeks " << index << " dari array yg ada.";
    }else{
        cout << "elemen " << cari << " tidak ditemukan!";
    }

    return 0;
}
