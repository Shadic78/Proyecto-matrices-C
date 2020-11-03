#pragma once
#include "Util_Matrix.h"
#include "UI_MatrixGenerator.h"
#include "UI_MatrixReader.h"
#include "UI_MatrixFiller.h"
#include "UI_ClearMatrixContainer.h"
#include "Alg_MatrixMultiplication.h"


namespace Prueba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form_MatrixMultiplication
	/// </summary>
	public ref class Form_MatrixMultiplication : public System::Windows::Forms::Form
	{
	public:
		Form_MatrixMultiplication(void)
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
		~Form_MatrixMultiplication()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  TxtMatrixARows;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  TxtMatrixACols;

	private: System::Windows::Forms::Button^  BtnGenerateMatrix;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixResult;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixB;
	private: System::Windows::Forms::Button^  BtnCalculate;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixA;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  TxtMatrixBRows;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  TxtMatrixBCols;

	private: int matrixANumRows;
	private: int matrixANumCols;
	private: int matrixBNumRows;
	private: int matrixBNumCols;
	private: int matrixResultNumRows;
	private: int matrixResultNumCols;
	private: System::Windows::Forms::Label^  LbMatrixGenerationError;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixARows = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixACols = (gcnew System::Windows::Forms::TextBox());
			this->BtnGenerateMatrix = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrixResult = (gcnew System::Windows::Forms::GroupBox());
			this->ContainerMatrixB = (gcnew System::Windows::Forms::GroupBox());
			this->BtnCalculate = (gcnew System::Windows::Forms::Button());
			this->ContainerMatrixA = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixBRows = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixBCols = (gcnew System::Windows::Forms::TextBox());
			this->LbMatrixGenerationError = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->TxtMatrixARows);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->TxtMatrixACols);
			this->groupBox1->Location = System::Drawing::Point(33, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(408, 55);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Matrix A dimension";
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
			// TxtMatrixARows
			// 
			this->TxtMatrixARows->Location = System::Drawing::Point(95, 20);
			this->TxtMatrixARows->Name = L"TxtMatrixARows";
			this->TxtMatrixARows->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixARows->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(213, 24);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(66, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Num of cols:";
			// 
			// TxtMatrixACols
			// 
			this->TxtMatrixACols->Location = System::Drawing::Point(285, 19);
			this->TxtMatrixACols->Name = L"TxtMatrixACols";
			this->TxtMatrixACols->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixACols->TabIndex = 8;
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(407, 125);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(100, 33);
			this->BtnGenerateMatrix->TabIndex = 1;
			this->BtnGenerateMatrix->Text = L"Generate Matrix";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &Form_MatrixMultiplication::BtnGenerateMatrix_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(603, 236);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 31);
			this->label5->TabIndex = 20;
			this->label5->Text = L"=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(301, 236);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 31);
			this->label4->TabIndex = 19;
			this->label4->Text = L"*";
			// 
			// ContainerMatrixResult
			// 
			this->ContainerMatrixResult->Location = System::Drawing::Point(639, 164);
			this->ContainerMatrixResult->Name = L"ContainerMatrixResult";
			this->ContainerMatrixResult->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixResult->TabIndex = 18;
			this->ContainerMatrixResult->TabStop = false;
			this->ContainerMatrixResult->Text = L"Result";
			// 
			// ContainerMatrixB
			// 
			this->ContainerMatrixB->Location = System::Drawing::Point(337, 164);
			this->ContainerMatrixB->Name = L"ContainerMatrixB";
			this->ContainerMatrixB->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixB->TabIndex = 17;
			this->ContainerMatrixB->TabStop = false;
			this->ContainerMatrixB->Text = L"MatrixB";
			// 
			// BtnCalculate
			// 
			this->BtnCalculate->Location = System::Drawing::Point(407, 365);
			this->BtnCalculate->Name = L"BtnCalculate";
			this->BtnCalculate->Size = System::Drawing::Size(102, 29);
			this->BtnCalculate->TabIndex = 15;
			this->BtnCalculate->Text = L"Calculate";
			this->BtnCalculate->UseVisualStyleBackColor = true;
			this->BtnCalculate->Click += gcnew System::EventHandler(this, &Form_MatrixMultiplication::BtnCalculate_Click);
			// 
			// ContainerMatrixA
			// 
			this->ContainerMatrixA->Location = System::Drawing::Point(35, 164);
			this->ContainerMatrixA->Name = L"ContainerMatrixA";
			this->ContainerMatrixA->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixA->TabIndex = 16;
			this->ContainerMatrixA->TabStop = false;
			this->ContainerMatrixA->Text = L"MatrixA";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(359, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 25);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Matrix multiplication";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->TxtMatrixBRows);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->TxtMatrixBCols);
			this->groupBox2->Location = System::Drawing::Point(472, 64);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(425, 55);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Matrix B dimension";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(20, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(69, 13);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Num of rows:";
			// 
			// TxtMatrixBRows
			// 
			this->TxtMatrixBRows->Location = System::Drawing::Point(95, 20);
			this->TxtMatrixBRows->Name = L"TxtMatrixBRows";
			this->TxtMatrixBRows->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixBRows->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(213, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(66, 13);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Num of cols:";
			// 
			// TxtMatrixBCols
			// 
			this->TxtMatrixBCols->Location = System::Drawing::Point(285, 19);
			this->TxtMatrixBCols->Name = L"TxtMatrixBCols";
			this->TxtMatrixBCols->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixBCols->TabIndex = 8;
			// 
			// LbMatrixGenerationError
			// 
			this->LbMatrixGenerationError->AutoSize = true;
			this->LbMatrixGenerationError->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LbMatrixGenerationError->ForeColor = System::Drawing::Color::Red;
			this->LbMatrixGenerationError->Location = System::Drawing::Point(513, 130);
			this->LbMatrixGenerationError->Name = L"LbMatrixGenerationError";
			this->LbMatrixGenerationError->Size = System::Drawing::Size(57, 20);
			this->LbMatrixGenerationError->TabIndex = 22;
			this->LbMatrixGenerationError->Text = L"            ";
			// 
			// Form_MatrixMultiplication
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(923, 422);
			this->Controls->Add(this->LbMatrixGenerationError);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->ContainerMatrixResult);
			this->Controls->Add(this->BtnGenerateMatrix);
			this->Controls->Add(this->ContainerMatrixB);
			this->Controls->Add(this->BtnCalculate);
			this->Controls->Add(this->ContainerMatrixA);
			this->Controls->Add(this->label1);
			this->Name = L"Form_MatrixMultiplication";
			this->Text = L"Matrix multiplication";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerateMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
				 matrixANumRows = Convert::ToInt32(TxtMatrixARows->Text);
				 matrixANumCols = Convert::ToInt32(TxtMatrixACols->Text);

				 matrixBNumRows = Convert::ToInt32(TxtMatrixBRows->Text);
				 matrixBNumCols = Convert::ToInt32(TxtMatrixBCols->Text);

				 if (matrixANumCols == matrixBNumRows) {
					 LbMatrixGenerationError->Text = "";

					 matrixResultNumRows = matrixANumRows;
					 matrixResultNumCols = matrixBNumCols;

					 UI_matrixGenerator(matrixANumRows, matrixANumCols, "matrixA", ContainerMatrixA);
					 UI_matrixGenerator(matrixBNumRows, matrixBNumCols, "matrixB", ContainerMatrixB);
					 UI_clearMatrixContainer(ContainerMatrixResult);
				 }
				 else {
					 LbMatrixGenerationError->Text = "MatrixA num of cols isn´t equal to MatrixB num of rows";
				 }
	}
	private: System::Void BtnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
				 t_matrix matrixA = UI_matrixReader(matrixANumRows, matrixANumCols, "matrixA", ContainerMatrixA);
				 t_matrix matrixB = UI_matrixReader(matrixBNumRows, matrixBNumCols, "matrixB", ContainerMatrixB);

				 t_matrix matrixResult = Alg_matrixMultiplication(matrixA, matrixB, matrixANumCols, matrixResultNumRows, matrixResultNumCols);

				 UI_matrixGenerator(matrixResultNumRows, matrixResultNumCols, "matrixResult", ContainerMatrixResult);
				 UI_matrixFiller(matrixResult, matrixResultNumRows, matrixResultNumCols, "matrixResult", ContainerMatrixResult);
	}
};
}
