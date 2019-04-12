#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef VECTOR_H
#define VECTOR_H

struct vector
{
	double vectorx;
	double vectory;
	friend bool operator>(vector &num1, vector &num2)
	{
		return(sqrt(num1.vectorx * num1.vectorx + num1.vectory * num1.vectory) > sqrt(num2.vectorx * num2.vectorx + num2.vectory * num2.vectory));
	}
	friend bool operator<(vector &num1, vector &num2)
	{
		return(sqrt(num1.vectorx * num1.vectorx + num1.vectory * num1.vectory) < sqrt(num2.vectorx * num2.vectorx + num2.vectory * num2.vectory));
	}
	friend bool operator>=(vector &num1, vector &num2)
	{
		return(sqrt(num1.vectorx * num1.vectorx + num1.vectory * num1.vectory) >= sqrt(num2.vectorx * num2.vectorx + num2.vectory * num2.vectory));
	}
	friend bool operator <=(vector &num1, vector &num2)
	{
		return(sqrt(num1.vectorx * num1.vectorx + num1.vectory * num1.vectory) <= sqrt(num2.vectorx * num2.vectorx + num2.vectory * num2.vectory));
	}
	friend bool operator==(vector &num1, vector &num2)
	{
		return(num1.vectorx == num2.vectorx && num1.vectory == num2.vectory);
	}
	friend ostream& operator<<(ostream &out, vector &num)
	{
		out << "your vector is: (" << num.vectorx << ", " << num.vectory << ")" << endl;
		return out;
	}
	friend istream& operator>>(istream &in, vector &num)
	{
		cout << "x: ";
		in >> num.vectorx;
		cout << endl;
		cout << "y: ";
		in >> num.vectory;
		cout << endl;
		return in;
	}
};


#endif
