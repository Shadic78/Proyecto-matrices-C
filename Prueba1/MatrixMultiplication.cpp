#include "MatrixMultiplication.h"
#include "MatrixGenerator.h"

int** matrixMultiplication(int** matrixA, int** matrixB, const int MATRIX_NUM_ROWS, const int MATRIX_NUM_COLS) {
	int** matrixResult = createMatrix(MATRIX_NUM_ROWS, MATRIX_NUM_COLS);

	for (int rowIndex = 0; rowIndex < MATRIX_NUM_ROWS; rowIndex++) {
		for (int columnIndex = 0; columnIndex < MATRIX_NUM_COLS; columnIndex++) {
			for (int helper = 0; helper < MATRIX_NUM_ROWS; helper++){
				matrixResult[rowIndex][columnIndex] = matrixA[rowIndex][columnIndex] * matrixB[rowIndex][columnIndex];
			}
		}
	}

	return matrixResult;
}