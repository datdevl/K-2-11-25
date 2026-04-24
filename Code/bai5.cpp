#include <iostream>
using namespace std;

int main() {
    int nam, nu;
    cin >> nam >> nu;

    int tong = nam + nu;
    cout << "Nam: " << nam * 100.0 / tong << "%\n";
    cout << "Nu: " << nu * 100.0 / tong << "%\n";
    return 0;
}
