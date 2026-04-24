#include <iostream>
#include <string>
using namespace std;
struct ThanhPho{
	string TenTP;
	long DanSo;
};
int main(){
	int n;
	cin>>n;
	ThanhPho tp[n];
	for (int i=0;i<n;i++){
		cin>>tp[i].TenTP;
		cin>>tp[i].DanSo;
	}
	return 0;
}