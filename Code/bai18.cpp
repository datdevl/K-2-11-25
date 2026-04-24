#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal;
    double rate;
    int times;
    int years;

    cout << "Nhap so tien goc: ";
    cin >> principal;

    cout << "Nhap lai suat hang nam (%): ";
    cin >> rate;

    cout << "Nhap so lan tinh lai moi nam: ";
    cin >> times;

    cout << "Nhap so nam gui: ";
    cin >> years;

    rate /= 100; // doi % sang so thap phan

    double amount = principal * pow(1 + rate / times, times * years);

    cout << fixed << setprecision(2);
    cout << "\n------------------------------------\n";
    cout << left << setw(20) << "Interest Rate:" << rate * 100 << "%\n";
    cout << setw(20) << "Times Compounded:" << times << endl;
    cout << setw(20) << "Principal:" << "$" << principal << endl;
    cout << setw(20) << "Interest:" << "$" << amount - principal << endl;
    cout << setw(20) << "Amount in Savings:" << "$" << amount << endl;
    cout << "------------------------------------\n";

    return 0;
}
