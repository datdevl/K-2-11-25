#include <iostream>
using namespace std;

int main() {
    double gallons, miles;
    cout << "Nhap so gallon xang: ";
    cin >> gallons;
    cout << "Nhap so dam di duoc: ";
    cin >> miles;

    cout << "So dam tren moi gallon: " << miles / gallons << endl;
    return 0;
}
