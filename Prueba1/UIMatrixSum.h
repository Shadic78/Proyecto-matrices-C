#pragma once
#include <string>
#include <iostream>
#include "UTL_Matrix.h"
#include "UIMatrixGenerator.h"
#include "UIMatrixReader.h"
#include "UIMatrixFiller.h"
#include "Alg_matrixSum.h"

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
	public ref class FormMatrixSum : public System::Windows::Forms::Form
	{
	public:
		FormMatrixSum(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~FormMatrixSum()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BtnGenerateMatrix;
	private: System::Windows::Forms::Button^  BtnCalculate;




	private: System::Windows::Forms::GroupBox^  ContainerMatrixA;

	private: System::Windows::Forms::TextBox^  TxtMatrixRows;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TxtMatrixCols;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixB;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixResult;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;







	protected:

	private:
		/// <summary>
		/// Variable del dise�ador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido del m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnGenerateMatrix = (gcnew System::Windows::Forms::Button());
			this->BtnCalculate = (gcnew System::Windows::Forms::Button());
			this->ContainerMatrixA = (gcnew System::Windows::Forms::GroupBox());
			this->TxtMatrixRows = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixCols = (gcnew System::Windows::Forms::TextBox());
			this->ContainerMatrixB = (gcnew System::Windows::Forms::GroupBox());
			this->ContainerMatrixResult = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(393, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Suma de matrices";
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(256, 55);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(126, 23);
			this->BtnGenerateMatrix->TabIndex = 1;
			this->BtnGenerateMatrix->Text = L"Generate Matrix";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &FormMatrixSum::BtnGenerar_Click);
			// 
			// BtnCalculate
			// 
			this->BtnCalculate->Location = System::Drawing::Point(413, 56);
			this->BtnCalculate->Name = L"BtnCalculate";
			this->BtnCalculate->Size = System::Drawing::Size(128, 23);
			this->BtnCalculate->TabIndex = 2;
			this->BtnCalculate->Text = L"Calculate";
			this->BtnCalculate->UseVisualStyleBackColor = true;
			this->BtnCalculate->Click += gcnew System::EventHandler(this, &FormMatrixSum::BtnLeerTextBox_Click);
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
			// ContainerMatrixB
			// 
			this->ContainerMatrixB->Location = System::Drawing::Point(334, 95);
			this->ContainerMatrixB->Name = L"ContainerMatrixB";
			this->ContainerMatrixB->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixB->TabIndex = 9;
			this->ContainerMatrixB->TabStop = false;
			this->ContainerMatrixB->Text = L"MatrixB";
			// 
			// ContainerMatrixResult
			// 
			this->ContainerMatrixResult->Location = System::Drawing::Point(636, 95);
			this->ContainerMatrixResult->Name = L"ContainerMatrixResult";
			this->ContainerMatrixResult->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixResult->TabIndex = 10;
			this->ContainerMatrixResult->TabStop = false;
			this->ContainerMatrixResult->Text = L"Result";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(600, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 31);
			this->label5->TabIndex = 12;
			this->label5->Text = L"=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(298, 167);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 31);
			this->label4->TabIndex = 11;
			this->label4->Text = L"+";
			// 
			// SegundoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 300);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ContainerMatrixResult);
			this->Controls->Add(this->ContainerMatrixB);
			this->Controls->Add(this->TxtMatrixCols);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->TxtMatrixRows);
			this->Controls->Add(this->ContainerMatrixA);
			this->Controls->Add(this->BtnCalculate);
			this->Controls->Add(this->BtnGenerateMatrix);
			this->Controls->Add(this->label1);
			this->Name = L"SegundoForm";
			this->Text = L"Matrix sum";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerar_Click(System::Object^  sender, System::EventArgs^  e) {
				 const int matrixNumRows = Convert::ToInt32(TxtMatrixRows->Text);
				 const int matrixNumCols = Convert::ToInt32(TxtMatrixCols->Text);

				 generateTextBoxMatrix(matrixNumRows, matrixNumCols, "matrixA", ContainerMatrixA);
				 generateTextBoxMatrix(matrixNumRows, matrixNumCols, "matrixB", ContainerMatrixB);
				 generateTextBoxMatrix(matrixNumRows, matrixNumCols, "matrixResult", ContainerMatrixResult);
	}

	private: System::Void BtnLeerTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 const int matrixNumRows = Convert::ToInt32(TxtMatrixRows->Text);
				 const int matrixNumCols = Convert::ToInt32(TxtMatrixCols->Text);

				 // Leer las dos matrices de entrada
				 t_matrix matrixA = readMatrixFromUI(matrixNumRows, matrixNumCols, "matrixA", ContainerMatrixA);
				 t_matrix matrixB = readMatrixFromUI(matrixNumRows, matrixNumCols, "matrixB", ContainerMatrixB);

				 // Hacer las operaciones
				 t_matrix matrixResult = matrixSum(matrixA, matrixB, matrixNumRows, matrixNumCols);

				 // Rellenar la matrix de resultado
				 fillTextBoxMatrix(matrixNumRows, matrixNumCols, "matrixResult", ContainerMatrixResult, matrixResult);
	}

};
}
