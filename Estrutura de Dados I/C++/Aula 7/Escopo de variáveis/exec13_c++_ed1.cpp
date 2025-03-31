#include <iostream>

using namespace std;

int gContador = 0; 

void contador() { 
  gContador += 1;
}

int main() {
  contador();
  contador();
  contador();
  contador();
  contador();
  cout <<  "Vezes que a função foi chamada: " << gContador << endl;
  return 0;
}