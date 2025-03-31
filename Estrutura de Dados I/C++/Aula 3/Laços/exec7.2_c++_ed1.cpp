#include <iostream>
using namespace std;

int main() {
  int q,i, maior, menor;
  cout << "Digite a quantidade de números: ";
  cin >> q;

  int num[q];
  cout << "Digite o número:\n";
  for(i=0; i < q; i++){
    cout << "Número: " << i + 1 << ": ";
    cin >> num[i];
  }

  maior = num[0];
  menor = num[0];

  for(i = 1; i < q; i++){
    
    if(maior < num[i]){
      maior = num[i];
    }
    
    if(menor > num[i]){
      menor = num[i];
    }
    
  }
  cout << "O maior número é: " << maior << endl;
  cout << "O menor número é: " << menor << endl;
}