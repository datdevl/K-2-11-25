#include <iostream>
using namespace std;

int getNumAccidents(string area) {
    int x;
    do {
        cout << "Nhap so tai nan " << area << ": ";
        cin >> x;
    } while (x < 0);
    return x;
}

void findLowest(int a, int b, int c, int d, int e) {
    int min = a;
    string name = "Dong";
    if (b < min) { min = b; name = "Nam"; }
    if (c < min) { min = c; name = "Tay"; }
    if (d < min) { min = d; name = "Bac"; }
    if (e < min) { min = e; name = "Trung tam"; }
    cout << "Khu vuc an toan nhat: " << name << " (" << min << ")" << endl;
}

int main() {
    int d = getNumAccidents("Dong");
    int n = getNumAccidents("Nam");
    int t = getNumAccidents("Tay");
    int b = getNumAccidents("Bac");
    int tt = getNumAccidents("Trung tam");
    findLowest(d, n, t, b, tt);
    return 0;
}
