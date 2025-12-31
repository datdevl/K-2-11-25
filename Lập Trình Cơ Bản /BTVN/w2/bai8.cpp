#include <iostream>
using namespace std;

int main() {
    double palletRong, palletDay;
    cin >> palletRong >> palletDay;

    cout << (palletDay - palletRong) / 12.5 << endl;
    return 0;
}
