#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Khoi tao bo sinh so ngau nhien
    srand(time(0));

    // Tao 2 so ngau nhien tu 100 den 999
    int a = rand() % 900 + 100;
    int b = rand() % 900 + 100;
    cout << "  " << setw(4) << a << endl;
    cout << "+ " << setw(4) << b << endl;
    cout << "------" << endl;
    cout << "Nhan phim bat ky de xem dap an...";
    cin.get();
    cout << "\n  " << setw(4) << a << endl;
    cout << "+ " << setw(4) << b << endl;
    cout << "------" << endl;
    cout << "  " << setw(4) << a + b << endl;

    return 0;
}
