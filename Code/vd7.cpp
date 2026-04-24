#include <iostream>
using namespace std;
int main(){
    string password="DNU@123";
    string nhap;
    cout<<"Mời bạn nhập password:";
    getline(cin,nhap);
    while (password!=nhap){
        cout<<"Mời bạn nhập password";
        getline(cin,nhap);
    }
        cout<<"Bạn đã nhập đúng password";
        return 0;
    
}