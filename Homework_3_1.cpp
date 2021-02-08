#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
const int a = 1;
const int b = 5;
const int c = 10;
const int d = 20;

float e = static_cast<float>(a*(b+(c/d)));

std::cout << e << endl;

return 0;
}
