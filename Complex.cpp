#include "Complex.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

Complex::Complex()
{
	Re = 0;
	Im = 0;
}
Complex::Complex(double Re, double Im)
{
	this->Re = Re;
	this->Im = Im;
}
void Complex::Print()
{	
	if (Im == 0)
		cout << Re << endl;
	if (Re < 0)
		cout << Im << "i - " << -Re << endl;
	else
		cout << Im << "i + " << Re << endl;
}
Complex Complex::operator+(Complex c)
{
	Complex result(Re + c.Re, Im + c.Im);
	return result;
}
Complex Complex::operator-(Complex c)
{
	cout << endl << "Subtraction of complex numbers" << endl;;
	Complex result(c.Re - Re, c.Im - Im);
	return result;

}
Complex Complex::operator*(Complex c)
{
	cout << endl << "Multiplication of complex numbers" << endl;
	Complex result(Re * c.Re - Im * c.Im, Im * c.Re + c.Im * Re);
	return result;
}
Complex Complex::operator/(Complex c)
{	
	cout << endl << "Division of complex numbers" << endl;
	Complex result((Re * c.Re + Im * c.Im) / (c.Re * c.Re + c.Im * c.Im), (Re * c.Im - c.Re * Im) / (c.Re * c.Re + c.Im * c.Im));
	return result;
}
