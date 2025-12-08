#include <iostream>
using namespace std;
int main(){
	float chiphi = 88.67;
	float thue;
	float tip;
	float tongtien;
	thue = chiphi*6.75/100;
	tip =  (chiphi+thue)*20/100;
	tongtien   = chiphi + thue + tip;
	cout << chiphi << endl;
	cout << thue << endl;
	cout << tip << endl;
	cout << tongtien << endl;
	
	return 0;
	}
