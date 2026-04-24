#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a,b,c;
    cin >> a >> b >> c;

    if (a == 0){
        cout << "sai";
        return 0;
    }

    float del = b*b - 4*a*c;

    if (del < 0){
        cout << "vonghiem";
    }
    else if (del == 0){
        cout << -b / (2*a);
    }
    else { 
        float x1 = (-b + sqrt(del)) / (2*a);
        float x2 = (-b - sqrt(del)) / (2*a);
        cout << x1 << endl << x2;
    }

    return 0;
}