#include "UIMatrixGenerator.h"

#define GAP_BETWEEN_COMPONENTS 5;
#define INITIAL_COORD_X GAP_BETWEEN_COMPONENTS;
#define INITIAL_COORD_Y 15;

void generateTextBoxMatrix(const int MATRIX_NUM_ROWS, const int MATRIX_NUM_COLS, String^ identifier, GroupBox^ container) {

	const int GAPS_TOTAL_WIDTH = (MATRIX_NUM_COLS + 1) * GAP_BETWEEN_COMPONENTS;
	const int GAPS_TOTAL_HEIGHT = (MATRIX_NUM_ROWS + 1) * GAP_BETWEEN_COMPONENTS;

	const int AVAILABLE_CONTAINER_WIDTH = container->Width - GAPS_TOTAL_WIDTH;
	const int AVAILABLE_CONTAINER_HEIGHT = container->Height - GAPS_TOTAL_HEIGHT - INITIAL_COORD_Y;

	const int TXT_INPUT_WIDTH = AVAILABLE_CONTAINER_WIDTH / MATRIX_NUM_COLS;
	const int TXT_INPUT_HEIGHT = AVAILABLE_CONTAINER_HEIGHT / MATRIX_NUM_ROWS;

	int txtInputCoordX = INITIAL_COORD_X;
	int txtInputCoordY = INITIAL_COORD_Y;

	TextBox^  txtInput;

	container->Controls->Clear();

	for (int row = 0; row < MATRIX_NUM_ROWS; row++) {
		for (int column = 0; column < MATRIX_NUM_COLS; column++) {
			String^ txtIdentifier = identifier + row + column;

			txtInput = (gcnew System::Windows::Forms::TextBox());
			txtInput->Location = System::Drawing::Point(txtInputCoordX, txtInputCoordY);
			txtInput->Name = txtIdentifier;
			txtInput->Size = System::Drawing::Size(TXT_INPUT_WIDTH, TXT_INPUT_HEIGHT);
			txtInput->Text = L"";
			txtInput->Multiline = true;
			container->Controls->Add(txtInput);

			txtInputCoordX += TXT_INPUT_WIDTH + GAP_BETWEEN_COMPONENTS;
		}
		txtInputCoordX = INITIAL_COORD_X;
		txtInputCoordY += TXT_INPUT_HEIGHT + GAP_BETWEEN_COMPONENTS;
	}

}