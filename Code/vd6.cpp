#include <iostream>
using namespace std;
int main(){
    string p;
    cout<<"Nhập password:";cin>>p;
    while (p!="dnu"){
        cout<<"Bạn đã nhập sai password, vui lòng nhập lại: ";
        cin>>p;
    }
        cout<<"Bạn đã nhập đúng pasword";
        return 0;
    
}