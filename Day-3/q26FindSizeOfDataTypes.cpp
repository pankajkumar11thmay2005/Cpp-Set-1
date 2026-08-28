#include <iostream>
using namespace std;

int main() {
    cout << "int: " << sizeof(int) << " bytes\n";
    cout << "float: " << sizeof(float) << " bytes\n";
    cout << "double: " << sizeof(double) << " bytes\n";
    cout << "char: " << sizeof(char) << " byte\n";
    cout << "bool: " << sizeof(bool) << " byte";

    return 0;
}