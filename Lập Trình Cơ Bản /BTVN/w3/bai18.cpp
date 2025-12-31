#include <iostream>
using namespace std;
int main() {
    double tongCalo, gramBeo;
    cout << "Nhap tong luong calo: ";
    cin >> tongCalo;
    cout << "Nhap so gram chat beo: ";
    cin >> gramBeo;
    if (tongCalo < 0 || gramBeo < 0) {
        cout << "Loi: Gia tri nhap vao khong duoc nho hon 0.";
    }
    else {
        double caloTuBeo = gramBeo * 9;
        if (caloTuBeo > tongCalo) {
            cout << "Loi: Calo tu chat beo lon hon tong calo.";
        }
        else {
            double tyLe = caloTuBeo / tongCalo * 100;
            cout << "Phan tram calo tu chat beo: " << tyLe << "%" << endl;
            if (tyLe < 30) {
                cout << "Thuc pham nay it chat beo.";
            }
        }
    }
    return 0;
}
