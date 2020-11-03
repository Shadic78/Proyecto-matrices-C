#include "Alg_MatrixMultScalar.h"

t_matrix Alg_matrixMultScalar(t_matrix matrix, int matrixNumRows, int matrixNumCols, t_matrix_value scalar){
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumCols);

	for (int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
		for (int colIndex = 0; colIndex<matrixNumCols; colIndex++){
			matrixResult[rowsIndex][colIndex] = scalar * matrix[rowsIndex][colIndex];
		}
	}

	return matrixResult;
}