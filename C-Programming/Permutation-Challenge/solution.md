##Solution
The trick to string permutations is to find all permutations that begin with one letter, then all permutations that begin with a second letter, and so forth. This might suggest a recursive solution: in order to find all permutations that begin with a given letter, call permute on the remainder of the string, thereby finding all permutations of the substring using the same algorithm.

One way of coding this is as follows:

	#include <iostream>
	#include <string>

	using namespace std;

	string swtch(string topermute, int x, int y)
	{
		string newstring = topermute;
		newstring[x] = newstring[y];
		newstring[y] = topermute[x]; //avoids temp variable
		return newstring;
	}
	void permute(string topermute, int place)
	{
		if(place == topermute.length() - 1)
		{
			cout << topermute << endl;
		}
		for(int nextchar = place; nextchar < topermute.length(); nextchar++)
		{
			permute(swtch(topermute, place, nextchar), place + 1);
		}
	}

	int main(int argc, char* argv[])
	{
		if(argc!=2)
		{
			cout << "Proper input is 'permute string'";
					return 1;
		}
		permute(argv[1], 0);
	}
