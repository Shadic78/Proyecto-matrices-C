#include "Alg_MatrixDeterminant.h"
#include <cmath>

t_matrix eliminateRowAndCol(int rowToEliminate, int colToEliminate, t_matrix originalMatrix, int matrixDimension);

t_matrix_value Alg_matrixDeterminant(t_matrix matrix, int matrixDimension) {
	int determinant = 0;

	if (matrixDimension == 2) {
		determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
	}
	else {

		for (int matrixColIndex = 0; matrixColIndex < matrixDimension; matrixColIndex++) {
			t_matrix subMatrix = eliminateRowAndCol(0, matrixColIndex, matrix, matrixDimension);
			int subMatrixDimension = matrixDimension - 1;

			determinant += (matrix[0][matrixColIndex] * pow(-1, (matrixColIndex + 1) + 1)) * Alg_matrixDeterminant(subMatrix, subMatrixDimension);
		}
	}

	return determinant;
}

t_matrix eliminateRowAndCol(int rowToEliminate, int colToEliminate, t_matrix originalMatrix, int matrixDimension) {
	t_matrix subMatrix = createMatrix(matrixDimension - 1, matrixDimension - 1);

	int subMatrixRowIndex = 0;
	int subMatrixColIndex = 0;
	for (int originalMatrixRowIndex = 0; originalMatrixRowIndex < matrixDimension; originalMatrixRowIndex++) {
		
		if (originalMatrixRowIndex == rowToEliminate) {
			continue;
		}

		for (int originalMatrixColIndex = 0; originalMatrixColIndex < matrixDimension; originalMatrixColIndex++) {
			
			if (originalMatrixColIndex == colToEliminate) {
				continue;
			}

			subMatrix[subMatrixRowIndex][subMatrixColIndex] = originalMatrix[originalMatrixRowIndex][originalMatrixColIndex];

			subMatrixColIndex += 1;
		}
		subMatrixColIndex = 0;
		subMatrixRowIndex += 1;
	}

	return subMatrix;
}