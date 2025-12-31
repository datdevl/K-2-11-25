#include <iostream>
using namespace std;
int main() {
   int thang,nam;
   cout<<"Nhập vào 1 tháng (1-12): ";cin>>thang;
   cout<<"Nhập vào 1 năm: ";cin>>nam;
    bool namNhuan = false;

    if (nam % 100 == 0) {
        if (nam % 400 == 0)
            namNhuan = true;
    } else {
        if (nam % 4 == 0)
            namNhuan = true;
    }

    int soNgay;

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 ||
        thang == 8 || thang == 10 || thang == 12) {
        soNgay = 31;
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        soNgay = 30;
    }
    else if (thang == 2) {
        if (namNhuan)
            soNgay = 29;
        else
            soNgay = 28;
    }
    else {
        cout << "Thang khong hop le";
        return 0;
    }

    cout << "So ngay: " << soNgay;

    return 0;
}