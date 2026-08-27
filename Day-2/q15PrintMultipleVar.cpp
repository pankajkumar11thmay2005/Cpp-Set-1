#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    double marks;

    cin >> name >> age >> marks;

    cout << "Student Details\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Marks: " << marks;

    return 0;
}