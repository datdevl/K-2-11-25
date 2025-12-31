#include <iostream>
using namespace std;

// Ham tinh gia tri tuong lai
double tientuonglai(double P, double i, int t) {
    double F = P;
    for (int k = 1; k <= t; k++) {
        F = F * (1 + i);
    }
    return F;
}

int main() {
    double P, i;
    int t;

    cout << "Nhap so tien ban dau P: ";
    cin >> P;

    cout << "Nhap lai suat theo thang i: ";
    cin >> i;

    cout << "Nhap so thang gui t: ";
    cin >> t;

    double F = tientuonglai(P, i, t);

    cout << "So tien nhan duoc trong tuong lai: " << F << endl;
    return 0;
}
