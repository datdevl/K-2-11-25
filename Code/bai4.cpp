#include <iostream>
#include <string>
using namespace std;

int main() {
    string m1, m2, m3;
    double r1, r2, r3;

    cin >> m1 >> r1;
    cin >> m2 >> r2;
    cin >> m3 >> r3;

    double avg = (r1 + r2 + r3) / 3;
    cout << "Luong mua trung binh cua thang "
         << m1 << ", " << m2 << ", va " << m3
         << " la " << avg << " inches" << endl;
    return 0;
}
