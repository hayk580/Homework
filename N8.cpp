//8.Գրել ֆունկցիա, որը ստանում է տող եւ վերադարձնում տողի շրջված տարբերակը։


#include <iostream>

std::string reversed(std::string);

int main() {
	std::string str;
	std::cout << "Enter a string: ";
	std::cin >> str;
	std::cout << "The reversed version of the string is: ";
	std::cout << reversed(str);
	return 0;
}

std::string reversed(std::string str)
{
	std::string reverse;
	reverse = str;
	for (int i = str.size() - 1, j = 0; i >= 0; --i, ++j)
	{
		reverse[j] = str[i];
	}
	return reverse;
}