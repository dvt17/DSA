/*
 Nhập dữ liệu và sắp xếp mảng A[n] tăng dần. Sử dụng giải thuật tìm
kiếm nhị phân để tìm phần tử có giá trị bằng X ở trong mảng A sau đó xóa nó
khỏi A nếu tìm thấy.
*/
#include <iostream>
using namespace std;

void BubleSort(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = n-1; i > i; j--){
            if(a[j] < a[j-1]){
                int tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp; 
            }
        }
    }
}

int BinarySearch(int a[],int n, int x){
    int left = 0, right = n-1, mid;
    do{
        mid = (left + right) / 2;
        if(a[mid] == x) return mid;
        else {
            if(a[mid] < x ) left = mid + 1;
            else right = mid - 1;
        }
    }
    while (left <= right);
    return -1;
}

int main(){
    int n, x;
    cout << "Nhap n: ";cin >> n;
    int a[n];
    cout <<"Nhap mang A:\n";
    for(int i = 0; i < n; i++) cin >> a[i];
    BubleSort(a,n);
    cout <<"Nhap phan tu can xoa: "; cin >> x;
    int pos = BinarySearch(a,n,x);
    if(pos!=-1){
        cout <<"Mang a sau khi xu ly la: ";
        if(a[pos] == x){
            for(int i = pos; i < n-1; i++){
                a[i] = a[i+1];
            }
        }
        --n;   
    }else{
        cout << "Khong tim thay phan tu can xoa\n";
    }
    return 0;
}
