#include <iostream>
using namespace std;

int main() {
    double NS, SP, SC, PP, PC;
    cin >> NS >> SP >> SC >> PP >> PC;
    double loinhuan = (NS*SP - SC) - (NS*PP + PC);
    cout << loinhuan << endl;
    return 0;
}
