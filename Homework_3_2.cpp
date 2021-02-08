#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
int a = 10;
int b = (a<21) ? 21-a:(a-21)*2;

std::cout << b << endl;

return 0;
}
