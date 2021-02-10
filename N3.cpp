//3.Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num ամբողջ տիպի փոփոխականը եւ տպում է num-ից մինչեւ 0 արժեքները։Ֆունկցիան իրականացնել ռեկուրսիվ տարբերակով։

#include <iostream>

void print(int);

int main() {
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	print(num);
	return 0;
}

void print(int num)
{
	std::cout << num;
	if (num <= 0)
	{
		return;
	}
	print(num - 1);
}