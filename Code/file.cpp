#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream a;
    a.open("hi.txt");
    a <<"Xin chào";
    a.close();
    return 0;
}