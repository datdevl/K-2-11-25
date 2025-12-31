#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Khởi tạo ngẫu nhiên

    int a = rand();
    int b = rand();

    int traLoi;

    cout << "Hay tinh tong:\n";
    cout << a << " + " << b << " = ";
    cin >> traLoi;

    if (traLoi == a + b) {
        cout << "Chuc mung! Ban da tra loi dung.";
    } else {
        cout << "Ket qua khong chinh xac.\n";
        cout << "Dap an dung la: " << (a + b);
    }

    return 0;
}
