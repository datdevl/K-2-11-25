#include <iostream>
using namespace std;
int main() {
    float thue=0.0675;
    float tien=88.67;
    float tip=0.2;
    float s=tien+(tien*thue)+(tien*tip);
    cout<<"Số tiền phải trả là: "<<tien<<" $"<<endl;
    cout<<"Số tiền thuế là: "<<tien*thue<<" $"<<endl;
    cout<<"Số tiền tip là: "<<tien*tip<<" $"<<endl;
    cout<<"Tổng số tiền phải trả là: "<<s<<" $"<<endl;
}