#include <stdlib.h> 

int** createMatrix(int matrixNumRows, int matrixNumCols) {
	int** matrix = (int**) malloc(matrixNumRows * sizeof(int*));

	for (int i = 0; i < matrixNumRows; i++) {
		matrix[i] = (int *)malloc(matrixNumCols * sizeof(int));
	}

	return matrix;
}