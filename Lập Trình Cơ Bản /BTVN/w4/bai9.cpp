#include <iostream>
using namespace std;

double presentValue(double F, double r, int N) {
    double P = F;
    for (int i = 1; i <= N; i++)
        P /= (1 + r);
    return P;
}

int main() {
    double F, r;
    int N;
    cout << "Nhap F, r, N: ";
    cin >> F >> r >> N;
    cout << "Tien can gui: " << presentValue(F, r, N) << endl;
    return 0;
}
