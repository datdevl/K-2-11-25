#include <iostream>
using namespace std;

int main() {
    double gio;
    int phut;
    cin >> gio >> phut;
    int h = (int)gio;
    int m = (gio - h) * 100;
    if (h > 23 || m > 59 || phut <= 0) {
        cout << "Thoi gian khong hop le!";
        return 0;
    }
    double gia;
    if (gio < 7.00) gia = 0.05;
    else if (gio <= 19.00) gia = 0.45;
    else gia = 0.20;
    cout << gia * phut;
    return 0;
}
