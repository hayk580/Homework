//4.Գրել ֆունկցիա, որը որպես արգումենտ ստանում է num ամբողջ տիպի փոփոխականը եւ տպում է num-ից մինչեւ 0 արժեքները։Ֆունկցիան իրականացնել ինտերատիվ տարբերակով։

#include <iostream>

int main() {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	while(num >= 0)
	{
		std::cout << num;
		--num;
	}
	return 0;
}