#include <iostream>

using namespace std;

#include "starprinter.h"

void StarPrinter::Printer(int number, int count)
{
	if (count % 2 == chetnost)
	{
			Space((number - count) / 2);
			Star(count);
			//Space((number - count) / 2);

			cout << endl;
	}
}

StarPrinter::StarPrinter(int number)
	: current(number), chetnost(number % 2)
{}

void StarPrinter::Star(int number)
{
	for (int count = 0; count < number; count++)
	{
		cout << "*";
	}

}

void StarPrinter::Space(int number)
{
	for (int count = 0; count < number; count++)
	{
		cout << " ";
	}
}


void StarPrinter::Print()
{
	for (int count = 1; count <= current; count++)
	{
		Printer(current, count);
	}
	for (int count = current - 2; count >= 1; count--)
	{
			Printer(current, count);
	}
}

/*
string operator*(char& symbol, int& number)
{

}
*/