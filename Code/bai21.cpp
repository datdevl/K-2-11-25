#include <iostream>
using namespace std;

double cophieu(double NS,double SP,double SC,double PP,double PC) {
    return (NS*SP - SC) - (NS*PP + PC);
}

int main() {
    int n; cin >> n;
    double total = 0;
    for(int i=1;i<=n;i++){
        double a,b,c,d,e;
        cin >> a >> b >> c >> d >> e;
        double p = cophieu(a,b,c,d,e);
        cout << p << endl;
        total += p;
    }
    cout << total << endl;
    return 0;
}
