#pragma once
class Complex
{
	double Re;
	double Im;
public:
	Complex();
	Complex(double Re, double Im);
	void Print();
	Complex operator+(Complex c);
	Complex operator-(Complex c);
	Complex operator*(Complex c);
	Complex operator/(Complex c);
};

