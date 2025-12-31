#include <iostream>
using namespace std;

int main() {
    double vay, baoHiem, xang, dau, lop, baoDuong;
    cin >> vay >> baoHiem >> xang >> dau >> lop >> baoDuong;

    double thang = vay + baoHiem + xang + dau + lop + baoDuong;
    cout << "Hang thang: " << thang << endl;
    cout << "Hang nam: " << thang * 12 << endl;
    return 0;
}
