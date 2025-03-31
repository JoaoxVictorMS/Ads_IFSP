#include <iostream>
using namespace std;
int main() {
  float *notas, tam, soma = 0, media = 0;
  int i = 0;
  notas = new float[i];
  cout << "Insira as notas: " << endl;
  do{
    cout << "Nota: ";
    cin >> notas[i];

    if(notas[i] < 0){
      break;
    } else {
      soma += notas[i];
      i++;
    }
    tam = sizeof(notas[i]);
  } while(true);
    media = soma / (tam-1);
    cout << "A média das notas inseridas é: " << media << endl;
};