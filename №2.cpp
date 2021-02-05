//2. Մուտքագրել զանգվածի տարրերի արժեքները։Գտնել եւ տպել նվազագույն արժեքով տարրի ինդեքսը։

#include <iostream>
void filling_arr(int*, int);
int min_index(int*, int);

int main() {
	int size = 0;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	int arr[size];
	std::cout << "Enter the elements of the array." << std::endl;
	filling_arr(arr, size);
	int min = min_index(arr, size);
	std::cout << "The index of the biggest number is: " << min;
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

int min_index(int* arr, int size)
{
	int min = 0;
	for (int i = 1; i < size; ++i)
	{
		if (arr[min] > arr[i])
		{
			min = i;
		}
	}
	return min;
}