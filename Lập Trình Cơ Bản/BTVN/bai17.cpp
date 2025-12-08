#include <iostream>
using namespace std;

int main() {
    int soCoPhieu = 750;
    double giaMoiCoPhieu = 35.0;
    double hoaHong = 0.02;

    double tienCoPhieu = soCoPhieu * giaMoiCoPhieu;
    double tienHoaHong = tienCoPhieu * hoaHong;
    double tongTien = tienCoPhieu + tienHoaHong;

    cout << "Tien co phieu: " << tienCoPhieu << " USD\n";
    cout << "Tien hoa hong: " << tienHoaHong << " USD\n";
    cout << "Tong tien phai tra: " << tongTien << " USD\n";

    return 0;
}
