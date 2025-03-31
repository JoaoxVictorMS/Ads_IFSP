#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y, z;
    cout << "Digite o primeiro número: ";
    cin >> x;
    cout << "\nDigite o segundo número: ";
    cin >> y;
    cout << "\nDigite o terceiro número: ";
    cin >> z;
    
    if (x > y && x > z)
      cout << x << "\nÉ o maior número" << endl;
    if(y > x && y > z)
      cout << y << " É o maior número" << endl;
    if(z > x && z > y)
      cout << z << " É o maior número" << endl;
    if(z < x && z < y)
      cout << z << " É o menor número" << endl;
    if(y < x && y < z)
      cout << y << " É o menor número" << endl;
    if(x < y && x < z)
      cout << x << " É o menor número" << endl;
    if(x == y && y == z && z == x )
      cout << "Todos os números são iguais" << endl;
}