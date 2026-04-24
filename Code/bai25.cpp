#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, city, college, profession, animal, pet;
    int age;

    cout << "Nhap ten: ";
    getline(cin, name);

    cout << "Nhap tuoi: ";
    cin >> age;
    cin.ignore();

    cout << "Nhap thanh pho: ";
    getline(cin, city);

    cout << "Nhap truong dai hoc: ";
    getline(cin, college);

    cout << "Nhap chuyen nganh: ";
    getline(cin, profession);

    cout << "Nhap loai dong vat: ";
    getline(cin, animal);

    cout << "Nhap ten thu cung: ";
    getline(cin, pet);

    cout << "\nThere once was a person named " << name
         << " who lived in " << city << ". At the age of "
         << age << ", " << name << " went to college at "
         << college << ". " << name << " graduated and went to work as a "
         << profession << ". Then " << name << " adopted a(n) "
         << animal << " named " << pet << ". They both lived happily ever after!\n";

    return 0;
}
