#include "MatrixSum.h"
#include "MatrixGenerator.h"

int** matrixSum(int** matrixA, int** matrixB, const int MATRIX_NUM_ROWS, const int MATRIX_NUM_COLS) {
	int** matrixResult = createMatrix(MATRIX_NUM_ROWS, MATRIX_NUM_COLS);

	for (int row = 0; row < MATRIX_NUM_ROWS; row++) {
		for (int column = 0; column < MATRIX_NUM_COLS; column++) {
			matrixResult[row][column] = matrixA[row][column] + matrixB[row][column];
		}
	}

	return matrixResult;
}