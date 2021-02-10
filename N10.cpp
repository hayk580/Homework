//10.Գրել ֆունկցիա, որը վերադարձնում է թվի առաջին k թվանշանները։Թիվն ու k-ն մուտքագրել։

#include <iostream>

int* first_k_digits(int , int );

int main() {
	int num = 0;
	std::cout << "Enter a number: ";
	std::cin >> num;
	int k = 0;
	std::cout << "Enter the number of digits you want to see: ";
	std::cin >> k;
	int* ptr = first_k_digits(num, k);
	for (int i = 0; i < k; ++i)
	{
		std::cout << ptr[i];
	}
	delete[]ptr;
	return 0;
}

int* first_k_digits(int num, int k)
{
	int digit;
	int rev_num = 0;
	int* arr = new int[k];
	while (num > 0)
	{
		digit = num % 10;
		rev_num = rev_num * 10 + digit;
		num /= 10;
	}
	num = rev_num;
	for (int i = 0; i < k; ++i)
	{
		digit = num % 10;
		arr[i] = digit;
		num /= 10;
	}
	return arr;
}