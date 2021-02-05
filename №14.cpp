//14.Մուտքագրել տող։Գտնել եւ տպել տողում ամենաշատ կրկնվող սիմվոլը։

#include <iostream>
#include <string>

struct check
{
	char ch;
	int count;
};

int max_elem(check*, int);

int main() {
	std::string str;
	std::cout << "Enter a string: ";
	std::cin >> str;
	check arr[str.size()];
	for (int i = 0; i < str.size(); ++i)
	{
		arr[i].count = 0;
	}
	for (int i = 0; i < str.size(); ++i)
	{
		arr[i].ch = str[i];
	}

	for (int i = 0; i < str.size(); ++i)
	{
		for (int j = 0; j < (str.size() - 1); ++j)
		{
			if (str[i] == str[j + i + 1])
			{
				++arr[i].count;
			}
			else
			{
				arr[i].count += 0;
			}
		}
	}
	int max = max_elem(arr, str.size());
	if (arr[max].count == 0)
	{
		std::cout << "There are no repeating characters.";
	}
	else {
		std::cout << "The most repeated character is: " << arr[max].ch;
	}
	return 0;
}

int max_elem(check* arr, int size)
{
	int max = 0;
	for (int i = 1; i < size; ++i)
	{
		if (arr[max].count < arr[i].count)
		{
			max = i;
		}
		else if (arr[max].count == arr[i].count)
		{
			continue;
		}
	}
	return max;
}