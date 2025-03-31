#include <iostream>
#include <string>
 using namespace std;


int main() {
  while(1){
    int x;
    cout << "Digite um número qualquer: ";
    cin >> x;
    if (x > 0)
      cout << "O número " << x << " é positivo" << endl;
    else if (x < 0)
      cout << "O número " << x << " é negativo" << endl;
    else if (x == 0)
      cout << "O número é zero"<< endl;
  }
  
}