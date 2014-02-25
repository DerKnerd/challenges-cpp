#include <iostream>
#include <fstream>

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
	long counter = 0;

	input.seekg (0, ios::end);
    counter = input.tellg();

	cout << "Your file is exactly " << counter << " bytes long" << endl;
	cin.get();

	return 0;
}