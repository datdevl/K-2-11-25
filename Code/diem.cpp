#include <iostream>
using namespace std;
int main(){
	double n;
	cout<<"Nhap diem: ";
	cin>>n;
	if (n>=9 && n<=10){
		cout<<"HSXS";
	}
	else if (n>=8 && n<9){
		cout<<"HSG";
	}
	else if (n>=7 && n<8){
		cout<<"HSK";
	}
	else if (n>=5 && n<7){
		cout<<"HSTB";
	}
	else {
		cout<<"HSY";
	}
	return 0;
}
