#include <iostream>
#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
	Complex c1;
	Complex c2(-10, 15.3);
	Complex c3(7.4, 1.38);
	c1 = c2 + c3;
	c1.Print();
	c2.Print();
	c3.Print();
	c1 = c2 - c3;
	c1.Print();
	c1 = c2 * c3;
	c1.Print();
	c1 = c2 / c3;
	c1.Print();
}
