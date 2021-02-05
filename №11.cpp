//11.Տպել զանգվածի կենտ թվերի քանակը։

#include<iostream>

int main() {
	int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	int arr[size];
	std::cout << "Enter the elements of the array." << std::endl;
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Element " << i + 1 << ": ";
		std::cin >> arr[i];
		if (arr[i] & 1)
		{
			++count;
		}
	}
	std::cout << "The number of odd numbers in the array is: " << count;
	return 0;
}