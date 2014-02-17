#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	if (argc > 2)
	{
		cout << "You shall not put in more than one argument" << endl;
		cin.get();
		return -1;
	}
	if (argc <= 1)
	{
		cout << "You shall at least put in one argument" << endl;
		cin.get();
		return -1;
	}

	fstream input(argv[1]);
	int counter = 0;
	string data = "";

	while (!input.eof())
	{
		counter++;
		getline(input, data);
	}

	cout << "Man, this file has whole " << counter << " rows" << endl;
	cin.get();

	return 0;
}