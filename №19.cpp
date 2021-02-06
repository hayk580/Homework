//19.Տրված նախադասության համար դուրս բերել եւ տպել բոլոր թվերը։

#include<iostream>
#include<string>

int main() {
	std::string sentence;
	std::cout << "Enter a sentence: ";
	getline(std::cin, sentence);
	bool is_true = true;
	for (int i = 0; i < sentence.size(); ++i)
	{ 

		if (sentence[i] >= '0' && sentence[i] <= '9')
		{
			is_true = false;
			std::cout << sentence[i];
		}
		else 
		{
			continue;
		}
	}
	if (is_true)
	{
		std::cout << "There are no numbers in a sentence.";
	}
	return 0;
}