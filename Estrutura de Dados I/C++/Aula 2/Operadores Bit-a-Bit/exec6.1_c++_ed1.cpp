#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Digite algum número: ";
    cin >> x;
  if(x & 1)
    cout << "O número é ímpar" << endl;
  else
    cout << "O número é par" << endl;
}