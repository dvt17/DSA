/*
Tìm các phầnn t? xu?t hi?n chung ? c? 2 m?ng s? nguyên A và B
*/
#include <iostream>
using namespace std;
void eraseSimilar(int a[], int &n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            } 
        }
    }
}

int main(){
    int n,m;
    cout << "Nhap so phan tu cho mang a: " ;
    cin >> n;
    int a[n];
    cout <<"Nhap mang a: \n";
    for(int i = 0; i < n; i++) cin >> a[i];
    eraseSimilar(a,n);
    cout <<"\nNhap so phan tu cho mang b: ";
    cin >> m;
    int b[m];
    cout <<"Nhap mang b: \n";
    for(int i = 0; i < m; i++) cin >> b[i];
    eraseSimilar(b,m);
    cout << "\nCac phan tu trung nhau la: \n";
    bool check = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                cout << a[i] << " ";
                check = true;
            }
        }
    }
    if(!check){
        cout << "Khong co phan tu nao trung nhau ";
    }

    return 0;
}
