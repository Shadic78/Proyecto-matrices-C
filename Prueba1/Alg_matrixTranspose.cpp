#include "Alg_MatrixTranspose.h"

t_matrix Alg_matrixTranspose(t_matrix matrixA, int matrixNumRows, int matrixNumCol){
	int matrixResultNumRows = matrixNumCol;
	int matrixResultNumCol = matrixNumRows;

	t_matrix matrixResult = createMatrix(matrixResultNumRows, matrixResultNumCol);

	for (int rowsIndex = 0; rowsIndex < matrixNumRows; rowsIndex++){
		for (int colIndex = 0; colIndex < matrixNumCol; colIndex++){
			matrixResult[colIndex][rowsIndex] = matrixA[rowsIndex][colIndex];
		}
	}

	return matrixResult;
}