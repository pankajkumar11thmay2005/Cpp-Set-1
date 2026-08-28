#include <iostream>
using namespace std;

int main() {
  double p, r, t;
  cin >> p >> r >> t;

  double si =  (p * r * t) / 100.0;

  cout << "Simple Interest: " << si << "\n";
  double amount = si + p;
  cout << "Amount: " << amount;

  return 0;
}