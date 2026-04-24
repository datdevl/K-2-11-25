#include <iostream>
using namespace std;

void getJudgeData(double &x) {
    do {
        cout << "Nhap diem (0-10): ";
        cin >> x;
    } while (x < 0 || x > 10);
}

double findLowest(double a, double b, double c, double d, double e) {
    double m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    if (d < m) m = d;
    if (e < m) m = e;
    return m;
}

double findHighest(double a, double b, double c, double d, double e) {
    double m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    if (d > m) m = d;
    if (e > m) m = e;
    return m;
}

void calcScore(double a, double b, double c, double d, double e) {
    double sum = a + b + c + d + e;
    sum -= findLowest(a,b,c,d,e);
    sum -= findHighest(a,b,c,d,e);
    cout << "Diem cuoi: " << sum / 3 << endl;
}

int main() {
    double a,b,c,d,e;
    getJudgeData(a); getJudgeData(b); getJudgeData(c);
    getJudgeData(d); getJudgeData(e);
    calcScore(a,b,c,d,e);
    return 0;
}
