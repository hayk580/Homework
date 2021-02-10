//9.Գրել ֆունկցիա, որը ստանում է զանգված եւ ինդեքսի համար։Ֆունկցիան հեռացնում է զանգվածի տրված ինդեքսով տարրը եւ վերադարձնում նոր զանգվածը որպես արդյունք։

#include <iostream>

int* remove_ix(int*& arr, int n, int size);

int main() {
	int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	int index;
	std::cout << "Enter the index you want to remove: ";
	std::cin >> index;
	int* ptr=remove_ix(arr, index, size);
	for (int i = 0; i < size-1; ++i)
	{
		std::cout << ptr[i];
	}
	return 0;
}
int*  remove_ix(int*& arr, int ix, int size)
{
	int* tmp = new int[size - 1];
	for (int i = 0, j = 0; i < size-1; ++i, ++j)
	{
		if (i == ix)
		{
			++i;
		}
		tmp[j] = arr[i];
	}
		delete[]arr;
		arr = tmp;
		return arr;
}