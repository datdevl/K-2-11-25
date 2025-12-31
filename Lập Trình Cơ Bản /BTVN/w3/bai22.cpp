#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    if (t <= -173) cout << "Con dong dac\n";
    if (t <= -38) cout << "Thuy ngan dong dac\n";
    if (t <= -362) cout << "Oxy dong dac\n";
    if (t <= 32) cout << "Nuoc dong dac\n";
    if (t >= 172) cout << "Con soi\n";
    if (t >= 676) cout << "Thuy ngan soi\n";
    if (t >= -306) cout << "Oxy soi\n";
    if (t >= 212) cout << "Nuoc soi\n";

    return 0;
}
