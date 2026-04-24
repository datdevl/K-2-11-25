#include <iostream>
#include <iomanip> // maSV hoTen diemToan diemLapTrinh 
using namespace std;
struct SinhVien {
	string maSV;
	string hoTen;
	float diemToan;
	float diemLapTrinh;
	float diemTB;
};
int main(){
	int n;
	cin >> n;
	SinhVien ds[100];
	for(int i=0; i<n; i++){
		cin >> ds[i].maSV >> ds[i].hoTen >> ds[i].diemToan >> ds[i].diemLapTrinh;
		ds[i].diemTB = (ds[i].diemToan + ds[i].diemLapTrinh) / 2;
	}
	for(int i=0; i<n; i++){
		cout << ds[i].maSV << " " << ds[i].hoTen << " " << ds[i].diemToan << " " << ds[i].diemLapTrinh << " " << ds[i].diemTB << endl;
	}
	int Index = 0;
	for(int i=1; i<n; i++){
		if (ds[i].diemTB > ds[Index].diemTB){
			Index = i;
		}
	}
	cout << ds[Index].maSV << " " << ds[Index].hoTen << " " << fixed << setprecision(2) << ds[Index].diemTB;
	return 0;
}