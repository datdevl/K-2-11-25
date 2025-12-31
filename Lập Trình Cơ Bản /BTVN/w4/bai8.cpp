#include <iostream>
using namespace std;

void coinToss() {
    int r = rand() % 2 + 1;
    if (r == 1) cout << "heads\n";
    else cout << "tails\n";
}

int main() {
    int n, h = 0, t = 0;
    cout << "Nhap so lan tung: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int r = rand() % 2 + 1;
        if (r == 1) { cout << "heads\n"; h++; }
        else { cout << "tails\n"; t++; }
    }
    cout << "Heads: " << h << "\nTails: " << t << endl;
    return 0;
}
