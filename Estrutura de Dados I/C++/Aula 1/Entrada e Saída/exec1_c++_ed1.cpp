#include <iostream>
 using namespace std;


int main() {
  string nome;
  cout << "Digite seu nome: ";
  getline(cin, nome);
  cout << "Seja bem vindo, " << nome <<"!"<< endl;
  return 0;
}