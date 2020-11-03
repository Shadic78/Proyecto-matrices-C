#pragma once
#include "Util_Matrix.h"
#include "Util_Vector.h"
#include "UI_MatrixReader.h"
#include "UI_MatrixEcuationSystemGenerator.h"
#include "UI_MatrixEquationSolutionGenerator.h"
#include "UI_ClearMatrixContainer.h"
#include "Alg_ResolveSystemEquation.h"

namespace Prueba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form_EcuationSystem
	/// </summary>
	public ref class Form_EcuationSystem : public System::Windows::Forms::Form
	{
	public:
		Form_EcuationSystem(void)
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
		~Form_EcuationSystem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  ContainerEquationSystem;
	protected:
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  BtnGenerateMatrix;
	private: System::Windows::Forms::TextBox^  TxtNumberOfUnknows;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BtnCalculate;
	private: System::Windows::Forms::GroupBox^  ContainerSolution;

	private: int numberOfUnknows;

	protected:


	protected:


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
			this->ContainerEquationSystem = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->BtnGenerateMatrix = (gcnew System::Windows::Forms::Button());
			this->TxtNumberOfUnknows = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnCalculate = (gcnew System::Windows::Forms::Button());
			this->ContainerSolution = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// ContainerEquationSystem
			// 
			this->ContainerEquationSystem->Location = System::Drawing::Point(38, 129);
			this->ContainerEquationSystem->Name = L"ContainerEquationSystem";
			this->ContainerEquationSystem->Size = System::Drawing::Size(590, 212);
			this->ContainerEquationSystem->TabIndex = 1;
			this->ContainerEquationSystem->TabStop = false;
			this->ContainerEquationSystem->Text = L"Ecuation system";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->BtnGenerateMatrix);
			this->groupBox3->Controls->Add(this->TxtNumberOfUnknows);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Location = System::Drawing::Point(38, 56);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(816, 55);
			this->groupBox3->TabIndex = 11;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"System size";
			// 
			// BtnGenerateMatrix
			// 
			this->BtnGenerateMatrix->Location = System::Drawing::Point(245, 18);
			this->BtnGenerateMatrix->Name = L"BtnGenerateMatrix";
			this->BtnGenerateMatrix->Size = System::Drawing::Size(100, 23);
			this->BtnGenerateMatrix->TabIndex = 4;
			this->BtnGenerateMatrix->Text = L"Generate system";
			this->BtnGenerateMatrix->UseVisualStyleBackColor = true;
			this->BtnGenerateMatrix->Click += gcnew System::EventHandler(this, &Form_EcuationSystem::BtnGenerateMatrix_Click);
			// 
			// TxtNumberOfUnknows
			// 
			this->TxtNumberOfUnknows->Location = System::Drawing::Point(125, 19);
			this->TxtNumberOfUnknows->Name = L"TxtNumberOfUnknows";
			this->TxtNumberOfUnknows->Size = System::Drawing::Size(100, 20);
			this->TxtNumberOfUnknows->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(108, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Number of unknows: ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(305, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Ecuation system solver";
			// 
			// BtnCalculate
			// 
			this->BtnCalculate->Location = System::Drawing::Point(397, 361);
			this->BtnCalculate->Name = L"BtnCalculate";
			this->BtnCalculate->Size = System::Drawing::Size(102, 29);
			this->BtnCalculate->TabIndex = 19;
			this->BtnCalculate->Text = L"Solve";
			this->BtnCalculate->UseVisualStyleBackColor = true;
			this->BtnCalculate->Click += gcnew System::EventHandler(this, &Form_EcuationSystem::BtnCalculate_Click);
			// 
			// ContainerSolution
			// 
			this->ContainerSolution->Location = System::Drawing::Point(654, 129);
			this->ContainerSolution->Name = L"ContainerSolution";
			this->ContainerSolution->Size = System::Drawing::Size(200, 212);
			this->ContainerSolution->TabIndex = 20;
			this->ContainerSolution->TabStop = false;
			this->ContainerSolution->Text = L"Solution";
			// 
			// Form_EcuationSystem
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(904, 412);
			this->Controls->Add(this->ContainerSolution);
			this->Controls->Add(this->BtnCalculate);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ContainerEquationSystem);
			this->Name = L"Form_EcuationSystem";
			this->Text = L"Ecuation system solver";
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerateMatrix_Click(System::Object^  sender, System::EventArgs^  e) {
				 numberOfUnknows = Convert::ToInt32(TxtNumberOfUnknows->Text);

				 UI_matrixEcuationSystemGenerator(numberOfUnknows, "X", ContainerEquationSystem);
				 UI_clearMatrixContainer(ContainerSolution);
	}
	private: System::Void BtnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
				 t_matrix equationsMatrix = UI_matrixReader(numberOfUnknows, numberOfUnknows + 1, "X", ContainerEquationSystem);

				 t_vector solution = resolveSystemEquation(equationsMatrix, numberOfUnknows, numberOfUnknows + 1);

				 UI_matrixEquationSolutionGenerator(solution, numberOfUnknows, "X", ContainerSolution);
	}
};
}
