#include "UIMatrixReader.h"
#include "MatrixGenerator.h"

int** readMatrixFromUI(const int MATRIX_NUM_ROWS, const int MATRIX_NUM_COLS, String^ identifier, GroupBox^ container) {
	
	int** matrix = createMatrix(MATRIX_NUM_ROWS, MATRIX_NUM_COLS);

	for (int row = 0; row < MATRIX_NUM_ROWS; row++) {
		for (int column = 0; column < MATRIX_NUM_COLS; column++) {
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