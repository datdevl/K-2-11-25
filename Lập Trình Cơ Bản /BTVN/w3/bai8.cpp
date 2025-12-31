#include <iostream>
using namespace std;
int main() {
   string a,b;
   cout<<"Nhập màu 1: ";cin>>a;
   cout<<"Nhập màu 2: ";cin>>b;
   if ((a=="red"&&b=="blue")||(b=="red"&&a=="blue")){
    cout<<"Purple";
   }
   else if ((a=="red"&&b=="yellow")||(b=="red"&&a=="yellow")){
    cout<<"orange";
   }
   else if ((a=="blue"&&b=="yellow")||(b=="blue"&&a=="yellow")){
    cout<<"green";
   }
   else{
    cout<<"lỗi";
   }

}