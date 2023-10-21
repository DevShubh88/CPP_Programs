#include <iostream>
using namespace std;

int main()
{
	string str1;
	string str2;

	cout << "Enter the String 1:\n";
	cin >> str1;
	cout << "Enter the String 2:\n";
	cin >> str2;

	if (str1 != str2)
		std::cout << "Strings are not equal" << std::endl;
	else
		std::cout << "Strings are equal" << std::endl;
}
