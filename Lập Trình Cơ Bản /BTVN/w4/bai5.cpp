#include <iostream>
using namespace std;

double fallingDistance(int t) {
    return 0.5 * 9.8 * t * t;
}

int main() {
    for (int i = 1; i <= 10; i++)
        cout << i << "s: " << fallingDistance(i) << " m\n";
    return 0;
}
