#include "Alg_System_Equation.h"
#include <stdlib.h>

t_vector resolveSystemEquation(t_matrix matrixToResolve, int numRows, int numCols) {
	t_matrix matrixSolution = copyMatrix(matrixToResolve, numRows, numCols);

	for (int pivotPos = 0; pivotPos < numRows; pivotPos++)
	{

		if (matrixSolution[pivotPos][pivotPos] != 1) {
			double diagonalValue = matrixSolution[pivotPos][pivotPos];
			if (diagonalValue == 0) {
				//_STATIC_ASSERT("Division entre cero");
				break;
			}
			double inverseDiagonalValue = 1 / diagonalValue;
			multiplyRowBy(inverseDiagonalValue, pivotPos, matrixSolution, numCols);
		}

		//check the others value of the colum
		for (int rowToCheck = 0; rowToCheck < numRows; rowToCheck++)
		{
			if (rowToCheck == pivotPos) {
				continue;
			}

			double valueCell = matrixSolution[rowToCheck][pivotPos];

			if (valueCell != 0) {
				valueCell *= -1;

				for (int columAument = 0; columAument < numCols; columAument++)
				{
					double matrixPivotRowByValue = valueCell * matrixSolution[pivotPos][columAument];


					double valueForMatrix = matrixSolution[rowToCheck][columAument] + matrixPivotRowByValue;

					matrixSolution[rowToCheck][columAument] = valueForMatrix;
				}

			}
		}
	}

	t_vector solution = createVector(numRows);

	for (int i = 0; i < numRows; i++)
	{
		solution[i] = matrixSolution[i][numCols - 1];

	}

	destroyMatrix(matrixSolution, numRows);
	return solution;
}
