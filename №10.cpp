//10.Քառակուսային մատրիցի գլխավոր և օժանդակ անկյունագծերի տարրերի արժեքները տեղերով փոխել։

#include<iostream>

void swap(int*, int*);

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
    for (int i = 0; i < row; ++i)
    {
        if (arr[i][i] == arr[i][row - (i + 1)])
        {
            continue;
        }
        swap(&arr[i][i], &arr[i][row - (i + 1)]);
    }
    std::cout << "The matrix with swapped numbers looks like this: " << std::endl;
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < column; ++j)
        {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}