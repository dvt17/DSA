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
    int a[n], x = 0, b[x];
    cout << "\nNhap phan tu cho mang a voi " << n <<" phan tu: ";
    for(int i  = 0; i < n; i++){
       cin >> a[i]; 
        if(a[i] %2 != 0){
            b[x++] = a[i];
        }
    } 
    if(x!=0){
         cout << "Cac phan tu trong mang b la: " <<endl;
        for(int i = 0; i < x; i++){
            cout << b[i] <<" ";
        }
    }else{
        cout <<"Khong co phan tu nao la so le!!!\n";
    }
    return 0;
}