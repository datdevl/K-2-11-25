#include <iostream>
using namespace std;

bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i < n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int x; cin >> x;
    cout << snt(x);
    return 0;
}
