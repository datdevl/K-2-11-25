#include <iostream>
using namespace std;

int getEmployees() {
    int n;
    do {
        cout << "Nhap so nhan vien: ";
        cin >> n;
    } while (n <= 0);
    return n;
}

int getDays(int n) {
    int sum = 0, x;
    for (int i = 1; i <= n; i++) {
        cout << "Ngay nghi NV " << i << ": ";
        cin >> x;
        sum += x;
    }
    return sum;
}

double averageDays(int n, int total) {
    return (double)total / n;
}

int main() {
    int n = getEmployees();
    int total = getDays(n);
    cout << "Ngay nghi trung binh: " << averageDays(n, total) << endl;
    return 0;
}
