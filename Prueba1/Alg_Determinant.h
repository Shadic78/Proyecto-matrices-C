#pragma once
#include "Util_Matrix.h"


int matrixCofactor(t_matrix matrixA, t_matrix_value matrixOrder, int row, int column, int matrixNumRows, int matrixNumCol);
t_matrix_value determinant(t_matrix matrixA, t_matrix_value matrixOrder, int matrixNumRows, int matrixNumCol);