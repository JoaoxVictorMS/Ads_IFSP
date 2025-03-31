#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Digite algum número: ";
    cin >> x;
  int result = x << 1;
  cout << "O resultado da múltiplicação bit-a-bit é " << result << endl;
}