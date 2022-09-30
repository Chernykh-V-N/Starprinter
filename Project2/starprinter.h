#pragma once

#include <iostream>

using namespace std;

class StarPrinter
{
public:

	StarPrinter(int number);

	void Print();

private:
	int current;
	bool chetnost;

	void Star(int number);
	void Space(int number);
	void Printer(int number, int count);

};