//16. Գտնել եւ տպել զանգվածի տարրերի գումարի ու արտադրյալի միջին թվաբանականը։

#include<iostream>

void filling_arr(int*, int);
int sum_of_elem(int*, int);
int product_of_elem(int*, int);
int arithmetic_mean(int, int);

int main() {
	int size;
	std::cout << "Enter the size of the array: ";
	std::cin >> size;
	int arr[size];
	std::cout << "Enter the elements of the array." << std::endl;
	filling_arr(arr, size);
	int sum = sum_of_elem(arr, size);
	std::cout << "The sum of the elements is: " << sum << std::endl;
	int product = product_of_elem(arr, size);
	std::cout << "The product of the elements is: " << product << std::endl;
	int arith_mean = arithmetic_mean(sum, product);
	std::cout << "The arithemtic mean of the sum and the product is: " << arith_mean;
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

int sum_of_elem(int* arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

int product_of_elem(int* arr, int size)
{
	int product = 1;
	for (int i = 0; i < size; ++i)
	{
		product *= arr[i];
	}
	return product;
}

int arithmetic_mean(int sum, int product)
{
	int ar_mean = (sum + product) / 2;
	return ar_mean;
