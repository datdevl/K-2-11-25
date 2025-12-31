#include <iostream>
using namespace std;

int main() {
    double R, E, S;

    cout << "Nhap chieu dai hang (feet): ";
    cin >> R;
    cout << "Nhap khoang trong cum cuoi (feet): ";
    cin >> E;
    cout << "Nhap khoang cach giua cac day nho (feet): ";
    cin >> S;

    int V = (R - 2 * E) / S;
    cout << "So cay nho co the trong: " << V << endl;

    return 0;
}
