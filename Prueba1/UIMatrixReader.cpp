#include "UIMatrixReader.h";
#include "MatrixGenerator.h";

int** readMatrixFromUI(int matrixNumRows, int matrixNumCols, String^ identifier, GroupBox^ container) {
	
	int** matrix = createMatrix(matrixNumRows, matrixNumCols);

	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumCols; column++) {
			String^ txtIdentifier = identifier + row + column;
			Control^ control = container->Controls->Find(txtIdentifier, false)[0];
			TextBox^ textBox = (TextBox^) control;

			String^ textBoxStringData = textBox->Text;
			int textBoxValue = Convert::ToInt32(textBoxStringData);

			matrix[row][column] = textBoxValue;
		}
	}

	return matrix;
}