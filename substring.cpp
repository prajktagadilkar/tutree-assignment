#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to find all substrings of string X that are
// permutations of string Y
void findAllAnagrams(string str1, string str2)
{
	// m and n stores size of string Y and X respectively
	int m, n;

	// invalid input
	if ((m = str2.length()) > (n = str1.length()))
		return;

	for (int i = 0; i <= n - m; i++)
	{
		// if a substring X[i .. i+m] is a permutation of Y
		if (is_permutation(str1.begin() + i, str1.begin() + i + m, str2.begin()))
		{
			cout << "Anagram " << str1.substr(i, m) <<
					" present at index " << i << '\n';
		}
	}
}

int main()
{
	string X = "XYYZXZYZXXYZ";
	string Y = "XYZ";

	findAllAnagrams(X, Y);

	return 0;
}