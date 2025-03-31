#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cout << "Digite algum número: ";
    cin >> x;
  if ((x > 0) && (x % 3 == 0))
   cout << "\nO número é positivo e não é múltiplo de 3" << endl;
  else
    cout << "\nO número é negativo" << endl;
}