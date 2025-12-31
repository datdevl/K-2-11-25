#include <iostream>
using namespace std;

int main() {
    int tongKhachHang = 16500;
    double tyLeMua = 0.15;
    double tyLeViCam = 0.58;

    int khachMuaNuoc = tongKhachHang * tyLeMua;
    int khachViCam = khachMuaNuoc * tyLeViCam;

    cout << "So khach mua nuoc tang luc moi tuan: " << khachMuaNuoc << endl;
    cout << "So khach thich nuoc tang luc vi cam: " << khachViCam << endl;
}