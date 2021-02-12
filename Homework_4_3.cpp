#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
const int a = 1;
const int b = 5;

if (a==10) {
cout << "true" << endl;
} else if (b==10) {
cout << "true" << endl;
} else if ((a+b)==10) {
cout << "true" << endl;
} else {
cout << "false" << endl;
}

return 0;
}
