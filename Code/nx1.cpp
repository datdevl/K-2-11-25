#include <iostream>
using namespace std;
int cong(int,int);
int tru(int,int);
int nhan(int,int);
void inrakq(int);
int main(){
    int so1,so2,luachon,kq;
    do{
        cout<<"Nhập vào giá trị số 1: "<<endl;
        cin>>so1;
        cout<<"Nhập vào giá trị số 2: "<<endl;
        cin>>so2;
        cout<<"Mời nhập lựa chọn từ 1 -> 3"<<endl;
        cout<<"tính tổng + chọn 1"<<endl<<"tính hiệu - chọn 2"<<endl<<"tính tích x chọn 3"<<endl<<"chọn 4 để thoát";
            cin>>luachon;
        switch (luachon){
            case 1: kq=cong(so1,so2);
                inrakq(kq);
                break;
            case 2: kq=tru(so1,so2);
                inrakq(kq);
                break;
            case 3: kq=nhan(so1,so2);
                inrakq(kq);
                break;  
            case 4: break; 
            default: 
                cout<<"bạn lựa chọn sai";
        }
    }while(luachon!=4);
    return 0;
}
int cong(int a,int b){

    return a+b;
}
int tru(int a,int b){
    return a-b;
}
int nhan(int a,int b){
    return a*b;
}
void inrakq(int kq){
    cout<<"Kết quả là: "<<kq;
}
