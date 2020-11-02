//
// Created by alerammoo on 01/11/2020.
#include "MatrixMultscalar.h"
#include "MatrixGenerator.h"

int** multiplication(int** matrix, const int MATRIX_NUM_ROWS, const int MATRIX_NUM_COLS, int scalar){
	int** matrixResult = createMatrix(MATRIX_NUM_ROWS, MATRIX_NUM_COLS);

	for (int rowsIndex = 0; rowsIndex < MATRIX_NUM_ROWS; rowsIndex++){
		for (int columnsIndex = 0; columnsIndex < MATRIX_NUM_COLS; columnsIndex++){
			matrixResult[rowsIndex][columnsIndex] = scalar * matrix[rowsIndex][columnsIndex];
		}
	}

	return matrixResult;
}