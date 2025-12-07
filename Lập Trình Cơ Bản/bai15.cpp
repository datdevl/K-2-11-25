#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int j = 1; j <= height - i; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }
}