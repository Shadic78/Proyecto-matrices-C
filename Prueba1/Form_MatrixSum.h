#pragma once
#include <string>
#include <iostream>
#include "Util_Matrix.h"
#include "UI_MatrixGenerator.h"
#include "UI_MatrixReader.h"
#include "UI_MatrixFiller.h"
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
	public ref class Form_MatrixSum : public System::Windows::Forms::Form
	{
	public:
		Form_MatrixSum(void)
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
		~Form_MatrixSum()
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
	private: System::Windows::Forms::GroupBox^  groupBox1;







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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(387, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Matrix sum";
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(604, 20);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(100, 23);
			this->BtnGenerateMatrix->TabIndex = 1;
			this->BtnGenerateMatrix->Text = L"Generate Matrix";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &Form_MatrixSum::BtnGenerar_Click);
			// 
			// BtnCalculate
			// 
			this->BtnCalculate->Location = System::Drawing::Point(404, 328);
			this->BtnCalculate->Name = L"BtnCalculate";
			this->BtnCalculate->Size = System::Drawing::Size(102, 29);
			this->BtnCalculate->TabIndex = 2;
			this->BtnCalculate->Text = L"Calculate";
			this->BtnCalculate->UseVisualStyleBackColor = true;
			this->BtnCalculate->Click += gcnew System::EventHandler(this, &Form_MatrixSum::BtnLeerTextBox_Click);
			// 
			// ContainerMatrixA
			// 
			this->ContainerMatrixA->Location = System::Drawing::Point(32, 127);
			this->ContainerMatrixA->Name = L"ContainerMatrixA";
			this->ContainerMatrixA->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixA->TabIndex = 4;
			this->ContainerMatrixA->TabStop = false;
			this->ContainerMatrixA->Text = L"MatrixA";
			// 
			// TxtMatrixRows
			// 
			this->TxtMatrixRows->Location = System::Drawing::Point(95, 20);
			this->TxtMatrixRows->Name = L"TxtMatrixRows";
			this->TxtMatrixRows->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixRows->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Num of rows:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(300, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Num of cols:";
			// 
			// TxtMatrixCols
			// 
			this->TxtMatrixCols->Location = System::Drawing::Point(372, 19);
			this->TxtMatrixCols->Name = L"TxtMatrixCols";
			this->TxtMatrixCols->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixCols->TabIndex = 8;
			// 
			// ContainerMatrixB
			// 
			this->ContainerMatrixB->Location = System::Drawing::Point(334, 127);
			this->ContainerMatrixB->Name = L"ContainerMatrixB";
			this->ContainerMatrixB->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixB->TabIndex = 9;
			this->ContainerMatrixB->TabStop = false;
			this->ContainerMatrixB->Text = L"MatrixB";
			// 
			// ContainerMatrixResult
			// 
			this->ContainerMatrixResult->Location = System::Drawing::Point(636, 127);
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
			this->label5->Location = System::Drawing::Point(600, 199);
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
			this->label4->Location = System::Drawing::Point(298, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 31);
			this->label4->TabIndex = 11;
			this->label4->Text = L"+";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->TxtMatrixRows);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->TxtMatrixCols);
			this->groupBox1->Controls->Add(this->BtnGenerateMatrix);
			this->groupBox1->Location = System::Drawing::Point(32, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(864, 55);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Matrix dimension";
			// 
			// Form_MatrixSum
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 385);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ContainerMatrixResult);
			this->Controls->Add(this->ContainerMatrixB);
			this->Controls->Add(this->BtnCalculate);
			this->Controls->Add(this->ContainerMatrixA);
			this->Controls->Add(this->label1);
			this->Name = L"Form_MatrixSum";
			this->Text = L"Matrix sum";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerar_Click(System::Object^  sender, System::EventArgs^  e) {
				 const int matrixNumRows = Convert::ToInt32(TxtMatrixRows->Text);
				 const int matrixNumCols = Convert::ToInt32(TxtMatrixCols->Text);

				 UI_matrixGenerator(matrixNumRows, matrixNumCols, "matrixA", ContainerMatrixA);
				 UI_matrixGenerator(matrixNumRows, matrixNumCols, "matrixB", ContainerMatrixB);
				 UI_matrixGenerator(matrixNumRows, matrixNumCols, "matrixResult", ContainerMatrixResult);
	}

	private: System::Void BtnLeerTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 const int matrixNumRows = Convert::ToInt32(TxtMatrixRows->Text);
				 const int matrixNumCols = Convert::ToInt32(TxtMatrixCols->Text);

				 t_matrix matrixA = UI_matrixReader(matrixNumRows, matrixNumCols, "matrixA", ContainerMatrixA);
				 t_matrix matrixB = UI_matrixReader(matrixNumRows, matrixNumCols, "matrixB", ContainerMatrixB);

				 t_matrix matrixResult = Alg_matrixSum(matrixA, matrixB, matrixNumRows, matrixNumCols);

				 UI_matrixFiller(matrixResult, matrixNumRows, matrixNumCols, "matrixResult", ContainerMatrixResult);
	}

};
}
