#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    double diameter;
    cout << "Nhap duong kinh pizza (inch): ";
    cin >> diameter;

    double radius = diameter / 2;
    double area = PI * radius * radius;
    double slices = area / SLICE_AREA;

    cout << fixed << setprecision(1);
    cout << "So luong mieng cat nen chia: " << slices << endl;

    return 0;
}
