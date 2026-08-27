#include <iostream>
using namespace std;

int main() {
  char ch;
  cin >> ch;

  cout << "Character: " << ch << "\n";
  cout << "ASCII: " << static_cast<int>(ch);

  return 0;
}