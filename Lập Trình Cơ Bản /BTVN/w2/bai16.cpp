#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double giaTriThuc, thueSuat;

    cout << "Nhap gia tri thuc cua bat dong san: ";
    cin >> giaTriThuc;

    cout << "Nhap thue suat cho moi $100 gia tri danh gia: ";
    cin >> thueSuat;

    const double MIEN_THUE = 5000.0;

    double giaTriDanhGia = giaTriThuc * 0.6;
    double giaTriChiuThue = giaTriDanhGia - MIEN_THUE;

    if (giaTriChiuThue < 0)
        giaTriChiuThue = 0;

    double thueNam = (giaTriChiuThue / 100) * thueSuat;
    double thueQuy = thueNam / 4;

    cout << fixed << setprecision(2);
    cout << "\nThue bat dong san hang nam: $" << thueNam << endl;
    cout << "So tien thue hang quy: $" << thueQuy << endl;

    return 0;
}
