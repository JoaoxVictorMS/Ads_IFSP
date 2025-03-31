#include <iostream>

using namespace std;

int main() {
  float celcius;
  cout << "Informe uma temperatura em graus Celcius: ";
  cin >> celcius;
  float Fahrenheit = celcius * 1.8 + 32;
  cout << "A conversão de Celcius para Fahrenheit é: " << Fahrenheit << endl;
  
}