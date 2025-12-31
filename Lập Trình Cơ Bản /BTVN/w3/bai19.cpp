#include <iostream>
using namespace std;

int main() {
    double buocSong;
    cout << "Nhap buoc song (m): ";
    cin >> buocSong;

    if (buocSong < 0) {
        cout << "Gia tri khong hop le.";
    }
    else if (buocSong >= 1e-2) {
        cout << "Song radio";
    }
    else if (buocSong >= 1e-3 && buocSong < 1e-2) {
        cout << "Song lo vi song";
    }
    else if (buocSong >= 7e-7 && buocSong < 1e-3) {
        cout << "Song hong ngoai";
    }
    else if (buocSong >= 4e-7 && buocSong < 7e-7) {
        cout << "Song anh sang";
    }
    else if (buocSong >= 1e-8 && buocSong < 4e-7) {
        cout << "Song tu ngoai";
    }
    else if (buocSong >= 1e-11 && buocSong < 1e-8) {
        cout << "Tia X quang";
    }
    else {
        cout << "Tia gamma";
    }

    return 0;
}
