#include <iostream>
using namespace std;
int main() {
   int s;
   cout<<"Nhập giây: ";cin>>s;
    long long ngay = s / 86400;
    s = s % 86400;

    long long gio = s / 3600;
    s = s % 3600;

    long long phut = s / 60;
    long long giay = s % 60;

    if (ngay > 0) cout << ngay << " ngay ";
    if (gio > 0)  cout << gio << " gio ";
    if (phut > 0) cout << phut << " phut ";
    if (giay > 0) cout << giay << " giay ";

    return 0;
}