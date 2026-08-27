#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;

    cin >> age;
    cin.ignore();
    getline(cin, name);

    cout << "Age: " << age << "\n";
    cout << "Name: " << name;

    return 0;
}