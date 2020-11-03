#pragma once
#include "Util_Matrix.h"
#include "UI_MatrixGenerator.h"
#include "UI_MatrixFiller.h"
#include "UI_MatrixReader.h"
#include "Alg_MatrixTranspose.h"

namespace Prueba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form_MatrixTranspose
	/// </summary>
	public ref class Form_MatrixTranspose : public System::Windows::Forms::Form
	{
	public:
		Form_MatrixTranspose(void)
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
		~Form_MatrixTranspose()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  BtnGenerateMatrix;
	private: System::Windows::Forms::TextBox^  TxtMatrixCols;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  TxtMatrixRows;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  ContainerMatrix;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixResult;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  BtnCalculate;

	private: int matrixNumRows;
	private: int matrixNumCols;

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
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnGenerateMatrix = (gcnew System::Windows::Forms::Button());
			this->TxtMatrixCols = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TxtMatrixRows = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrixResult = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BtnCalculate = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(275, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(172, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Matrix transpose";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->BtnGenerateMatrix);
			this->groupBox3->Controls->Add(this->TxtMatrixCols);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->TxtMatrixRows);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(35, 59);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(689, 55);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Matrix dimension";
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(499, 18);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(100, 23);
			this->BtnGenerateMatrix->TabIndex = 4;
			this->BtnGenerateMatrix->Text = L"Generate matrix";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &Form_MatrixTranspose::BtnGenerateMatrix_Click);
			// 
			// TxtMatrixCols
			// 
			this->TxtMatrixCols->Location = System::Drawing::Point(337, 20);
			this->TxtMatrixCols->Name = L"TxtMatrixCols";
			this->TxtMatrixCols->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixCols->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(242, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 13);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Num of columns: ";
			// 
			// TxtMatrixRows
			// 
			this->TxtMatrixRows->Location = System::Drawing::Point(92, 20);
			this->TxtMatrixRows->Name = L"TxtMatrixRows";
			this->TxtMatrixRows->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixRows->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Num of rows:";
			// 
			// ContainerMatrix
			// 
			this->ContainerMatrix->Location = System::Drawing::Point(106, 133);
			this->ContainerMatrix->Name = L"ContainerMatrix";
			this->ContainerMatrix->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrix->TabIndex = 8;
			this->ContainerMatrix->TabStop = false;
			this->ContainerMatrix->Text = L"Matrix";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 214);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 31);
			this->label2->TabIndex = 9;
			this->label2->Text = L"A = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(397, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 31);
			this->label3->TabIndex = 11;
			this->label3->Text = L"A = ";
			// 
			// ContainerMatrixResult
			// 
			this->ContainerMatrixResult->Location = System::Drawing::Point(465, 133);
			this->ContainerMatrixResult->Name = L"ContainerMatrixResult";
			this->ContainerMatrixResult->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixResult->TabIndex = 10;
			this->ContainerMatrixResult->TabStop = false;
			this->ContainerMatrixResult->Text = L"Matrix result";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(417, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 24);
			this->label6->TabIndex = 12;
			this->label6->Text = L"t";
			// 
			// BtnCalculate
			// 
			this->BtnCalculate->Location = System::Drawing::Point(329, 328);
			this->BtnCalculate->Name = L"BtnCalculate";
			this->BtnCalculate->Size = System::Drawing::Size(102, 29);
			this->BtnCalculate->TabIndex = 13;
			this->BtnCalculate->Text = L"Calculate";
			this->BtnCalculate->UseVisualStyleBackColor = true;
			this->BtnCalculate->Click += gcnew System::EventHandler(this, &Form_MatrixTranspose::BtnCalculate_Click);
			// 
			// Form_MatrixTranspose
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 378);
			this->Controls->Add(this->BtnCalculate);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ContainerMatrixResult);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ContainerMatrix);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Name = L"Form_MatrixTranspose";
			this->Text = L"Matrix transpose";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerateMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
				 matrixNumRows = Convert::ToInt32(TxtMatrixRows->Text);
				 matrixNumCols = Convert::ToInt32(TxtMatrixCols->Text);

				 UI_matrixGenerator(matrixNumRows, matrixNumCols, "matrix", ContainerMatrix);
	}
	private: System::Void BtnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
				 t_matrix matrixToTransponse = UI_matrixReader(matrixNumRows, matrixNumCols, "matrix", ContainerMatrix);

				 t_matrix matrixResult = Alg_matrixTranspose(matrixToTransponse, matrixNumRows, matrixNumCols);

				 UI_matrixGenerator(matrixNumCols, matrixNumRows, "matrixResult", ContainerMatrixResult);
				 UI_matrixFiller(matrixResult, matrixNumCols, matrixNumRows, "matrixResult", ContainerMatrixResult);
	}
};
}
