#include <iostream>

using namespace std;

#include "starprinter.h"

int main()
{
	while (true)
	{
		int a;
		cout << "Insert number: ";
		cin >> a;
		StarPrinter s(a);
		s.Print();
	}
	return 0;
}