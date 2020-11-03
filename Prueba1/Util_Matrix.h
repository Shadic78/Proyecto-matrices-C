#pragma once
#include <stdlib.h>

typedef double t_matrix_value;
typedef t_matrix_value** t_matrix;
typedef t_matrix_value* t_row_matrix;
typedef t_matrix_value t_cell_matrix;

t_matrix createMatrix(int matrixNumRows, int matrixNumCols);

t_matrix copyMatrix(t_matrix matrix, int matrixNumRows, int matrixNumCols);

t_matrix multiplyRowBy(double number, int row, t_matrix matrix, int matrixNumCols);

t_matrix multiplyColBy(double number, int col, t_matrix matrix, int matrixNumRows);

void destroyMatrix(t_matrix matrix, int matrixNumRows);
