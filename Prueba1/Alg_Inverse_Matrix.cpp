#include "Alg_Inverse_Matrix.h"

t_matrix inverseMatrix(t_matrix matrixToInverse, int dimension) {

	t_matrix matrixAumented = AumentIdentityMatrix(matrixToInverse, dimension);

	for (int pivotPos = 0; pivotPos < dimension; pivotPos++)
	{

		if (matrixAumented[pivotPos][pivotPos] != 1) {
			double diagonalValue = matrixAumented[pivotPos][pivotPos];
			if (diagonalValue == 0) {
				//_STATIC_ASSERT("Division entre cero");
				break;
			}
			double inverseDiagonalValue = 1 / diagonalValue;
			multiplyRowBy(inverseDiagonalValue, pivotPos, matrixAumented, dimension * 2);
		}

		//check the others value of the colum
		for (int rowToCheck = 0; rowToCheck < dimension; rowToCheck++)
		{
			if (rowToCheck == pivotPos) {
				continue;
			}

			double valueCell = matrixAumented[rowToCheck][pivotPos];

			if (valueCell != 0) {
				valueCell *= -1;

				for (int columAument = 0; columAument < dimension * 2; columAument++)
				{
					double matrixPivotRowByValue = valueCell * matrixAumented[pivotPos][columAument];


					double valueForMatrix = matrixAumented[rowToCheck][columAument] + matrixPivotRowByValue;

					matrixAumented[rowToCheck][columAument] = valueForMatrix;
				}

			}
		}
	}

	t_matrix inverseMatrix = createMatrix(dimension, dimension);

	for (int row = 0; row < dimension; row++)
	{
		for (int col = 0; col < dimension; col++)
		{
			inverseMatrix[row][col] = matrixAumented[row][dimension + col];
		}

	}

	destroyMatrix(matrixAumented, dimension);
	return inverseMatrix;

}


t_matrix AumentIdentityMatrix(t_matrix matrixToAument, int dimension) {

	t_matrix matrixAumented = createMatrix(dimension, dimension * 2);

	for (int row = 0; row < dimension; row++)
	{
		for (int colum = 0; colum < dimension; colum++)
		{
			matrixAumented[row][colum] = matrixToAument[row][colum];
		}
	}


	t_matrix identityMatrix = createMatrix(dimension, dimension);

	for (int i = 0; i < dimension; i++)
	{
		identityMatrix[i][i] = 1;
	}



	for (int row = 0; row < dimension; row++)
	{
		for (int colum = dimension; colum < dimension * 2; colum++)
		{
			matrixAumented[row][colum] = identityMatrix[row][colum - dimension];
		}
	}

	destroyMatrix(identityMatrix, dimension);

	return matrixAumented;
}