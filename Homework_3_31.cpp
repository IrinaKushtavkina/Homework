#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
extern const int a;
extern const int b;
extern const int c;
extern const int d;
float e = static_cast<float>(a*(b+(c/d)));

std::cout << e << endl;

return 0;
}
