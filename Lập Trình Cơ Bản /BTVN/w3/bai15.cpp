#include <iostream>
using namespace std;

int main() {
    double trongLuong, khoangCach;

    cout << "Nhap trong luong goi hang (kg): ";
    cin >> trongLuong;

    cout << "Nhap khoang cach van chuyen (dam): ";
    cin >> khoangCach;

    if (trongLuong <= 0 || trongLuong > 20) {
        cout << "Trong luong khong hop le.";
        return 0;
    }

    if (khoangCach < 10 || khoangCach > 3000) {
        cout << "Khoang cach khong hop le.";
        return 0;
    }

    double mucPhi;

    if (trongLuong < 2)
        mucPhi = 1.10;
    else if (trongLuong < 6)
        mucPhi = 2.20;
    else if (trongLuong < 10)
        mucPhi = 3.70;
    else
        mucPhi = 4.80;

    double tongPhi = mucPhi * khoangCach;

    cout << "Muc phi tren moi dam: " << mucPhi << "$" << endl;
    cout << "Tong phi van chuyen: " << tongPhi << "$";

    return 0;
}
