#include <iostream>
using namespace std;
int main() {
    float m;
    cout<<"Nhập cân nặng của đồ vật: ";cin>>m;
    float t=m*9.8;
    if (t>100){
        cout<<"vật quá nặng";
    }
    else if (t<10){
        cout<<"vật quá nhẹ";
    }
    else{
        cout<<"vật được chấp nhận";
    }
}