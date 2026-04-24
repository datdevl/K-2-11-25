#include <iostream>
using namespace std;
int nhapso(int);
void inso(int);

int nhapso(){
    int so;
    cout<<"Nhập giá trị cho số:";
    cin>>so;
    return so;
}
void inso(int so){
    cout<<so;
}
int main(){
    int a;
	a = nhapso();
	inso(a);
    return 0;
}