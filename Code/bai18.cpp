#include <iostream>
using namespace std;

int main() {
    int rooms;
    double price, area, totalArea = 0;
    cin >> rooms >> price;
    for (int i = 1; i <= rooms; i++) {
        cin >> area;
        totalArea += area;
    }
    double paint = totalArea / 110;
    double hours = paint * 8;
    cout << paint << endl;
    cout << hours << endl;
    cout << paint * price << endl;
    cout << hours * 25 << endl;
    cout << paint * price + hours * 25 << endl;
    return 0;
}
