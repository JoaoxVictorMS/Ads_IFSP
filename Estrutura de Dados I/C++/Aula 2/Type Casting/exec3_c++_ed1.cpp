#include <iostream>
using namespace std;


int main() {
  float metros;
  cout << "Digite uma medida em metros: ";
  cin >> metros;
  float conv = metros * 100;
  int numInt = static_cast<int>(conv);
  cout << metros << " metros equivalem a " << numInt <<" centímetros" << endl;
}