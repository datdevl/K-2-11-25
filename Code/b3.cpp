#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a,b,c;
	cin>>a>>b>>c;
	if (a+b<c || a+c<b || b+c<a){
		cout<<-1;
	}
	else{
		float p=(a+b+c)/2;
		float s=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<s;
	}
	return 0;
}