#include <iostream>

using namespace std;

int main() {
float intVar = 12.1, intVar2 = 14.2;
float &rRefVar = intVar;
float &rRefVar2 = intVar2;
rRefVar = 22.1; 
rRefVar2 = 24.2;
cout << "intVar: " << intVar << endl;
cout << "intVar2: " << intVar2 << endl;


return 0;
}