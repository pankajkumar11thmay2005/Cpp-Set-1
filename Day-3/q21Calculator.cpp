#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cin >> a >> op >> b;

    if (op == '+')
        cout << a + b;
    else if (op == '-')
        cout << a - b;
    else if (op == '*')
        cout << a * b;
    else if (op == '/') {
        if (b != 0)
            cout << a / b;
        else
            cout << "Division by zero is not allowed";
    }
    else
        cout << "Invalid operator";

    return 0;
}