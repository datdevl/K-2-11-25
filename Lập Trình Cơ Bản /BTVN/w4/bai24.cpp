#include <iostream>
using namespace std;

int main() {
    int user, cpu = rand()%3 + 1;
    cout << "1.Bua 2.Giay 3.Keo: ";
    cin >> user;

    cout << "May: " << cpu << endl;

    if (user == cpu) cout << "Hoa";
    else if ((user==1 && cpu==3)||(user==3 && cpu==2)||(user==2 && cpu==1))
        cout << "Ban thang";
    else cout << "May thang";
    return 0;
}
