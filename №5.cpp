//5.Մուտքագրել երկու զանգվածներ, տպել դրանց արտադրյալը։

#include <iostream>

void filling_arr(int*, int);

int main() {
	int size;
	std::cout << "Enter the size of the arrays: ";
	std::cin >> size;
	int arr1[size];
	int arr2[size];
	std::cout << "Enter the elements of the first array." << std::endl;
	filling_arr(arr1, size);
	std::cout << "Enter the elements of the second array." << std::endl;
	filling_arr(arr2, size);
	int arr3[size];
	for (int i = 0; i < size; ++i)
	{
		arr3[i] = arr1[i] * arr2[i];
		std::cout << "The product of the elements " << i + 1 << "  is : " << arr3[i] << std::endl;
	}
	return 0;
}

void filling_arr(int* arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "The element under the index " << i << ": ";
		std::cin >> arr[i];
	}
}