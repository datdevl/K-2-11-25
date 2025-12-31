#include <iostream>
#include <string>
using namespace std;

int main() {
    string ten1, ten2, ten3;
    float tg1, tg2, tg3;

    cout << "Nhap ten VDV 1: ";
    cin >> ten1;
    cout << "Nhap thoi gian VDV 1: ";
    cin >> tg1;

    cout << "Nhap ten VDV 2: ";
    cin >> ten2;
    cout << "Nhap thoi gian VDV 2: ";
    cin >> tg2;

    cout << "Nhap ten VDV 3: ";
    cin >> ten3;
    cout << "Nhap thoi gian VDV 3: ";
    cin >> tg3;
    if (tg1 < 0 || tg2 < 0 || tg3 < 0) {
        cout << "Loi: Thoi gian khong duoc la so am.";
        return 0;
    }
    cout << "\nKet qua xep hang:\n";

    if (tg1 <= tg2 && tg1 <= tg3) {
        cout << "Nhat: " << ten1 << endl;
        if (tg2 <= tg3) {
            cout << "Nhi: " << ten2 << endl;
            cout << "Ba: " << ten3 << endl;
        } else {
            cout << "Nhi: " << ten3 << endl;
            cout << "Ba: " << ten2 << endl;
        }
    }
    else if (tg2 <= tg1 && tg2 <= tg3) {
        cout << "Nhat: " << ten2 << endl;
        if (tg1 <= tg3) {
            cout << "Nhi: " << ten1 << endl;
            cout << "Ba: " << ten3 << endl;
        } else {
            cout << "Nhi: " << ten3 << endl;
            cout << "Ba: " << ten1 << endl;
        }
    }
    else {
        cout << "Nhat: " << ten3 << endl;
        if (tg1 <= tg2) {
            cout << "Nhi: " << ten1 << endl;
            cout << "Ba: " << ten2 << endl;
        } else {
            cout << "Nhi: " << ten2 << endl;
            cout << "Ba: " << ten1 << endl;
        }
    }

    return 0;
}
