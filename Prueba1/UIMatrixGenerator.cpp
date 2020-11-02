#include "UIMatrixGenerator.h"

#define GAP_BETWEEN_COMPONENTS 5;
#define INITIAL_COORD_X GAP_BETWEEN_COMPONENTS;
#define INITIAL_COORD_Y 15;

void generateTextBoxMatrix(int matrixNumRows, int matrixNumColumns, String^ identifier, GroupBox^ container) {

	container->Controls->Clear();

	const int GAPS_TOTAL_WIDTH = (matrixNumColumns + 1) * GAP_BETWEEN_COMPONENTS;
	const int GAPS_TOTAL_HEIGHT = (matrixNumRows + 1) * GAP_BETWEEN_COMPONENTS;

	const int AVAILABLE_CONTAINER_WIDTH = container->Width - GAPS_TOTAL_WIDTH;
	const int AVAILABLE_CONTAINER_HEIGHT = container->Height - GAPS_TOTAL_HEIGHT - INITIAL_COORD_Y;

	const int TXT_INPUT_WIDTH = AVAILABLE_CONTAINER_WIDTH / matrixNumColumns;
	const int TXT_INPUT_HEIGHT = AVAILABLE_CONTAINER_HEIGHT / matrixNumRows;

	int txtInputCoordX = INITIAL_COORD_X;
	int txtInputCoordY = INITIAL_COORD_Y;

	TextBox^  txtInput;

	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumColumns; column++) {
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