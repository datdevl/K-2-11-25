#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;

    double avg = (a+b+c+d+e)/5;
    cout << fixed << setprecision(1) << avg << endl;
    return 0;
}
