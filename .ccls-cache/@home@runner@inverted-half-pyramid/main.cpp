#include <iostream>
using namespace std;

void starPattern(int n) {
  for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter how many stars inverted half pyramid pattern you want: ";
  cin >> n;
  starPattern(n);
}