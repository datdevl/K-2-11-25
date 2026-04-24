#include <iostream>
using namespace std;

int main() {
    int sv, mon;

    cout << "Nhap so sinh vien: ";
    cin >> sv;

    cout << "Nhap so mon hoc: ";
    cin >> mon;

    if (mon <= 0) {
        cout << "So mon phai lon hon 0!";
        return 0;
    }

    for (int i = 1; i <= sv; i++) {
        cout << "\nNhap diem cho sinh vien thu " << i << endl;

        float tong = 0, diem;

        for (int j = 1; j <= mon; j++) {
            cout << "Nhap diem mon " << j << ": ";
            cin >> diem;
            tong += diem;
        }

        float tb = tong / mon;
        cout << "Diem trung binh SV " << i << " = " << tb << endl;
    }

    return 0;
}
