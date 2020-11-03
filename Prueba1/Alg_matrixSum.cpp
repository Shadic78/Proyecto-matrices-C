#include "Alg_matrixSum.h"

t_matrix Alg_matrixSum(t_matrix matrixA, t_matrix matrixB, int matrixNumRows, int matrixNumCol) {
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumCol);

	for (int rowIndex = 0; rowIndex < matrixNumRows; rowIndex++) {
		for (int colIndex = 0; colIndex < matrixNumCol; colIndex++) {
			matrixResult[rowIndex][colIndex] = matrixA[rowIndex][colIndex] + matrixB[rowIndex][colIndex];
		}
	}

	return matrixResult;
}