#include <iostream>
using namespace std;

int main() {
   int s;
   int d=0;
   cout<<"Nhập số sách mua: ";cin>>s;
   if (s==0){
    d=d+0;
   }
   else if (s==1){
    d=d+5;
   }
   else if (s==2){
    d=d+15;
   }
   else if (s==3){
    d=d+30;
   }
   else if (s>=4){
    d=d+60;
   }
   cout<<s<<" cuốn sách bạn được thưởng "<<d<<" điểm";
    return 0;
}
