#include <iostream>
using namespace std;

int main() {
    int banh;
    cin >> banh;

    double tiLe = banh / 48.0;
    cout << "Duong: " << 1.5 * tiLe << " coc\n";
    cout << "Bo: " << 1.0 * tiLe << " coc\n";
    cout << "Bot: " << 2.75 * tiLe << " coc\n";
    return 0;
}
