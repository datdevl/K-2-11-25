#include <iostream>
using namespace std;

int main() {
    double ny = 85;
    double denver = 88;
    double phoenix = 106;

    ny *= 1.02;
    denver *= 1.02;
    phoenix *= 1.02;

    cout << "New York sau khi tang: " << ny << " F\n";
    cout << "Denver sau khi tang: " << denver << " F\n";
    cout << "Phoenix sau khi tang: " << phoenix << " F\n";

    return 0;
}
