#include <iostream>
using namespace std;
int main() {
	float dai,rong,dt;
	cout<<"chieu dai: ";
	cin>>dai;
	cout<<"chieu rong; ";
	cin>>rong;
	dt=dai*rong;
	if (dai==rong){
		cout<<"day la hinh vuong"<<endl;
		cout<<"dien tich la: "<<dt;	
		}
	else{
		cout<<"day la hinh chu nhat"<<endl;
		cout<<"dien tich la: "<<dt;
	}
	return 0;	
}
