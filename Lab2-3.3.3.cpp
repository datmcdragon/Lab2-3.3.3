#include <iostream>
#include "Complex.h"

using namespace std;

int main()
{
	Complex a(4, 3), b(7, 3), c;

	c = a - b;
	cout << c << endl;

	c = a / b;
	cout << c << endl;

	c = ~a;
	cout << c << endl << endl;

	if (a > b)
	{
		cout << a << endl;
	}
	else
	{
		cout << b << endl;
	}

	cin.get();
	system("pause");
}
