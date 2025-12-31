#include <iostream>
using namespace std;

int main() {
    int soCoPhieu = 750;
    double giaMoiCoPhieu = 35.00;
    double tyLeHoaHong = 0.02;

    double tienCoPhieu = soCoPhieu * giaMoiCoPhieu;
    double tienHoaHong = tienCoPhieu * tyLeHoaHong;
    double tongTien = tienCoPhieu + tienHoaHong;

    cout << "Tien mua co phieu (khong hoa hong): $" << tienCoPhieu << endl;
    cout << "Tien hoa hong: $" << tienHoaHong << endl;
    cout << "Tong so tien phai tra: $" << tongTien << endl;
}