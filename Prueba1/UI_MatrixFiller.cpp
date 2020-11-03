#include "UI_MatrixFiller.h"

void UI_matrixFiller(t_matrix matrix, int matrixNumRows, int matrixNumColumns, String^ identifier, GroupBox^ container) {

	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumColumns; column++) {
			String^ txtIdentifier = identifier + row + column;
			Control^ control = container->Controls->Find(txtIdentifier, false)[0];
			TextBox^ textBox = (TextBox^)control;

			String^ matrixData = matrix[row][column] + "";
			textBox->Text = matrixData;
		}
	}

}