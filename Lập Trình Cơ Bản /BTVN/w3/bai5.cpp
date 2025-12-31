#include <iostream>
#include <cmath>
using namespace std;
int main(){
    //MBI=m/(h^2)
    float m,h;
    cout<<"Nhập chiều cao: ";cin>>h;
    cout<<"Nhập cân nặng: ";cin>>m;
    float bmi=(m/pow(h,2));
    if (bmi>18.5 && bmi<25){
        cout<<"Bạn bình thường";
    }
    else if (bmi<18.5){
        cout<<"Bạn gầy";
    }
    else if (bmi>25){
        cout<<"Bạn béo";
    }
    return 0;
}