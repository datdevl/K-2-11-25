#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int luaChon;
    double khoangCach, tocDo, thoiGian;
    cout << "1. Khong khi\n";
    cout << "2. Nuoc\n";
    cout << "3. Thep\n";
    cout << "Chon moi truong (1-3): ";
    cin >> luaChon;
    if (luaChon != 1 && luaChon != 2 && luaChon != 3) {
        cout << "Lua chon khong hop le.";
        return 0;
    }
    cout << "Nhap khoang cach (feet): ";
    cin >> khoangCach;
    if (khoangCach < 0) {
        cout << "Khoang cach khong hop le.";
        return 0;
    }
    if (luaChon == 1)
        tocDo = 1100;
    else if (luaChon == 2)
        tocDo = 4900;
    else
        tocDo = 16400;
    thoiGian = khoangCach / tocDo;
    cout << fixed << setprecision(4);
    cout << "Thoi gian truyen am: " << thoiGian << " giay";
    return 0;
}
