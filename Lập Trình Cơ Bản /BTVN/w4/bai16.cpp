#include <iostream>
using namespace std;

int main() {
    double P, B, D;
    int N;
    cin >> P >> B >> D >> N;
    for (int i = 1; i <= N; i++) {
        P = P + P * B - P * D;
        cout << "Nam " << i << ": " << P << endl;
    }
    return 0;
}
