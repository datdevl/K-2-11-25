#include <iostream>
using namespace std;

int main() {
    char goi;
    int phut;
    cin >> goi >> phut;
    double tong;
    if (goi == 'A') {
        tong = 39.99;
        if (phut > 450) tong += (phut - 450) * 0.45;
    }
    else if (goi == 'B') {
        tong = 59.99;
        if (phut > 900) tong += (phut - 900) * 0.40;
    }
    else if (goi == 'C') {
        tong = 69.99;
    }
    else {
        cout << "Goi khong hop le!";
        return 0;
    }
    cout << tong;
    return 0;
}
