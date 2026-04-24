#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[100];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int sum =0;
	int dem = 0;
	for (int i=0;i<n;i++){
		if (a[i]>=0){
			int k=sqrt(a[i]);
			if (k*k == a[i]){
			sum=sum+a[i];
			dem=dem+1;
			}
		}
	}
	if (dem==0){
		cout<<-1;
	}
	else
	cout<<sum;
	return 0;
}