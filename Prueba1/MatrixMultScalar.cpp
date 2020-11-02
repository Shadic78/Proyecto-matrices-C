//
// Created by alerammoo on 01/11/2020.
#include "MatrixMultscalar.h"

t_matrix multiplication(t_matrix matrix, int matrixNumRows, int matrixNumColumns, t_matrix_value scalar){
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumColumns);

	for (int rowsIndex = 0; rowsIndex<matrixNumRows; rowsIndex++){
		for (int columnsIndex = 0; columnsIndex<matrixNumColumns; columnsIndex++){
			matrixResult[rowsIndex][columnsIndex] = scalar * matrix[rowsIndex][columnsIndex];
		}
	}

	return matrixResult;
}