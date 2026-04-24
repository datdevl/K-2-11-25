#include <iostream>
using namespace std;
int main(){
	int n;
	int a[100];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int max=a[0];
	int min=a[0];
	for (int i=1;i<n;i++){
		if (max<a[i]){
			max=a[i];
		}
		if (min>a[i]){
			min=a[i];
		}
	}
	cout<<min<<endl<<max;
	return 0;
}