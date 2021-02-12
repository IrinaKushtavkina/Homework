#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
cout << "Please, enter year: ";
int Year;
cin >> Year;

if (Year%4 != 0) {
cout << "Not leap year"  << endl;
} else {
cout << "Leap year"  << endl;
}

return 0;
}
