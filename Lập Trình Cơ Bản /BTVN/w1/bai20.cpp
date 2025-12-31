#include <iostream>
using namespace std;

int main() {
    double chieuCao = 6;      // feet
    double chieuDai = 100;    // feet
    double dienTich1Lop = chieuCao * chieuDai;
    double dienTich2Lop = dienTich1Lop * 2;

    double phuMoiGallon = 340;
    double soGallon = dienTich2Lop / phuMoiGallon;

    cout << "So gallon son can dung (xap xi): " << soGallon << " gallon\n";

    return 0;
}