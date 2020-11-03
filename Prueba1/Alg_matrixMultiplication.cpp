#include "Alg_MatrixMultiplication.h"

t_matrix Alg_matrixMultiplication(t_matrix matrixA, t_matrix matrixB, int matrixNumRows, int matrixNumCol) {
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumCol);

	for (int rowIndex = 0; rowIndex < matrixNumRows; rowIndex++) {
		for (int colIndex = 0; colIndex < matrixNumCol; colIndex++) {
			for (int helper = 0; helper < matrixNumRows; helper++){
				matrixResult[rowIndex][colIndex] = matrixA[rowIndex][colIndex] * matrixB[rowIndex][colIndex];
			}
		}
	}

	return matrixResult;
}
