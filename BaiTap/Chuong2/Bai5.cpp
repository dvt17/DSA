/*
Viết chương trình nhập vào sanh sách sinh viên. Thông tin mỗi sinh
viên gồm: mssv, họ tên, sinh nhật (ngày, tháng năm). Hãy tìm những sinh viên
có sinh nhật vào tháng 7.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct SinhVien{
    string mssv, hoTen;
    int ngay, thang, nam;

};

int main(){
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    vector<SinhVien> sv(n);

    for(int i = 0; i < n; i++){
        cout << "\nNhap thong tin sinh vien " << i+1 << ":\n";
        cout << "MSSV: ";
        cin >> sv[i].mssv;
        cin.ignore();
        cout << "Ho ten: ";
        getline(cin,sv[i].hoTen);
        cout << "Ngay sinh(ngay,thang,nam): ";
        cin >> sv[i].ngay >> sv[i].thang >> sv[i].nam;
    }

    cout << "Danh sach sinh vien sinhvao thang 7:\n";
    bool check = false;
    for(const auto& it : sv){
        if(it.thang == 7){
            cout << "MSSV: " << it.mssv <<"\nHo ten: " << it.hoTen
                <<"\nNgay sinh: " << it.ngay <<"/"<<it.thang<<"/"<<it.nam <<endl;
            check = true;         
        }
    } 
    if(!check){
        cout << "Khong co sinh vien nao sinh vao thang 7" <<endl;
    }



    return 0;

}