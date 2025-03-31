#include <iostream>

using namespace std;

int main() {
  int vetor[10];
  int incremento = 1;
  int &rRef = incremento;
  for(int i = 0; i < 10; i++){
    vetor[i] = rRef;
    rRef++;
    cout << vetor[i] << " ";
  }
return 0;
}