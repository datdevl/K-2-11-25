#include <iostream>
#include <string>  // Ð?m b?o thu vi?n này du?c bao g?m
using namespace std;

int main() {
    string n;
    cout << "Nhap MSSV: "; 
    cin >> n;

    int dai = n.length(); // Ki?m tra d? dài chu?i

    if (dai == 10) {
        cout << "La sinh vien dai nam\n";

        try {
            // Chuy?n d?i t? chu?i n thành int
            int mssv = stoi(n); // Ð?m b?o s? d?ng std::stoi

            // Ki?m tra mã sinh viên theo nam
            if (mssv / 1000 == 19) { 
                cout << "Sinh vien K19\n";
            }
            else if (mssv / 1000 == 18) { 
                cout << "Sinh vien K18\n";
            } else {
                cout << "Khong phai sinh vien K18 hay K19\n";
            }

        } catch (const invalid_argument& e) {
            cout << "MSSV khong hop le!\n";  // N?u chu?i không ph?i là s? h?p l?
        } catch (const out_of_range& e) {
            cout << "MSSV vuot qua gioi han\n";  // N?u s? quá l?n
        }

    } else {
        cout << "Khong la sinh vien dai nam\n"; 
    }

    return 0;
}

