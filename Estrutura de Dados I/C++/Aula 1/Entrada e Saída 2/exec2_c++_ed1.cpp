#include <iostream>
#include <string>
 using namespace std;


int main() {
  int x, y;
  cout << "Digite a base do triângulo: ";
  cin >> x;
  cout << "Digite a altura do triângulo: ";
  cin >> y;
  int area = (x * y)/2;
  cout << "A área do triângulo é: " <<  area << endl;
  return 0;
}