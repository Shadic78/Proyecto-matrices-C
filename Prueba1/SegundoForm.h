#pragma once
#include <string>
#include <iostream>
#include "UIMatrixGenerator.h";

namespace Prueba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de SegundoForm
	/// </summary>
	public ref class SegundoForm : public System::Windows::Forms::Form
	{
	public:
		SegundoForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~SegundoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BtnGenerateMatrix;
	private: System::Windows::Forms::Button^  BtnReadMatrix;


	private: System::Windows::Forms::Label^  labelTextoLeido;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixA;

	private: System::Windows::Forms::TextBox^  TxtMatrixRows;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TxtMatrixCols;





	protected:

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnGenerateMatrix = (gcnew System::Windows::Forms::Button());
			this->BtnReadMatrix = (gcnew System::Windows::Forms::Button());
			this->labelTextoLeido = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrixA = (gcnew System::Windows::Forms::GroupBox());
			this->TxtMatrixRows = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixCols = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(208, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Generacion y lectura de matriz";
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(256, 55);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(126, 23);
			this->BtnGenerateMatrix->TabIndex = 1;
			this->BtnGenerateMatrix->Text = L"Generate Matrix";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &SegundoForm::BtnGenerar_Click);
			// 
			// BtnReadMatrix
			// 
			this->BtnReadMatrix->Location = System::Drawing::Point(413, 56);
			this->BtnReadMatrix->Name = L"BtnReadMatrix";
			this->BtnReadMatrix->Size = System::Drawing::Size(128, 23);
			this->BtnReadMatrix->TabIndex = 2;
			this->BtnReadMatrix->Text = L"Read Matrix";
			this->BtnReadMatrix->UseVisualStyleBackColor = true;
			this->BtnReadMatrix->Click += gcnew System::EventHandler(this, &SegundoForm::BtnLeerTextBox_Click);
			// 
			// labelTextoLeido
			// 
			this->labelTextoLeido->AutoSize = true;
			this->labelTextoLeido->Location = System::Drawing::Point(312, 106);
			this->labelTextoLeido->Name = L"labelTextoLeido";
			this->labelTextoLeido->Size = System::Drawing::Size(60, 13);
			this->labelTextoLeido->TabIndex = 3;
			this->labelTextoLeido->Text = L"Matriz leida";
			// 
			// ContainerMatrixA
			// 
			this->ContainerMatrixA->Location = System::Drawing::Point(32, 95);
			this->ContainerMatrixA->Name = L"ContainerMatrixA";
			this->ContainerMatrixA->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixA->TabIndex = 4;
			this->ContainerMatrixA->TabStop = false;
			this->ContainerMatrixA->Text = L"MatrixA";
			// 
			// TxtMatrixRows
			// 
			this->TxtMatrixRows->Location = System::Drawing::Point(72, 58);
			this->TxtMatrixRows->Name = L"TxtMatrixRows";
			this->TxtMatrixRows->Size = System::Drawing::Size(49, 20);
			this->TxtMatrixRows->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(29, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Rows:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(139, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Cols:";
			// 
			// TxtMatrixCols
			// 
			this->TxtMatrixCols->Location = System::Drawing::Point(175, 58);
			this->TxtMatrixCols->Name = L"TxtMatrixCols";
			this->TxtMatrixCols->Size = System::Drawing::Size(49, 20);
			this->TxtMatrixCols->TabIndex = 8;
			// 
			// SegundoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 327);
			this->Controls->Add(this->TxtMatrixCols);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TxtMatrixRows);
			this->Controls->Add(this->ContainerMatrixA);
			this->Controls->Add(this->labelTextoLeido);
			this->Controls->Add(this->BtnReadMatrix);
			this->Controls->Add(this->BtnGenerateMatrix);
			this->Controls->Add(this->label1);
			this->Name = L"SegundoForm";
			this->Text = L"SegundoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerar_Click(System::Object^  sender, System::EventArgs^  e) {
				 const int matrixNumRows = Convert::ToInt32(TxtMatrixRows->Text);
				 const int matrixNumCols = Convert::ToInt32(TxtMatrixCols->Text);

				 generateTextBoxMatrix(matrixNumRows, matrixNumCols, "matrixA", ContainerMatrixA);
	}

	private: System::Void BtnLeerTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 /* Obtener el texto de un TextBox
				 Control^ control = this->Controls->Find("TxtPrueba1", false)[0];
				 TextBox^ textBox = (TextBox^) control;
				 this->labelTextoLeido->Text = textBox->Text;*/

				 /*const int MAX_TEXT_BOX = 4;
				 int matriz[MAX_TEXT_BOX / 2][MAX_TEXT_BOX / 2];*/

				 /*for (int textBoxIndex = 0; textBoxIndex < MAX_TEXT_BOX; textBoxIndex++) {
					 Control^ control = ContainerMatrizA->Controls->Find("TxtPrueba" + textBoxIndex, false)[0];
					 TextBox^ textBox = (TextBox^)control;
					 String^ textoIngresado = textBox->Text;
					 int value = Convert::ToInt32(textBox->Text);

					 if (textBoxIndex < MAX_TEXT_BOX / 2) {
						 matriz[0][textBoxIndex] = value;
					 }
					 else {
						 matriz[1][textBoxIndex - 2] = value;
					 }
				 }*/

				 /*for (int fila = 0; fila < (MAX_TEXT_BOX / 2); fila++) {
					 for (int columna = 0; columna < (MAX_TEXT_BOX / 2); columna++) {
						 Control^ control = ContainerMatrizA->Controls->Find("TxtPrueba" + fila + columna, false)[0];
						 TextBox^ textBox = (TextBox^)control;
						 String^ textoIngresado = textBox->Text;
						 int value = Convert::ToInt32(textBox->Text);

						 matriz[fila][columna] = value;
					 }
				 }*/
										

				 // Imprimir la matriz
				 /*String^ output = "";
				 for (int fila = 0; fila < MAX_TEXT_BOX / 2; fila++) {
					 for (int columna = 0; columna < MAX_TEXT_BOX / 2; columna++) {
						 std::cout << matriz[fila][columna] << "     " << std::endl;
						 output += matriz[fila][columna] + "       ";
					 }
					 output += "\n";
				 }
				 this->labelTextoLeido->Text = output;*/

	}
};
}
