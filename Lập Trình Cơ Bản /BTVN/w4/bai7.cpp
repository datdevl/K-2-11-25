#include <iostream>
using namespace std;

double celsius(double f) {
    return 5.0 / 9 * (f - 32);
}

int main() {
    for (int i = 0; i <= 20; i++)
        cout << i << "F = " << celsius(i) << "C\n";
    return 0;
}
