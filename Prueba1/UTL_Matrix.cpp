#include "UTL_Matrix.h"

t_matrix createMatrix(int matrixNumRows, int matrixNumCols) {
	t_matrix matrix = (t_matrix)malloc(matrixNumRows * sizeof(t_row_matrix));

	for (int i = 0; i < matrixNumRows; i++) {
		matrix[i] = (t_row_matrix)malloc(matrixNumCols * sizeof(t_cell_matrix));
	}

	for (int i = 0; i < matrixNumRows; i++)
	{
		for (int j = 0; j < matrixNumCols; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return matrix;
}

t_matrix copyMatrix(t_matrix matrix, int matrixNumRows, int matrixNumCols) {

	t_matrix copyMatrix = createMatrix(matrixNumRows, matrixNumCols);

	for (int row = 0; row < matrixNumRows; row++)
	for (int col = 0; col < matrixNumCols; col++)
	{
		copyMatrix[row][col] = matrix[row][col];
	}

	return copyMatrix;
}

t_matrix multiplyRowBy(double number, int row, t_matrix matrix, int matrixNumCols) {
	for (int colum = 0; colum < matrixNumCols; colum++)
	{
		matrix[row][colum] = matrix[row][colum] * number;
	}

	return matrix;
}


t_matrix multiplyColBy(double number, int col, t_matrix matrix, int matrixNumRows) {
	for (int row = 0; row < matrixNumRows; row++)
	{
		matrix[row][col] = matrix[row][col] * number;
	}

	return matrix;
}

void destroyMatrix(t_matrix matrix, int matrixNumRows) {

	for (int i = 0; i < matrixNumRows; i++) {
		free(matrix[i]);
		matrix[i] = 0;
	}

	free(matrix);

	matrix = 0;
}