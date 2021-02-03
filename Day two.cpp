/*Declare an array that represents the squares on the chessboard; the type of the array
being an enum that defines the pieces that may possibly occupy the squares.
HINT: The enum will contain enumerators (Rook, Bishop, and so on), thereby
limiting the range of possible values that the elements in the array can hold. Don’t
forget that a cell may also be empty!*/

#include <iostream>

int main() {
	enum figures  { Empty = 0,Rook,Knight,Bishop,King,Queen,Pawn };
	figures chessboard[8][8];
	chessboard[0][0] = chessboard[0][7] = chessboard[7][0] = chessboard[7][7] = Rook;
	chessboard[0][1] = chessboard[0][6] = chessboard[7][1] = chessboard[7][6] = Knight;
	chessboard[0][2] = chessboard[0][5] = chessboard[7][2] = chessboard[7][5] = Bishop;
	chessboard[0][3] = chessboard[7][3] = Queen;
	chessboard[0][4] = chessboard[7][4] = King;

for (int i = 1, jx = 6; i <= 1; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			chessboard[i][j]=chessboard[jx][j]=Pawn;
		}
	}
	for (int i = 2; i < 6; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			chessboard[i][j] = Empty;
		}
	}
	for (int i = 0; i < 8; ++i)
	{
		for (int j = 0; j < 8; ++j)
		{
			std::cout << chessboard[i][j];
		}
		std::cout << std::endl;
	}
	return 0;
}
