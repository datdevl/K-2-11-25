#include <iostream>
using namespace std;

// Hàm tính chi phí cho bệnh nhân nội trú
double tinhTien(int soNgay, double phiNgay, double tienThuoc, double phiKham) {
    return soNgay * phiNgay + tienThuoc + phiKham;
}

// Hàm tính chi phí cho bệnh nhân ngoại trú
double tinhTien(double tienThuoc, double phiKham) {
    return tienThuoc + phiKham;
}

int main() {
    int loai;

    cout << "Nhap loai benh nhan (1: Noi tru, 2: Ngoai tru): ";
    cin >> loai;

    if (loai == 1) {
        int soNgay;
        double phiNgay, tienThuoc, phiKham;

        cout << "Nhap so ngay nam vien: ";
        cin >> soNgay;
        cout << "Nhap phi nam vien moi ngay: ";
        cin >> phiNgay;
        cout << "Nhap chi phi thuoc: ";
        cin >> tienThuoc;
        cout << "Nhap phi kham chua benh: ";
        cin >> phiKham;

        cout << "Tong tien phai tra: "
             << tinhTien(soNgay, phiNgay, tienThuoc, phiKham);
    } else {
        double tienThuoc, phiKham;

        cout << "Nhap chi phi thuoc: ";
        cin >> tienThuoc;
        cout << "Nhap phi kham chua benh: ";
        cin >> phiKham;

        cout << "Tong tien phai tra: "
             << tinhTien(tienThuoc, phiKham);
    }

    return 0;
}
