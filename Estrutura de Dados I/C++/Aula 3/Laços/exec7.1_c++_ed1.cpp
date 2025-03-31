#include <iostream>
using namespace std;

int main() {
  int n, a = 0, b = 1, s, i;
  cout << "Digite um número: ";
  cin >> n;
  cout << "A sequência fibonacci desse número é: 0 1";
  for (i=2; i<=n-2; i++){
    s = a + b;
    a = b;
    b = s;
    cout << " " << s;
  }
}