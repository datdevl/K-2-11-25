#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A, B, C;
    cout << "So ve hang A: "; cin >> A;
    cout << "So ve hang B: "; cin >> B;
    cout << "So ve hang C: "; cin >> C;

    double total = A*15 + B*12 + C*9;

    cout << fixed << setprecision(2);
    cout << "Tong doanh thu: $" << total << endl;
    return 0;
}
