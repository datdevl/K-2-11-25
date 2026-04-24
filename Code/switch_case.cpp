//switch case
#include <iostream>
using namespace std;
int main(){
	char chu;
	cout<<"nhap vao ky tu sau A,B,C,D:";
	cin>>chu;
	switch (chu) {
		case 'A':cout<<"ban vua nhap vao ky tu A";
		break;
		case 'B':cout<<"ban vua nhap vao ky tu B";
		break;
		case 'C':cout<<"ban vua nhap vao ky tu C";
		break;
		case 'D':cout<<"ban vua nhap vao ky tu D";
		break;
		default: cout<<"ban vua nhap gia tri khac A,B,C,D";	
	}
	}
