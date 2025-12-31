#include <iostream>
using namespace std;

int main() {
    int chon;
    double time, tocDo;
    cout << "1.CO2  2.Khong khi  3.Helium  4.Hydro\n";
    cin >> chon;
    if (chon < 1 || chon > 4) {
        cout << "Lua chon sai!";
        return 0;
    }
    cin >> time;
    if (time < 0 || time > 30) {
        cout << "Thoi gian khong hop le!";
        return 0;
    }
    if (chon == 1) tocDo = 258;
    else if (chon == 2) tocDo = 331.5;
    else if (chon == 3) tocDo = 972.2;
    else tocDo = 1270;
    cout << "Khoang cach: " << tocDo * time;
    return 0;
}
