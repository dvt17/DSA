#include <iostream>
#include <string>
#include <cctype>  // isdigit, isupper, isspace
using namespace std;

bool kiemTraMatKhau(const string &pw) {
    if (pw.length() < 8) return false;

    bool coSo = false, coHoa = false, coKhoangTrang = false;

    for (char c : pw) {
//        if (isdigit(c)) coSo = true;
//        if (isupper(c)) coHoa = true;
//        if (isspace(c)) coKhoangTrang = true;
		if(c == ' ') coKhoangTrang = true;
		if(c >='A' && c <='Z' ) coHoa = true;
		if(c >= '0' && c <= '9') coSo = true;
    }

    if (coKhoangTrang) return false;
    if (!coSo || !coHoa) return false;

    return true;
}

int main() {
    string password;
    int soLanSai = 0;
    const int maxSai = 5;

    while (soLanSai < maxSai) {
        cout << "Nhap mat khau: ";
        cin >> password;

        if (kiemTraMatKhau(password)) {
            cout << "Mat khau hop le!" << endl;
            return 0;
        } else {
            soLanSai++;
            cout << "Mat khau khong hop le. Ban con " 
                 << (maxSai - soLanSai) << " lan thu." << endl;
        }
    }

    cout << "Ban da nhap sai qua 5 lan. Dang ky that bai!" << endl;
    return 0;
}

