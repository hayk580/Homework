//6.Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ինտերատիվ տարբերակով։

#include <iostream>

int main() {
	int num;
	std::cout << "Enter a number to calculate fibonacci: ";
	std::cin >> num;
	int n1 = 1;
	int n2 = 1;
	int n3 = 0;
	for (int i = 2; i < num; ++i)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	std::cout << n3;

	return 0;
}