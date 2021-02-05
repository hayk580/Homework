//13.Մատրիցի բոլոր տարրերը արտագրել միաչափ զանգվածի մեջ։Տպել արդյունքը։

#include<iostream>

int main() {
    int row;
    std::cout << "Enter the number of rows of the matrix: ";
    std::cin >> row;
    std::cout << "Enter the number of columns of the matrix: ";
    int column;
    std::cin >> column;
    int mtx[row][column];
    std::cout << "Enter the elements of the matrix." << std::endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            std::cout << "Element " << j + 1 << " of the row " << i << ": ";
            std::cin >> mtx[i][j];
        }
    }
    int arr_size = row * column;
    int arr[arr_size];
    int ix = 0;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            arr[ix] = mtx[i][j];
            ++ix;
        }
    }
    std::cout << "The matrix looks like this:" << std::endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            std::cout << mtx[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << "This is what one dimensional array looks like:" << std::endl;
    for (int i = 0; i < arr_size; ++i)
    {
        std::cout << arr[i];
    }
    return 0;
}