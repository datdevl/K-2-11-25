#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double YEN = 98.93;
    const double EURO = 0.74;

    double dollar;
    cin >> dollar;

    cout << fixed << setprecision(2);
    cout << "Yen: " << dollar * YEN << endl;
    cout << "Euro: " << dollar * EURO << endl;
    return 0;
}
