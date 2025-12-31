#include <iostream>
using namespace std;

int main() {
     double soDu;
    int soSec;

    cout << "Nhap so du tai khoan: ";
    cin >> soDu;

    cout << "Nhap so luong sec su dung: ";
    cin >> soSec;

    if (soDu < 0 || soSec < 0) {
        cout << "Khong chap nhan gia tri am.";
        return 0;
    }

    double phiCoDinh = 10.0;
    double phiSec = 0.0;
    double phiPhat = 0.0;

    if (soSec <= 20)
        phiSec = soSec * 0.10;
    else if (soSec <= 39)
        phiSec = soSec * 0.08;
    else if (soSec <= 59)
        phiSec = soSec * 0.06;
    else
        phiSec = soSec * 0.04;

    if (soDu < 400)
        phiPhat = 15.0;

    double tongPhi = phiCoDinh + phiSec + phiPhat;

    cout << "Phi co dinh: " << phiCoDinh << "$" << endl;
    cout << "Phi su dung sec: " << phiSec << "$" << endl;
    cout << "Phi phat so du thap: " << phiPhat << "$" << endl;
    cout << "Tong phi phai tra: " << tongPhi << "$";

    return 0;
}
