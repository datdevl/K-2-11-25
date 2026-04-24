#include <iostream>
using namespace std;

double getLength() {
    double x; cout << "Nhap chieu dai: "; cin >> x; return x;
}
double getWidth() {
    double x; cout << "Nhap chieu rong: "; cin >> x; return x;
}
double getArea(double l, double w) {
    return l * w;
}
void displayData(double l, double w, double a) {
    cout << "Dai: " << l << "\nRong: " << w << "\nDien tich: " << a << endl;
}

int main() {
    double l = getLength();
    double w = getWidth();
    double a = getArea(l, w);
    displayData(l, w, a);
    return 0;
}
