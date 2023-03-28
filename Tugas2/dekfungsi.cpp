//judul : deklarasi fungsi yg sudah ada - TUGAS 2 ALPRO

#include<iostream>
using namespace std;

//kamus :

	//deklarasi fungsi
	int MaxArray(int arr[], int n);
	int MinArray(int arr[], int n);
	bool isEven(int x);
	bool isOdd(int x);
	bool isFactor(int x, int y);
	int sumEven(int arr[], int n);
	int sumOdd(int arr[], int n);

//algortima :
int main(){
	
	//max and min
	int n1, n2;
	cout << "masukkan 2 bilangan : " << endl;
	cin >> n1 >> n2;
	cout << endl;
	
	cout << "bilangan terbesar : " << max(n1,n2) << endl;
	cout << "bilangan terkecil : " << min(n1,n2) << endl;
	cout << endl;
	
	//max and min array
	int i;
	cout << "berapa banyak parameter array : "; cin >> i;
	int arr[i];
	cout << "masukkan " << i << " bilangan : " << endl;
	for(int j=0; j<i; j++){
		cin >> arr[j];
	}
	cout << endl;
	
	cout << "bilangan terbesar dari array di atas adalah : " << MaxArray(arr, i) << endl;
	cout << "bilangan terkecil dari array di atas adalah : " << MinArray(arr, i) << endl;
	cout << endl;
	
	//sumEven and sumODd
	cout << "jumlah bilangan genap pada array di atas adalah : " << sumEven(arr, i) << endl;
	cout << "jumlah bilangan ganjil pada array di atas adalah : " << sumOdd(arr, i) << endl;
	cout << endl;
	
	//isEven and isOdd
    int num;
    cout << "masukkan bilangan genap atau ganjil, bebas.. "; cin >> num;
    cout << endl;
	cout << "1 = BENAR" << endl;
	cout << "0 = SALAH" << endl;
    cout << endl;
	cout << "apakah " << num << " bilangan genap ? " << isEven(num) << endl;
	cout << "apakah " << num << " bilangan ganjil ? " << isOdd(num) << endl;
	cout << endl;
	
	//isFactor - diambil dari proses min and max diatas
	cout << "apakah " << n1 << " adalah bilangan faktor dari " << n2 << " : " << isFactor(n1, n2) << endl;
	
	return 0;
}

//definisi fungsi
int MaxArray (int arr[], int n){
	int temp = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] > temp){
			temp = arr[i];
		}
	}
	return temp;
}

int MinArray (int arr[], int n){
	int temp = arr[0];
	for(int i=0; i<n; i++){
		if(arr[i] < temp){
			temp = arr[i];
		}
	}
	return temp;
}

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }else
		{
        	return false;
   		}
}

bool isOdd(int x)
{
    if (x % 2 != 0)
    {
        return true;
    }else
    	{
			return false;
    	}
}

bool isFactor(int x, int y)
{
	if(x % y == 0)
	{
		return true;
	} else{
		return false;
	}
}

int sumEven(int arr[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		if(arr[i] % 2 == 0){
			sum += arr[i];
		}
	}
	return sum;
}

int sumOdd(int arr[], int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		if(arr[i] % 2 != 0){
			sum += arr[i];
		}
	}
	return sum;
}
