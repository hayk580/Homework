//4.Մուտքագրել զանգվածի տարրերի արժեքները։Տպել զանգվածի տարրերը հակառակ հերթականությամբ։

#include<iostream>

void swap(int*, int*);

int main() {
	int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	int arr[size];
	std::cout << "Enter the elements of the array." << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cout << "Element " << i + 1 << ": ";
		std::cin >> arr[i];
	}
	std::cout << "The reversed order of the array is: ";
	for (int i = 0; i < size / 2; ++i)
	{
		swap(&arr[i], &arr[size - (i + 1)]);
	}
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i];
	}
	return 0;
}

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}