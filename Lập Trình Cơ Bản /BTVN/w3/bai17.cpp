#include <iostream>
#include <string>
using namespace std;

int main() {
    string ten1, ten2, ten3;
    string ngay1, ngay2, ngay3;
    float cao1, cao2, cao3;

    cout << "Nhap ten VDV 1: ";
    cin >> ten1;
    cout << "Nhap ngay thi dau: ";
    cin >> ngay1;
    cout << "Nhap chieu cao (m): ";
    cin >> cao1;

    cout << "Nhap ten VDV 2: ";
    cin >> ten2;
    cout << "Nhap ngay thi dau: ";
    cin >> ngay2;
    cout << "Nhap chieu cao (m): ";
    cin >> cao2;

    cout << "Nhap ten VDV 3: ";
    cin >> ten3;
    cout << "Nhap ngay thi dau: ";
    cin >> ngay3;
    cout << "Nhap chieu cao (m): ";
    if (cao1 < 2.0 || cao1 > 5.0 ||
        cao2 < 2.0 || cao2 > 5.0 ||
        cao3 < 2.0 || cao3 > 5.0) {
        cout << "Loi: Chieu cao phai tu 2.0m den 5.0m";
        return 0;
    }
    cout << "\nXep hang thanh tich:\n";
    if (cao1 >= cao2 && cao1 >= cao3) {
        cout << "Nhat: " << ten1 << " - " << cao1 << "m\n";
        if (cao2 >= cao3) {
            cout << "Nhi: " << ten2 << " - " << cao2 << "m\n";
            cout << "Ba: " << ten3 << " - " << cao3 << "m\n";
        } else {
            cout << "Nhi: " << ten3 << " - " << cao3 << "m\n";
            cout << "Ba: " << ten2 << " - " << cao2 << "m\n";
        }
    }
    else if (cao2 >= cao1 && cao2 >= cao3) {
        cout << "Nhat: " << ten2 << " - " << cao2 << "m\n";
        if (cao1 >= cao3) {
            cout << "Nhi: " << ten1 << " - " << cao1 << "m\n";
            cout << "Ba: " << ten3 << " - " << cao3 << "m\n";
        } else {
            cout << "Nhi: " << ten3 << " - " << cao3 << "m\n";
            cout << "Ba: " << ten1 << " - " << cao1 << "m\n";
        }
    }
    else {
        cout << "Nhat: " << ten3 << " - " << cao3 << "m\n";
        if (cao1 >= cao2) {
            cout << "Nhi: " << ten1 << " - " << cao1 << "m\n";
            cout << "Ba: " << ten2 << " - " << cao2 << "m\n";
        } else {
            cout << "Nhi: " << ten2 << " - " << cao2 << "m\n";
            cout << "Ba: " << ten1 << " - " << cao1 << "m\n";
        }
    }
    return 0;
}
