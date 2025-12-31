#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    int people;
    double diameter;

    cout << "Nhap so nguoi tham du: ";
    cin >> people;
    cout << "Nhap duong kinh pizza (inch): ";
    cin >> diameter;

    double radius = diameter / 2;
    double slicesPerPizza = (PI * radius * radius) / SLICE_AREA;

    int totalSlices = people * 4;
    int pizzas = ceil(totalSlices / slicesPerPizza);

    cout << "So luong pizza can mua: " << pizzas << endl;

    return 0;
}
