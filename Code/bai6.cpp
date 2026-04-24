#include <iostream>
using namespace std;

double kineticEnergy(double m, double v) {
    return 0.5 * m * v * v;
}

int main() {
    double m, v;
    cout << "Nhap khoi luong: "; cin >> m;
    cout << "Nhap van toc: "; cin >> v;
    cout << "Dong nang: " << kineticEnergy(m, v) << endl;
    return 0;
}
