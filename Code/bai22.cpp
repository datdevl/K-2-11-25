#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double radians;
    cout << "Nhap goc (radians): ";
    cin >> radians;

    cout << fixed << setprecision(4);
    cout << "Sin: " << sin(radians) << endl;
    cout << "Cos: " << cos(radians) << endl;
    cout << "Tan: " << tan(radians) << endl;

    return 0;
}
