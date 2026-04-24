#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[100]; 
    int k = 0;
    int countAm = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            countAm++; 
        } else {
            b[k]=a[i];
            k=k+1;
        }
    }
    if (countAm == 0){
        cout << -1;
    } else {
        for (int i = 0; i < k; i++){
            cout << b[i] << " ";
        }
    }
    return 0;
}