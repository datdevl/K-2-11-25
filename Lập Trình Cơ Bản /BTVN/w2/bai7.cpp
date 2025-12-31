#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string tenPhim;
    int nguoiLon, treEm;

    getline(cin, tenPhim);
    cin >> nguoiLon >> treEm;

    double tong = nguoiLon*10 + treEm*6;
    double rap = tong * 0.2;
    double nhaPP = tong * 0.8;

    cout << fixed << setprecision(2);
    cout << "Phim: " << tenPhim << endl;
    cout << "Doanh thu phong ve: $" << rap << endl;
    cout << "Doanh thu nha phan phoi: $" << nhaPP << endl;
    return 0;
}
