#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, j,i=1;
    cout << "Digite algum número POSITIVO: ";
    cin >> x;
  for(j=1; j <= x; j++)
    i *= j;
  cout << "Fatorial: " << i << endl;
  return 0;  
}