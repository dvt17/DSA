/*
Cho dãy số nguyên dương. Hãy tìm số chẵn có giá trị cao nhất trong A
*/
#include <iostream>
using namespace std;
bool isEvenPositiveNumber(int n){
    if(n > 0 && n % 2 == 0) return true;
    return false;
}
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    cout << "Nhap phan tu cho mang A: \n";
    for(int i = 0; i < n; i++) cin >> a[i];
    int tmp = -1;
    for(int i = 0; i < n; i++){
        if(a[i] > tmp && isEvenPositiveNumber(a[i])){
            tmp = a[i];
        }
    }
    if(tmp != -1){
        cout << "So chan lon nhat trong mang a: " << tmp;
    }
    else cout <<"Mang khong co phan tu chan nao\n";
    return 0;
}