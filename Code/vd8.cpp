#include <iostream>
using namespace std;
int main() {
    int a, b, kq, lc;
    cout << "A = ";
    cin >> a;
    cout << "B = ";
    cin >> b;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Cong\n";
        cout << "2. Tru\n";
        cout << "3. Nhan\n";
        cout << "4. Chia\n";
        cout << "0. Thoat\n";
        cout << "Lua chon: ";
        cin >> lc;

        switch (lc) {
            case 1:
                kq = a + b;
                cout << "Ket qua = " << kq << endl;
                break;

            case 2:
                kq = a - b;
                cout << "Ket qua = " << kq << endl;
                break;

            case 3:
                kq = a * b;
                cout << "Ket qua = " << kq << endl;
                break;

            case 4:
                if (b != 0) {
                    cout << "Ket qua = " << (float)a / b << endl;
                } else {
                    cout << "Khong the chia cho 0\n";
                }
                break;

            case 0:
                cout << "Da thoat chuong trinh\n";
                break;

            default:
                cout << "Lua chon khong hop le!\n";
        }

    } while (lc != 0);

    return 0;
}
