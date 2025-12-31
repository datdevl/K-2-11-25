#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double giaTriThuc;
    cout << "Nhap gia tri thuc cua bat dong san: ";
    cin >> giaTriThuc;

    double giaTriDanhGia = giaTriThuc * 0.6;
    double thue = (giaTriDanhGia / 100) * 0.75;

    cout << fixed << setprecision(2);
    cout << "Gia tri danh gia: $" << giaTriDanhGia << endl;
    cout << "Thue bat dong san: $" << thue << endl;

    return 0;
}
