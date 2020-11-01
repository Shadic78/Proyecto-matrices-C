#include "MatrixSum.h"
#include "MatrixGenerator.h"

int** matrixSum(int** matrixA, int** matrixB, int matrixNumRows, int matrixNumCols) {
	int** matrixResult = createMatrix(matrixNumRows, matrixNumCols);

	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumCols; column++) {
			matrixResult[row][column] = matrixA[row][column] + matrixB[row][column];
		}
	}

	return matrixResult;
}