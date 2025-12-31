#include <iostream>
using namespace std;

double calculateRetail(double cost, double percent) {
    return cost + cost * percent / 100;
}

int main() {
    double cost, percent;
    do {
        cout << "Nhap gia ban buon: ";
        cin >> cost;
        cout << "Nhap ty le phan tram: ";
        cin >> percent;
    } while (cost < 0 || percent < 0);

    cout << "Gia ban le: " << calculateRetail(cost, percent) << endl;
    return 0;
}
