#include "MatrixSum.h"

t_matrix matrixSum(t_matrix matrixA, t_matrix matrixB, int matrixNumRows, int matrixNumColumns) {
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumColumns);

	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumColumns; column++) {
			matrixResult[row][column] = matrixA[row][column] + matrixB[row][column];
		}
	}

	return matrixResult;
}