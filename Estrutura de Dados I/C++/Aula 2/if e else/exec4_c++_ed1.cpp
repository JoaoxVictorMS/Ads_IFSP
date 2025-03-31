#include <iostream>
#include <string>
 using namespace std;


int main() {
  int x;
  cout << "Digite um número qualquer: ";
  cin >> x;
  if (x % 2 == 0){
    cout << "\nO número digitado é par" << endl;
  } else {
    cout << "\nO número digitado é ímpar" << endl;
  }
  return 0;
}