//
// Created by alerammoo on 01/11/2020.
//
#include "MatrixTranspose.h"

t_matrix transpose(t_matrix matrixA, int matrixNumRows, int matrixNumColumns){
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumColumns);
	for (int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
		for (int columnsIndex = 0; columnsIndex<matrixNumColumns; columnsIndex++){
			matrixResult[columnsIndex][rowsIndex] = matrixA[rowsIndex][columnsIndex];
		}
	}
	return matrixResult;
}
