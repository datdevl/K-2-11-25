#include <iostream>
using namespace std;
int main() {
    float m1=15.59;
    float m2=24.59;
    float m3=6.59;
    float m4=12.59;
    float m5=3.59;
    float thue=0.07;
    float tt=m1+m2+m3+m4+m5;
    float tth=tt*thue;
    float tong=tt+tth;
    cout<<"Giá món 1 là: "<<m1<<" $"<<endl;
    cout<<"Giá món 2 là: "<<m2<<" $"<<endl;
    cout<<"Giá món 3 là: "<<m3<<" $"<<endl;
    cout<<"Giá món 4 là: "<<m4<<" $"<<endl;
    cout<<"Giá món 5 là: "<<m5<<" $"<<endl;
    cout<<"Tổng số tiền mua hàng là: "<<tt<<" $"<<endl;
    cout<<"Số tiền thuế phải trả là: "<<tth<<" $"<<endl;
    cout<<"Tổng số tiền phải trả là: "<<tong<<" $"<<endl;

}