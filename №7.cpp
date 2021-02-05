//7.Տպել քառակուսային մատրիցի գլխավոր անկյունագծի տարրերը։

#include<iostream>

int main() {
	int row;
	std::cout << "Enter the number of rows and columns of the matrix: ";
	std::cin >> row;
	int column = row;
	int arr[row][column];
	std::cout << "Enter the elements of the matrix." << std::endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			std::cout << "Element " << j + 1 << " of the row " << i << ": ";
			std::cin >> arr[i][j];
		}
	}
	std::cout << "The matrix looks like this:" << std::endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}
	std::cout << "The elements of the main diagonal are: ";
	for (int i = 0; i < row; ++i)
	{
		std::cout << arr[i][i] << '\t';
	}
	return 0;
}