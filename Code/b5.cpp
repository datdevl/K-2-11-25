#include <iostream>
using namespace std;
int main(){
	int n;
	int a[100];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int tmp;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]>a[j]){
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	cout<<a[i]<<" ";
	}
	return 0;
}