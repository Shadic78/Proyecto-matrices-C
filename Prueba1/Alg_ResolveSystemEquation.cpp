#include "Alg_ResolveSystemEquation.h"


t_vector resolveSystemEquation(t_matrix matrix, int matrixNumRows, int matrixNumCols) {

	t_matrix matrixSolution = copyMatrix(matrix, matrixNumRows, matrixNumCols);

	//pivotPosition representa tanto la fila y columna en la que se encuentra el pivote
	for (int pivotPosition = 0; pivotPosition < matrixNumRows; pivotPosition++)
	{

		if (matrixSolution[pivotPosition][pivotPosition] != 1) {
			double diagonalValue = matrixSolution[pivotPosition][pivotPosition];
			if (diagonalValue == 0) {
				//_STATIC_ASSERT("Division entre cero");
				break;
			}
			double inverseDiagonalValue = 1 / diagonalValue;
			multiplyRowBy(inverseDiagonalValue, pivotPosition, matrixSolution, matrixNumCols);
		}

		//check the others value of the colum
		for (int rowIndex = 0; rowIndex < matrixNumRows; rowIndex++)
		{
			bool isPivot = (rowIndex == pivotPosition);
			if (isPivot) {
				continue;
			}

			double valueCell = matrixSolution[rowIndex][pivotPosition];

			if (valueCell != 0) {
				valueCell *= -1;

				for (int colIndex = 0; colIndex < matrixNumCols; colIndex++)
				{
				
					double matrixPivotRowByValue = valueCell * matrixSolution[pivotPosition][colIndex];


					double matrixCellValue = matrixSolution[rowIndex][colIndex] + matrixPivotRowByValue;

					matrixSolution[rowIndex][colIndex] = matrixCellValue;
				}

			}
		}
	}

	t_vector solution = createVector(matrixNumRows);

	for (int i = 0; i < matrixNumRows; i++){
		solution[i] = matrixSolution[i][matrixNumCols - 1];
	}

	destroyMatrix(matrixSolution, matrixNumRows);

	return solution;
}
