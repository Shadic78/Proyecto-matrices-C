#include "UI_MatrixEcuationSystemGenerator.h"

#define GAP_BETWEEN_COMPONENTS 5;
#define INITIAL_COORD_X GAP_BETWEEN_COMPONENTS;
#define INITIAL_COORD_Y 15;
#define LABEL_WIDTH 22
#define LABEL_HEIGHT 16
#define TXT_INPUT_WIDTH 50
#define TXT_INPUT_HEIGHT 20

void UI_matrixEcuationSystemGenerator(int unknowsNumber, String^ identifier, GroupBox^ container) {
	int matrixNumColumns = unknowsNumber;
	int matrixNumRows = unknowsNumber;

	container->Controls->Clear();

	int txtInputCoordX = INITIAL_COORD_X;
	int txtInputCoordY = INITIAL_COORD_Y;

	int labelCoordX = txtInputCoordX + TXT_INPUT_WIDTH + GAP_BETWEEN_COMPONENTS;
	int labelCoordY = txtInputCoordY;

	const int TXT_INPUT_AND_VARIABLE_LABEL_WIDTH = TXT_INPUT_WIDTH + LABEL_WIDTH;

	Label^  labelVariable;
	Label^  labelOperator;
	Label^  labelEquals;
	TextBox^  txtInput;

	// El orden es: (coeficiente) variable "+" ... "=" (termino independiente)
	for (int row = 0; row < matrixNumRows; row++) {
		for (int column = 0; column < matrixNumColumns; column++) {
			String^ txtIdentifier = identifier + row + column;
			String^ variableLabel = "x" + (column + 1);

			// Coeficiente
			txtInput = (gcnew System::Windows::Forms::TextBox());
			txtInput->Location = System::Drawing::Point(txtInputCoordX, txtInputCoordY);
			txtInput->Name = txtIdentifier;
			txtInput->Size = System::Drawing::Size(TXT_INPUT_WIDTH, TXT_INPUT_HEIGHT);
			txtInput->Text = L"";
			txtInput->Multiline = true;
			container->Controls->Add(txtInput);

			// Variable
			labelVariable = (gcnew System::Windows::Forms::Label());
			labelVariable->AutoSize = true;
			labelVariable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			labelVariable->Location = System::Drawing::Point(labelCoordX, labelCoordY);
			labelVariable->Size = System::Drawing::Size(LABEL_WIDTH, LABEL_HEIGHT);
			labelVariable->Text = variableLabel;
			container->Controls->Add(labelVariable);

			if (column != matrixNumColumns - 1) {
				// Operador "+"
				labelOperator = (gcnew System::Windows::Forms::Label());
				labelOperator->AutoSize = true;
				labelOperator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				labelOperator->Location = System::Drawing::Point(labelCoordX + LABEL_WIDTH, labelCoordY);
				labelOperator->Size = System::Drawing::Size(LABEL_WIDTH, LABEL_HEIGHT);
				labelOperator->Text = L"+";
				container->Controls->Add(labelOperator);
			}
			else {
				// Operador "=" y la caja de texo para el termino independiente
				txtInputCoordX += TXT_INPUT_AND_VARIABLE_LABEL_WIDTH + LABEL_WIDTH + 3;
				txtIdentifier = identifier + row + (column + 1);

				labelEquals = (gcnew System::Windows::Forms::Label());
				labelEquals->AutoSize = true;
				labelEquals->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				labelEquals->Location = System::Drawing::Point(labelCoordX + LABEL_WIDTH, labelCoordY);
				labelEquals->Size = System::Drawing::Size(LABEL_WIDTH, LABEL_HEIGHT);
				labelEquals->Text = L"=";
				container->Controls->Add(labelEquals);

				txtInput = (gcnew System::Windows::Forms::TextBox());
				txtInput->Location = System::Drawing::Point(txtInputCoordX, txtInputCoordY);
				txtInput->Name = txtIdentifier;
				txtInput->Size = System::Drawing::Size(TXT_INPUT_WIDTH, TXT_INPUT_HEIGHT);
				txtInput->Text = L"";
				txtInput->Multiline = true;
				container->Controls->Add(txtInput);
			}

			txtInputCoordX += TXT_INPUT_AND_VARIABLE_LABEL_WIDTH + LABEL_WIDTH + 3;
			labelCoordX = txtInputCoordX + TXT_INPUT_WIDTH;
		}
		txtInputCoordX = INITIAL_COORD_X;
		txtInputCoordY += TXT_INPUT_HEIGHT + GAP_BETWEEN_COMPONENTS;

		labelCoordX = txtInputCoordX + TXT_INPUT_WIDTH + GAP_BETWEEN_COMPONENTS;
		labelCoordY = txtInputCoordY;
	}


}