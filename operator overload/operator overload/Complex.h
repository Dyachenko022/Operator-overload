#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef COMPLEX_H
#define COMPLEX_H
struct Complex
{
	int real;
	int imaginary;
	friend bool operator>(Complex &num1, Complex &num2)
	{
		return sqrt(num1.real*num1.real + num1.imaginary*num1.imaginary) > sqrt(num2.real*num2.real + num2.imaginary*num2.imaginary);
	}

	friend bool operator<(Complex &num1, Complex &num2)
	{
		return sqrt(num1.real*num1.real + num1.imaginary*num1.imaginary) < sqrt(num2.real*num2.real + num2.imaginary*num2.imaginary);
	}

	friend bool operator==(Complex &num1, Complex &num2)
	{
		if (num1.imaginary == num2.imaginary)
			return sqrt(num1.real*num1.real + num1.imaginary*num1.imaginary) == sqrt(num2.real*num2.real + num2.imaginary*num2.imaginary);
	}

	Complex& operator=(Complex &num1)
	{
		real = num1.real;
		imaginary = num1.imaginary;
			return *this;
	}
	Complex& operator++()
	{
		real++;
		imaginary++;
		return *this;
	}

	friend Complex operator++(Complex &Num, int)
	{
		Complex old;
		old.real = Num.real;
		Num.real++;

		old.imaginary = Num.imaginary;
		Num.imaginary++;
		
		return old;
	}
	Complex& operator--()
	{
		real--;
		imaginary--;
		return *this;
	}

	friend Complex operator--(Complex &Num, int)
	{
		Complex old;
		old.real = Num.real;
		Num.real--;

		old.imaginary = Num.imaginary;
		Num.imaginary--;

		return old;
	}
};
#endif
