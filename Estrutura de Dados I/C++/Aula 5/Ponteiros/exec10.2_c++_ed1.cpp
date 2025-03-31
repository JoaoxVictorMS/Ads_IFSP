#include <iostream>
using namespace std;
int main() {
  string text, *ptr = 0;
  int tam;
  cout << "Digite uma string: ";
  cin >> text;
  ptr = &text;
  tam = sizeof(text);
  for(int i= 0; i<tam; i++){
    cout << "" << (*ptr)[i]<< endl;
      }


}