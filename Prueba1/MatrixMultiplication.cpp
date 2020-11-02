//
// Created by alerammoo on 01/11/2020.
//
#include "MatrixMultiplication.h"

t_matrix matrixMultiplication(t_matrix matrixA, t_matrix matrixB, int matrixNumRows, int matrixNumColumns) {
	t_matrix matrixResult = createMatrix(matrixNumRows, matrixNumColumns);

	for (int rowIndex = 0; rowIndex < matrixNumRows; rowIndex++) {
		for (int columnIndex = 0; columnIndex < matrixNumColumns; columnIndex++) {
			for (int helper = 0; helper<matrixNumRows; helper++){
				matrixResult[rowIndex][columnIndex] = matrixA[rowIndex][columnIndex] * matrixB[rowIndex][columnIndex];
			}
		}
	}

	return matrixResult;
}
