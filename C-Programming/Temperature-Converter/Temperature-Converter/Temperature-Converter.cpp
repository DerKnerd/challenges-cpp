// Temperature Converter.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"

#define LOWERLIMIT 0
#define HIGHERLIMIT 50000

double CtoF(double c) {
	return c * 1.8 + 32;
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Please give in a lower limit, limit >= " << LOWERLIMIT << ": ";
	double lower = LOWERLIMIT;
	cin >> lower;
	if (lower < LOWERLIMIT) {
		cout << "The lower limit needs to be >= " << LOWERLIMIT << endl;
		cin.get();
		return -1;
	}
	
	cout << "Please give in a higher limit, limit <= " << HIGHERLIMIT << ": ";
	double higher = HIGHERLIMIT;
	cin >> higher;
	if (higher > HIGHERLIMIT) {
		cout << "The higher limit needs to be <= " << HIGHERLIMIT << endl;
		cin.get();
		return -1;
	}
	
	cout << "Please give in a step, " << LOWERLIMIT << " < step <=" << lower << ": ";
	double step = 0;
	cin >> step;
	if (LOWERLIMIT >= step > lower) {
		cout << "The step needs to be " << LOWERLIMIT << " < step <=" << lower << ": ";
		cin.get();
		return -1;
	}

	cout << "Celsius\t\tFahrenheit" << endl;
	cout << "-------\t\t----------" << endl;


	for (int i = lower; i < higher; i += step) {
		cout << i << "\t\t" << CtoF(i) << endl;
	}

	cin.get();
	cin.get();
	return 0;
}
