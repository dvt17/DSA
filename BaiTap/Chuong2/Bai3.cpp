/*
 Nhập vào một chuỗi S bất kì. Đếm xem trong chuỗi S có bao nhiêu kí tự
khoảng trống, bao nhiêu kí tự số, bao nhiêu kí tự là chữ cái in hoa ?
*/

#include <iostream>
#include <string>
using namespace std;


int main(){
    string s;
    cout << "Nhap chuoi s: ";
    getline(cin,s);

    int countSpace = 0, countNumber = 0, countUpper = 0;
    for(char c : s){
        if(c == ' ') countSpace++;
        else if(c >= '0' && c <= '9') countNumber++; //isdigit()
        else if(c  >= 'A' && c <= 'Z' ) countUpper++;//isupper()
    }

    cout << "So luong ki tu khoang trong la: " << countSpace << endl;
    cout << "So luong ki tu so la: " << countNumber << endl;
    cout << "So luong ki tu chu cai in hoa la: " << countUpper << endl;
    return 0;
}