#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    int i, j, tmp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] < arr[j + 1]){
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

void insertion(int arr[], int n){
    for(int s = 1;s < n;s++){
        int k = arr[s];
        int j = s - 1;

        while(arr[j]<k && j >=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }
}

int main(){
    int arr[100], n, i, j;
    cout << "masukkan banyak elemen : \n"; cin >> n;
    cout << "masukkan nilai : \n";
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubbleSort(arr, n);
    cout << "hasil pengurutan : \n";
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}
