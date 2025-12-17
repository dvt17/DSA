/*
 Viết chương trình nhập dữ liệu cho mảng số nguyên A[n], với 0<n<100.
Hãy tìm trong A các phần tử là số lẻ và lưu vào mảng B.
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Nhap n: ";
    cin >> n;
    int a[n];

    cout << "\nNhap phan tu cho mang a voi " << n <<" phan tu: ";
    for(int i  = 0; i < n; i++) cin >> a[i];

    int x = 0;
    int b[x];
    for(int i = 0; i <n; i++){
        if(a[i] %2 != 0){
            b[x++] = a[i];
        }
    }
    cout << "Cac phan tu trong mang b la: " <<endl;
    for(int i = 0; i < x; i++){
        cout << b[i] <<" ";
    }

    return 0;
}