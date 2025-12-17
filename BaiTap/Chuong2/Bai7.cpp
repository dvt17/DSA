/*
Tìm số nguyên tố lớn nhất xuất hiện trong mảng số nguyên A
*/
#include <iostream>
#include <cmath>
using namespace std;

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return true;
}

int findOfMaxPrime(int a[], int n){
    int tmp = -1;
    for(int i = 0; i < n; i++){
        if(a[i] > tmp && prime(a[i]) ){
            tmp = a[i];
        }
    }
    return tmp;
}


int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    cout << "Nhap phan tu cho mang A: \n";
    for(int i = 0; i < n; i++) cin >> a[i];
    if(findOfMaxPrime(a,n) != -1){
        cout << "So nguyen to lon nhat trong mang A: " << findOfMaxPrime(a,n);
    }
    else cout << "Mang khong co so nguyen to nao" << endl;
    return 0;
}