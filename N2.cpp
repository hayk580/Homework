//2.Իրականացնել ֆակտորիալի հաշվարկումը ինտերատիվ եղանակով։

#include <iostream>

int main() {
	int num;
	std::cout << "Enter a number: ";
	std::cin >> num;
	int i = 1;
	int factorial = 1;
	while (i <= num)
	{
		factorial *= i;
		++i;
	}
	std::cout << "The factorial of " << num << " is: " << factorial;
	return 0;
}