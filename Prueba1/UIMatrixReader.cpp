#include "UIMatrixReader.h";
#include "UTL_Matrix.h";

t_matrix readMatrixFromUI(int matrixNumRows, int matrixNumCols, String^ identifier, GroupBox^ container) {
	
	t_matrix matrix = createMatrix(matrixNumRows, matrixNumCols);

	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumCols; column++) {
			String^ txtIdentifier = identifier + row + column;
			Control^ control = container->Controls->Find(txtIdentifier, false)[0];
			TextBox^ textBox = (TextBox^) control;

			String^ textBoxStringData = textBox->Text;
			t_matrix_value textBoxValue = Convert::ToDouble(textBoxStringData);

			matrix[row][column] = textBoxValue;
		}
	}

	return matrix;
}