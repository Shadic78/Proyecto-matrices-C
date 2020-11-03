#include "Alg_matrixTranspose.h"

t_matrix Alg_matrixTranspose(t_matrix matrixA, int matrixNumRows, int matrixNumCol){
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumCol);

	for (int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
		for (int colIndex = 0; colIndex<matrixNumCol; colIndex++){
			matrixResult[colIndex][rowsIndex] = matrixA[rowsIndex][colIndex];
		}
	}

	return matrixResult;
}
