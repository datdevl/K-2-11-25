#include <iostream>
using namespace std;
int main(){
    int n,t,na;
    cout<<"Nhập Ngày: ";cin>>n;
    cout<<"Nhập Tháng: ";cin>>t;
    cout<<"Nhập Năm: ";cin>>na;
    int tam=na%100;
    cout<<t<<"/"<<n<<"/"<<tam;
    if (n*t==tam){
        cout<<" là ngày phép thuật";
    }
    else{
        cout<<" không phải là ngày phép thuật";
    }

}