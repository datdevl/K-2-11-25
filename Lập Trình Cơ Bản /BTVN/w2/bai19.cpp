#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double loanAmount;
    double annualRate;
    int years;

    cout << "Nhap so tien vay: ";
    cin >> loanAmount;

    cout << "Nhap lai suat hang nam (%): ";
    cin >> annualRate;

    cout << "Nhap so nam vay: ";
    cin >> years;

    double monthlyRate = annualRate / 100 / 12;
    int numberOfPayments = years * 12;

    double monthlyPayment =
        (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) /
        (pow(1 + monthlyRate, numberOfPayments) - 1) * loanAmount;

    double amountPaidBack = monthlyPayment * numberOfPayments;
    double interestPaid = amountPaidBack - loanAmount;

    cout << fixed << setprecision(2);
    cout << "\n---------------------------------\n";
    cout << left << setw(25) << "Loan Amount:" << "$" << loanAmount << endl;
    cout << setw(25) << "Monthly Interest Rate:" << monthlyRate * 100 << "%" << endl;
    cout << setw(25) << "Number of Payments:" << numberOfPayments << endl;
    cout << setw(25) << "Monthly Payment:" << "$" << monthlyPayment << endl;
    cout << setw(25) << "Amount Paid Back:" << "$" << amountPaidBack << endl;
    cout << setw(25) << "Interest Paid:" << "$" << interestPaid << endl;
    cout << "---------------------------------\n";

    return 0;
}
