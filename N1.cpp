//1.Իրականացնել ֆակտորիալի հաշվարկումը ռեկուրսիվ եղանակով։

#include <iostream>

int factorial(int);

int main() {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	int factor = factorial(num);
	std::cout << "The factorial of " << num << " is: " << factor;
	return 0;
}

int factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * factorial(num - 1);
}