//9.Տպել քառակուսային մատրիցի գլխավոր եւ օժանդակ անկյունագծերի տարրերի գումարները։

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
    int sum = 0;
    for (int i = 0; i < row; ++i)
    {
        if (arr[i][i] == arr[i][row - (i + 1)])
        {
            sum += arr[i][i];
            continue;
        }
        sum += arr[i][i] + arr[i][row - (i + 1)];
    }
    std::cout << "The sum of all the elemts of the main and secondary diagonals is: " << sum;
    return 0;
}