/*
Viết chương trình nhập vào sanh sách sinh viên. Thông tin mỗi sinh
viên gồm: mssv, họ tên, sinh nhật (ngày, tháng năm). Hãy tìm những sinh viên
có sinh nhật vào tháng 7.
*/

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

struct Date{
    int d,m,y;
};
struct SinhVien{
    char mssv[11];
    char Ten[33];
    Date SinhNhat;

};

int main(){
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien s[n];

    cout << "Nhap du lieu cho danh sach sinh vien:\n";

    for(int i = 0; i < n; i++){
        cout <<"Sinh vien thu " << i+1 << ": \n";
        cout << "MSSV: ";
        cin.ignore();
        cin.getline(s[i].mssv,11);
        cout <<"Ho va ten: ";
        cin.getline(s[i].Ten,33);
        cout <<"Nhap ngay thang nam sinh(cach nhau boi dau cach): ";
        cin >> s[i].SinhNhat.d >> s[i].SinhNhat.m >> s[i].SinhNhat.y;
    }

    int dem = 0;
    for(int i = 0; i < n; i++){
        if(s[i].SinhNhat.m == 7){
            if(dem==0){
                cout << "Danh sach sinh vien sinhvao thang 7:\n";
                cout << "STT\tMSSV\tHo va ten\tSinhNhat\n";
            }
            dem++;
            cout << dem << "\t" << s[i].mssv <<"\t" << s[i].Ten
                <<"\t" << s[i].SinhNhat.d <<"/"<<s[i].SinhNhat.m<"/"<<s[i].SinhNhat.y<<endl;       
        }
    } 
    if(dem==0){
        cout << "Khong co sinh vien nao sinh vao thang 7" <<endl;
    }



    return 0;

}