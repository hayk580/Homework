//17.Տրված նախադասության համար տպել ամենակարճ տողը։

#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cout << "Enter a sentence: ";
	getline(std::cin, str);
	int space = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == ' ')
		{
			++space;
		}
	}
	struct info_holder
	{
		std::string str2;
		int count;
	};
	info_holder arr[space + 1];
	for (int i = 0; i < space + 1; ++i)
	{
		arr[i].count = 0;
	}
	int j = 0;
	for (int i = 0; i < space + 1; ++i)
	{
		while (j != str.size())
		{
			if (str[j] != ' ')
			{
				arr[i].str2 += str[j];
				++arr[i].count;
				++j;
			}
			else
			{
				++j;
				break;
			}
		}
	}
	int min = 0;
	for (int i = 1; i < space + 1; ++i)
	{
		if (arr[min].count > arr[i].count)
		{
			min = i;
		}
	}
	std::cout << "The shortest word in a sentence is: " << arr[min].str2;
	return 0;
}
