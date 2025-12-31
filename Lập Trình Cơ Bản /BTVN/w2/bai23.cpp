#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int shares = 1000;
    double buyPrice = 45.50;
    double sellPrice = 56.90;
    double commissionRate = 0.02;

    double buyCost = shares * buyPrice;
    double buyCommission = buyCost * commissionRate;

    double sellRevenue = shares * sellPrice;
    double sellCommission = sellRevenue * commissionRate;

    double profit = sellRevenue - sellCommission - buyCost - buyCommission;

    cout << fixed << setprecision(2);
    cout << "Tien mua co phieu: $" << buyCost << endl;
    cout << "Hoa hong khi mua: $" << buyCommission << endl;
    cout << "Tien ban co phieu: $" << sellRevenue << endl;
    cout << "Hoa hong khi ban: $" << sellCommission << endl;
    cout << "Loi nhuan: $" << profit << endl;

    return 0;
}
