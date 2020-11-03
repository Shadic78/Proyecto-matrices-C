#include "Alg_matrixMultScalar.h"

t_matrix Alg_matrixMultScalar(t_matrix matrix, int matrixNumRows, int matrixNumCols, t_matrix_value scalar){
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumCol);

	for (int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
		for (int colIndex = 0; colIndex<matrixNumCol; colIndex++){
			matrixResult[rowsIndex][colIndex] = scalar * matrix[rowsIndex][colIndex];
		}
	}

	return matrixResult;
}