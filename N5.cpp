//5.Գրել Ֆիբոնաչիի n-րդ թիվը հաշվող ֆունկցիա ռեկուրսիվ տարբերակով։

#include <iostream>

int fibonacci(int);

int main() {
	int num;
	std::cout << "Enter a number to calculate fibonacci: ";
	std::cin >> num;
	int fib = fibonacci(num);
	std::cout << fib;
	return 0;
}

int fibonacci(int n)
{
	if (n < 2)
	{
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}