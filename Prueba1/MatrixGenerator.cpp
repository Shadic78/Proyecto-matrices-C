#include <stdlib.h>

int** createMatrix(const int MATRIX_NUM_ROWS, const int MATRIX_NUM_COLS) {
	int** matrix = (int**)malloc(MATRIX_NUM_ROWS * sizeof(int*));

	for (int index = 0; index < MATRIX_NUM_ROWS; index++) {
		matrix[index] = (int *)malloc(MATRIX_NUM_COLS * sizeof(int));
	}

	return matrix;
}