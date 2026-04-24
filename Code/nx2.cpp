// viết hàm nhập dữ liệu từ bàn phím và in dữ liệu  dữ liệu
#include <iostream>
using namespace std;
int nhapso();
void inso(int);
int main(){
	int a;
	a = nhapso();
	inso(a);
	
	return 0;
}
int nhapso(){
	int so;
	cout <<"nhap gia tri cho so ";
	cin >> so;
	return so;
}
void inso(int so){
	cout << " so vua nhap la "<< so;
}
