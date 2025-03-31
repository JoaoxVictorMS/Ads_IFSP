#include <iostream>
using namespace std;
int main() {
  int vet[10], maior=0, menor=0;

  cout << "Digite 10 elementos: " << endl;

  for(int i=0; i<10; i++){
    cout << "Elemento: ";
    cin >> vet[i];
  }
  for(int i=0; i<10; i++){
    if(vet[i]>maior){
      maior = vet[i];
    }else if(vet[i] < menor){
      menor = vet[i];
    }
  }

  cout << "O maior número do vetor é: " << maior << endl;
  cout << "O menor número do vetor é: " << menor << endl;
}