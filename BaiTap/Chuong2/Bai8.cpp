/*
Cho 1 danh sách gồm n sinh viên. Đếm xem có bao nhiêu sinh
viên có họ là "Tran"(khong phan biệt chữ hoa chữ thường)
*/

#include <iostream>
#include<vector>
using namespace std;

struct SinhVien{
    string ho, ten;
};

string upperCharacter(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    vector<SinhVien> ds(n);
    for(int i = 0 ; i < n; i++){
        cout << "Nhap ho ten cua sinh vien thu " << i+1 <<":\n";
        cin >> ds[i].ho >> ds[i].ten;
    }
    bool check = false;
    cout << "Ho va ten sinh vien co ho Tran: \n";
    for(const auto& it : ds){
        if(upperCharacter(it.ho) == "TRAN"){
            cout <<"Ho va ten:  " << it.ho <<" " <<it.ten <<endl;
            check = true;
        }
    }
    if(!check){
        cout <<"Khong co sinh vien nao" << endl;
    }
    return 0;
}
