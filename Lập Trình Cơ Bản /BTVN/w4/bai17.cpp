#include <iostream>
using namespace std;

int main() {
    double P, B, D, in, out;
    int N;
    cin >> P >> B >> D >> in >> out >> N;
    for (int i = 1; i <= N; i++) {
        P = P + P*B - P*D + in - out;
        cout << "Nam " << i << ": " << P << endl;
    }
    return 0;
}
