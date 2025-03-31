#include <iostream>

using namespace std;

int main() {
  int intVar = 5;
  int *ptr1;
  int **ptr2 = &ptr1;
  ptr1 = &intVar;
  ptr2 = &ptr1;
  intVar = 10;

  cout << intVar << endl;
  return 0;
}