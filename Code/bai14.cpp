#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string month;
    double totalCollected;

    cout << "Nhap thang: ";
    getline(cin, month);

    cout << "Nhap tong so tien thu duoc: ";
    cin >> totalCollected;

    const double STATE_TAX_RATE = 0.04;
    const double COUNTY_TAX_RATE = 0.02;
    const double TOTAL_TAX_RATE = 0.06;

    // Tinh doanh thu ban san pham
    double sales = totalCollected / (1 + TOTAL_TAX_RATE);

    // Tinh thue
    double countyTax = sales * COUNTY_TAX_RATE;
    double stateTax = sales * STATE_TAX_RATE;
    double totalTax = countyTax + stateTax;

    cout << fixed << setprecision(2);
    cout << "\nMonth: " << month << endl;
    cout << "--------------------------\n";
    cout << "Total Collected:   $" << totalCollected << endl;
    cout << "Sales:             $" << sales << endl;
    cout << "County Sales Tax:  $" << countyTax << endl;
    cout << "State Sales Tax:   $" << stateTax << endl;
    cout << "Total Sales Tax:   $" << totalTax << endl;

    return 0;
}
