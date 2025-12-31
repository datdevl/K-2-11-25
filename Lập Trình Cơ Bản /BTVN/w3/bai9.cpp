#include <iostream>
using namespace std;
int main() {
   int c,n,d,q;
   cout<<"cent: ";cin>>c;
   cout<<"nickel: ";cin>>n;
   cout<<"quarter: ";cin>>q;
   int s=c+n+d+q;
   if (s==100){
    cout<<"thắng";
   }
   else{
    cout<<"thua";
   }

}