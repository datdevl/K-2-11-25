#include <iostream>
using namespace std;

int main() {
    int tongKhach = 16500;
    double tiLeMua = 0.15;
    double tiLeCam = 0.58;

    int soNguoiMua = tongKhach * tiLeMua;
    int soNguoiThichCam = soNguoiMua * tiLeCam;

    cout << "So nguoi mua nuoc tang luc: " << soNguoiMua << endl;
    cout << "So nguoi thich vi cam: " << soNguoiThichCam << endl;

    return 0;
}
