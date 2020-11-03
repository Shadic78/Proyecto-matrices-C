#include "Alg_InverseMatrix.h"

t_matrix aumentIdentityMatrix(t_matrix matrix, int dimension);

t_matrix Alg_inverseMatrix(t_matrix matrix, int dimension) {

	t_matrix matrixAumented = aumentIdentityMatrix(matrix, dimension);

	//pivotPosition representa tanto la fila y columna en la que se encuentra el pivote
	for (int pivotPosition = 0; pivotPosition < dimension; pivotPosition++){

		if (matrixAumented[pivotPosition][pivotPosition] != 1) {

			double diagonalValue = matrixAumented[pivotPosition][pivotPosition];
			if (diagonalValue == 0) {
				//_STATIC_ASSERT("Division entre cero");
				break;
			}
			double inverseDiagonalValue = 1 / diagonalValue;

			multiplyRowBy(inverseDiagonalValue, pivotPosition, matrixAumented, dimension * 2);
		}

		//check the others value of the colum
		for (int rowIndex = 0; rowIndex < dimension; rowIndex++){
			bool isPivot = (rowIndex == pivotPosition);
			if (isPivot) {
				continue;
			}

			double valueCell = matrixAumented[rowIndex][pivotPosition];

			if (valueCell != 0) {

				valueCell *= -1;

				for (int colIndex = 0; colIndex < dimension * 2; colIndex++){

					double matrixPivotRowByValue = valueCell * matrixAumented[pivotPosition][colIndex];
					double matrixCellValue = matrixAumented[rowIndex][colIndex] + matrixPivotRowByValue;

					matrixAumented[rowIndex][colIndex] = matrixCellValue;
				}

			}
		}
	}

	t_matrix inversedMatrix = createMatrix(dimension, dimension);

	for (int rowIndex = 0; rowIndex < dimension; rowIndex++){
		for (int colIndex = 0; colIndex < dimension; colIndex++){
			inversedMatrix[rowIndex][colIndex] = matrixAumented[rowIndex][dimension + colIndex];
		}

	}

	destroyMatrix(matrixAumented, dimension);

	return inversedMatrix;
}


t_matrix aumentIdentityMatrix(t_matrix matrix, int dimension) {

	t_matrix matrixAumented = createMatrix(dimension, dimension * 2);
	for (int rowIndex = 0; rowIndex < dimension; rowIndex++){
		for (int colIndex = 0; colIndex < dimension; colIndex++){
			matrixAumented[rowIndex][colIndex] = matrix[rowIndex][colIndex];
		}
	}

	t_matrix identityMatrix = createMatrix(dimension, dimension);
	for (int i = 0; i < dimension; i++){
		identityMatrix[i][i] = 1;
	}

	for (int rowIndex = 0; rowIndex < dimension; rowIndex++){
		for (int colIndex = dimension; colIndex < dimension * 2; colIndex++){
			matrixAumented[rowIndex][colIndex] = identityMatrix[rowIndex][colIndex - dimension];
		}
	}

	destroyMatrix(identityMatrix, dimension);

	return matrixAumented;
}