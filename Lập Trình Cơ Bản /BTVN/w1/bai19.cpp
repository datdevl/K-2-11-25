#include <iostream>
using namespace std;

int main() {
   double nhietNY = 85;
    double nhietDenver = 88;
    double nhietPhoenix = 106;
    double tyLeTang = 0.02;

    cout << "Nhiet do moi NYC: " << nhietNY * (1 + tyLeTang) << " F\n";
    cout << "Nhiet do moi Denver: " << nhietDenver * (1 + tyLeTang) << " F\n";
    cout << "Nhiet do moi Phoenix: " << nhietPhoenix * (1 + tyLeTang) << " F\n";
}