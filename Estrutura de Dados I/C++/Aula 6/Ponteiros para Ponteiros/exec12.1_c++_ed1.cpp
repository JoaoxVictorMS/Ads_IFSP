#include <iostream>

using namespace std;

int main() {
int intVar = 5, intVar2 = 6;
int *ptr1;
int *ptr2;
int **ptr3 = &ptr1;
int **ptr4 = &ptr2;
ptr1 = &intVar;
ptr2 = &intVar2;
ptr3 = &ptr1;
ptr4 = &ptr2;
intVar = 25;
intVar2 = 36;

cout << intVar << endl; 
cout << intVar2 << endl; 
return 0;
}