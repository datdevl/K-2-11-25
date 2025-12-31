#include <iostream>
using namespace std;

void getScore(double &x) {
    do {
        cout << "Nhap diem (0-100): ";
        cin >> x;
    } while (x < 0 || x > 100);
}

double findLowest(double a, double b, double c, double d, double e) {
    double min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;
    if (e < min) min = e;
    return min;
}

void calcAverage(double a, double b, double c, double d, double e) {
    double sum = a + b + c + d + e;
    double min = findLowest(a, b, c, d, e);
    cout << "Diem trung binh: " << (sum - min) / 4 << endl;
}

int main() {
    double a, b, c, d, e;
    getScore(a); getScore(b); getScore(c); getScore(d); getScore(e);
    calcAverage(a, b, c, d, e);
    return 0;
}
