// operator overload.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include "Complex.h"
#include "Vector.h"

int main()
{
	vector v1;
	vector v2;
	cout << "Enter vector 1" << endl;
	cin >> v1;
	cout << "Enter vector 2" << endl;
	cin >> v2;
	cout << v1;
	cout << v2;
	if (v1 > v2)
	{
		cout << "vecror 1 has bigger value" << endl;
	}
	else
		cout << "vecror 2 has bigger value" << endl;

	Complex c1;
	Complex c2;
	cout << "Enter complex 1" << endl;
	cin >> c1.real;
	cin >> c1.imaginary;
	cout << "Enter complex 2" << endl;
	cin >> c2.real;
	cin >> c2.imaginary;
	if (c1 > c2)
		cout << "complex 1 is bigger than complex 2" << endl;
	else if (c1 == c2)
		cout << "complex 1 is equal to complex 2" << endl;
	else
		cout << "complex 2 is bigger than complex 1" << endl;
	c1 = c2;
	c1++;
	cout << "real c1: " << c1.real << endl;
	cout << "imaginary c1: " << c1.imaginary << endl;
	c1--;
	cout << "real c1: " << c1.real << endl;
	cout << "imaginary c1: " << c1.imaginary << endl;

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
