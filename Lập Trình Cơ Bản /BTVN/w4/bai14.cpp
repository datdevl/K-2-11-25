#include <iostream>
using namespace std;

int main() {
    int dathang, cuon;
    double bs;
    cout << "Nhap so cuon dat hang: "; cin >> dathang;
    cout << "Nhap so cuon trong kho: "; cin >> cuon;
    cout << "Nhap chi phi phu (neu co): "; cin >> bs;

    int giao = dathang < cuon ? dathang : cuon;
    int conlai = dathang - giao;

    double tien = giao * 100;
    double phi = giao * (10 + bs);

    cout << "Cuon giao: " << giao << endl;
    cout << "Cuon con lai: " << conlai << endl;
    cout << "Tien hang: " << tien << endl;
    cout << "Phi van chuyen: " << phi << endl;
    cout << "Tong tien: " << tien + phi << endl;
    return 0;
}
