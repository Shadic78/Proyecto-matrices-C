#pragma once
#include "Util_Matrix.h"
#include "UI_MatrixGenerator.h"
#include "UI_MatrixFiller.h"
#include "UI_MatrixReader.h"
#include "UI_ClearMatrixContainer.h"

namespace Prueba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form_MatrixDeterminant
	/// </summary>
	public ref class Form_MatrixDeterminant : public System::Windows::Forms::Form
	{
	public:
		Form_MatrixDeterminant(void)
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
		~Form_MatrixDeterminant()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  BtnGenerateMatrix;
	private: System::Windows::Forms::TextBox^  TxtMatrixDimension;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  ContainerMatrixResult;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  ContainerMatrix;
	private: System::Windows::Forms::Button^  BtnCalculate;

	private: int matrixDimension;

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
			this->TxtMatrixDimension = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrixResult = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrix = (gcnew System::Windows::Forms::GroupBox());
			this->BtnCalculate = (gcnew System::Windows::Forms::Button());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(274, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 25);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Matrix determinant";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->BtnGenerateMatrix);
			this->groupBox3->Controls->Add(this->TxtMatrixDimension);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(35, 64);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(689, 55);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Matrix dimension";
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(231, 18);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(100, 23);
			this->BtnGenerateMatrix->TabIndex = 4;
			this->BtnGenerateMatrix->Text = L"Generate matrix";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &Form_MatrixDeterminant::BtnGenerateMatrix_Click);
			// 
			// TxtMatrixDimension
			// 
			this->TxtMatrixDimension->Location = System::Drawing::Point(105, 20);
			this->TxtMatrixDimension->Name = L"TxtMatrixDimension";
			this->TxtMatrixDimension->Size = System::Drawing::Size(100, 20);
			this->TxtMatrixDimension->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Matrix dimension: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(388, 215);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 31);
			this->label3->TabIndex = 15;
			this->label3->Text = L"|A| = ";
			// 
			// ContainerMatrixResult
			// 
			this->ContainerMatrixResult->Location = System::Drawing::Point(465, 134);
			this->ContainerMatrixResult->Name = L"ContainerMatrixResult";
			this->ContainerMatrixResult->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrixResult->TabIndex = 14;
			this->ContainerMatrixResult->TabStop = false;
			this->ContainerMatrixResult->Text = L"Matrix result";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 31);
			this->label2->TabIndex = 13;
			this->label2->Text = L"A = ";
			// 
			// ContainerMatrix
			// 
			this->ContainerMatrix->Location = System::Drawing::Point(106, 134);
			this->ContainerMatrix->Name = L"ContainerMatrix";
			this->ContainerMatrix->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrix->TabIndex = 12;
			this->ContainerMatrix->TabStop = false;
			this->ContainerMatrix->Text = L"Matrix";
			// 
			// BtnCalculate
			// 
			this->BtnCalculate->Location = System::Drawing::Point(325, 328);
			this->BtnCalculate->Name = L"BtnCalculate";
			this->BtnCalculate->Size = System::Drawing::Size(102, 29);
			this->BtnCalculate->TabIndex = 14;
			this->BtnCalculate->Text = L"Calculate";
			this->BtnCalculate->UseVisualStyleBackColor = true;
			// 
			// Form_MatrixDeterminant
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(760, 378);
			this->Controls->Add(this->BtnCalculate);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->ContainerMatrixResult);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ContainerMatrix);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Name = L"Form_MatrixDeterminant";
			this->Text = L"Matrix determinant";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void BtnGenerateMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
				 matrixDimension = Convert::ToInt32(TxtMatrixDimension->Text);

				 UI_matrixGenerator(matrixDimension, matrixDimension, "matrix", ContainerMatrix);
				 UI_clearMatrixContainer(ContainerMatrixResult);
	}
};
}
