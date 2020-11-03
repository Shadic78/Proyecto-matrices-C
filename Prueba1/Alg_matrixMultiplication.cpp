#include "Alg_MatrixMultiplication.h"

t_matrix Alg_matrixMultiplication(t_matrix matrixA, t_matrix matrixB, int matrixANumCol, int matrixResultNumRows, int matrixResultNumCol) {
	t_matrix matrixResult = createMatrix(matrixResultNumRows, matrixResultNumCol);

	for (int rowIndex = 0; rowIndex < matrixResultNumRows; rowIndex++) {
		for (int colIndex = 0; colIndex < matrixResultNumCol; colIndex++) {
			matrixResult[rowIndex][colIndex] = 0;
			for (int helper = 0; helper < matrixANumCol; helper++){
				matrixResult[rowIndex][colIndex] += matrixA[rowIndex][helper] * matrixB[helper][colIndex];
			}
		}
	}

	return matrixResult;
}
