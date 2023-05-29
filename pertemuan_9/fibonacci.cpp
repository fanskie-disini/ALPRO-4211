#include<iostream>
using namespace std;

int faktorial(int n){
    int hasil = 1;
    for(int i=1; i<=n; i++){
        hasil *= i;
    }
    return hasil;
}

int faktorialRec(int n){
    if(n==0)
        return 1;
    else
        return n * faktorialRec(n-1);
}

int add(int a, int b){
    if(b==0)
        return a;
    else
        return 1 + add(a, b-1);
}

int addRec(int a, int b){
    if(a>0)
        return 1 + addRec(a-1, b);
    else if(b>0)
        return 1 + addRec(a, b-1);
    else
        return 0;
}

/*int addRec(int a, int b){
    if(a<=0 && b<=0)
        return 0;
    else if(a>0)
        return 1 + addRec(a-1, b);
    else if(b>0)
        return 1 + addRec(a, b-1);
}*/

int fib(int n){
    if(n<=1)
        return n;
    else return fib(n-1) + fib(n-2);
}


int main(){

    cout << faktorial(4) << endl;
    cout << faktorialRec(4) << endl;
    cout << add(4,3) << endl;
    cout << addRec(4,3) << endl;
    cout << fib(8) << endl;

    return 0;
}
