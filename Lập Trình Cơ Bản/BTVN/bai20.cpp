#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double dienTich = 6 * 100;
    double dienTichSon = dienTich * 2;
    double phu = 340;

    double soGallon = dienTichSon / phu;
    int ketQua = ceil(soGallon);

    cout << "So gallon son can: " << ketQua << endl;

    return 0;
}
