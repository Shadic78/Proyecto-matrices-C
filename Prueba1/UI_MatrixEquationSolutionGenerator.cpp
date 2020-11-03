#include "UI_MatrixEquationSolutionGenerator.h"

#define GAP_BETWEEN_COMPONENTS 5;
#define INITIAL_COORD_X GAP_BETWEEN_COMPONENTS;
#define INITIAL_COORD_Y 15;
#define LABEL_WIDTH 100
#define LABEL_HEIGHT 21

void UI_matrixEquationSolutionGenerator(t_vector solutionsVector, int numberOfUnknows, String^ identifier, GroupBox^ container) {

	container->Controls->Clear();

	int labelCoordX = INITIAL_COORD_X;
	int labelCoordY = INITIAL_COORD_Y;

	Label^  labelVariable;

	// Estructura: Variable "=" valor
	for (int vectorIndex = 0; vectorIndex < numberOfUnknows; vectorIndex++) {
		String^ labelText = identifier + (vectorIndex + 1) + " = " + solutionsVector[vectorIndex];

		labelVariable = (gcnew System::Windows::Forms::Label());
		labelVariable->AutoSize = true;
		labelVariable->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));
		labelVariable->Location = System::Drawing::Point(labelCoordX, labelCoordY);
		labelVariable->Size = System::Drawing::Size(LABEL_WIDTH, LABEL_HEIGHT);
		labelVariable->Text = labelText;
		container->Controls->Add(labelVariable);

		labelCoordY += LABEL_HEIGHT + GAP_BETWEEN_COMPONENTS;
	}

}