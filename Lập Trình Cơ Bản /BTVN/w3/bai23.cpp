#include <iostream>
using namespace std;

int main() {
    int chon;
    cin >> chon;
    if (chon == 1) {
        double r; cin >> r;
        cout << 3.14 * r * r;
    }
    else if (chon == 2) {
        double d, r; cin >> d >> r;
        cout << d * r;
    }
    else if (chon == 3) {
        double a, b; cin >> a >> b;
        cout << 0.5 * a * b;
    }
    else if (chon == 4) return 0;
    else cout << "Lua chon sai!";

    return 0;
}
