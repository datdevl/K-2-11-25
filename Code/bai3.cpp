#include <iostream>
using namespace std;

double getSales(string name) {
    double s;
    do {
        cout << "Nhap doanh so " << name << ": ";
        cin >> s;
    } while (s < 0);
    return s;
}

void findHighest(double a, double b, double c, double d) {
    double max = a;
    string name = "Dong Bac";
    if (b > max) { max = b; name = "Dong Nam"; }
    if (c > max) { max = c; name = "Tay Bac"; }
    if (d > max) { max = d; name = "Tay Nam"; }
    cout << "Don vi ban tot nhat: " << name << " (" << max << ")" << endl;
}

int main() {
    double db = getSales("Dong Bac");
    double dn = getSales("Dong Nam");
    double tb = getSales("Tay Bac");
    double tn = getSales("Tay Nam");
    findHighest(db, dn, tb, tn);
    return 0;
}
