//3.Մուտքագրել զանգվածի տարրերի արժեքները։Տպել զանգվածի առավելագույն եւ նվազագույն արժեքների գումարը։

#include <iostream>

void swap(int, int);


int main() {
	int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	int arr[size];
	std::cout << "Enter the elements of the array." << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cout << "The element under the index " << i << ": ";
		std::cin >> arr[i];
	}
	int min = 0;
	int max = 0;
	int sum = 0;
	for (int i = 1; i < size; ++i)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		else if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	sum = arr[min] + arr[max];
	std::cout << "The sum is: " << sum;
	return 0;
}