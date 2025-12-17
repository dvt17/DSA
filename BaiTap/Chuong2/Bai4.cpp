/*
Viết chương trình xóa phần tử có giá trị bằng nhau trong mảng và giữ
lại phần từ đâu tiên trong những phần tử trùng nhau đó
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
    
    cout <<"\nMang a: ";
    for(int i  = 0; i < n; i++) cout << a[i] << " "; 

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
            } 
        }
    }

    cout <<"\nMang a sau khi xu ly: ";
    for(int i  = 0; i < n; i++) cout << a[i] << " "; 
    return 0;
}