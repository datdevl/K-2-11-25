#include <iostream>
using namespace std;

int main() {
    int gia=99;
    int n;
    float cp;
    cout<<"Nhập số lượng sản phẩm: ";cin>>n;
    if (n>100){
    cp=n*gia+(n*gia*0.5);
    }
    else if (n>=50 && n<100){
    cp=n*gia+(n*gia*0.4);
    }
    else if (n>=20 && n<50){
    cp=n*gia+(n*gia*0.3);
    }
    else if (n>=10 && n<20){
    cp=n*gia+(n*gia*0.2);
    }
    cout<<"Tổng chi phí cần mua là: "<<cp<<"$";
    return 0;
}
