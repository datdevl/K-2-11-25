#include <iostream>
using namespace std;
int main() {
	float d1,d2,r1,r2,dt1,dt2;
	cout<<"chieu dai hinh 1: ";cin>>d1;
	cout<<"chieu rong hinh 1: ";cin>>r1;
	cout<<"chieu dai hinh 2: ";cin>>d2;
	cout<<"chieu rong hinh 2: ";cin>>r2;
	dt1=d1*r1;
	dt2=d2*r2;
	if (dt1==dt2){
		cout<<"Hai hinh co dien tich bang nhau";
	}
	else if (dt1>dt2){
		cout<<"hinh 1 co dien tich lon hon hinh 2";
	}
	else{
		cout<<"hinh 1 co dien tich nho hon hinh 2";
	}
	return 0;
}

