#pragma once
#include "Form_MatrixSum.h"
#include "Form_MatrixScalar.h"
#include "Form_MatrixMultiplication.h"
#include "Form_MatrixTranspose.h"
#include "Form_MatrixInverse.h"

namespace Prueba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class FormStartMenu : public System::Windows::Forms::Form
	{
	public:
		FormStartMenu(void)
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
		~FormStartMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  BtnSum;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  BtnScalar;
	private: System::Windows::Forms::Button^  BtnMatrixMult;
	private: System::Windows::Forms::Button^  BtnTranspose;
	private: System::Windows::Forms::Button^  BtnInverse;
	private: System::Windows::Forms::Button^  BtnEquations;
	private: System::Windows::Forms::Button^  BtnDeterminant;


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
			this->BtnSum = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->BtnScalar = (gcnew System::Windows::Forms::Button());
			this->BtnMatrixMult = (gcnew System::Windows::Forms::Button());
			this->BtnTranspose = (gcnew System::Windows::Forms::Button());
			this->BtnInverse = (gcnew System::Windows::Forms::Button());
			this->BtnEquations = (gcnew System::Windows::Forms::Button());
			this->BtnDeterminant = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnSum
			// 
			this->BtnSum->Location = System::Drawing::Point(23, 85);
			this->BtnSum->Name = L"BtnSum";
			this->BtnSum->Size = System::Drawing::Size(103, 44);
			this->BtnSum->TabIndex = 1;
			this->BtnSum->Text = L"Matrix sum";
			this->BtnSum->UseVisualStyleBackColor = true;
			this->BtnSum->Click += gcnew System::EventHandler(this, &FormStartMenu::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(138, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Matrix operations";
			// 
			// BtnScalar
			// 
			this->BtnScalar->Location = System::Drawing::Point(172, 85);
			this->BtnScalar->Name = L"BtnScalar";
			this->BtnScalar->Size = System::Drawing::Size(103, 44);
			this->BtnScalar->TabIndex = 3;
			this->BtnScalar->Text = L"Matrix scalar";
			this->BtnScalar->UseVisualStyleBackColor = true;
			this->BtnScalar->Click += gcnew System::EventHandler(this, &FormStartMenu::BtnScalar_Click);
			// 
			// BtnMatrixMult
			// 
			this->BtnMatrixMult->Location = System::Drawing::Point(321, 85);
			this->BtnMatrixMult->Name = L"BtnMatrixMult";
			this->BtnMatrixMult->Size = System::Drawing::Size(103, 44);
			this->BtnMatrixMult->TabIndex = 4;
			this->BtnMatrixMult->Text = L"Matrix multiplication";
			this->BtnMatrixMult->UseVisualStyleBackColor = true;
			this->BtnMatrixMult->Click += gcnew System::EventHandler(this, &FormStartMenu::BtnMatrixMult_Click);
			// 
			// BtnTranspose
			// 
			this->BtnTranspose->Location = System::Drawing::Point(23, 155);
			this->BtnTranspose->Name = L"BtnTranspose";
			this->BtnTranspose->Size = System::Drawing::Size(103, 44);
			this->BtnTranspose->TabIndex = 5;
			this->BtnTranspose->Text = L"Matrix transpose";
			this->BtnTranspose->UseVisualStyleBackColor = true;
			this->BtnTranspose->Click += gcnew System::EventHandler(this, &FormStartMenu::BtnTranspose_Click);
			// 
			// BtnInverse
			// 
			this->BtnInverse->Location = System::Drawing::Point(172, 155);
			this->BtnInverse->Name = L"BtnInverse";
			this->BtnInverse->Size = System::Drawing::Size(103, 44);
			this->BtnInverse->TabIndex = 6;
			this->BtnInverse->Text = L"Matrix inverse";
			this->BtnInverse->UseVisualStyleBackColor = true;
			this->BtnInverse->Click += gcnew System::EventHandler(this, &FormStartMenu::BtnInverse_Click);
			// 
			// BtnEquations
			// 
			this->BtnEquations->Location = System::Drawing::Point(321, 155);
			this->BtnEquations->Name = L"BtnEquations";
			this->BtnEquations->Size = System::Drawing::Size(103, 44);
			this->BtnEquations->TabIndex = 7;
			this->BtnEquations->Text = L"Matrix sistem of equations";
			this->BtnEquations->UseVisualStyleBackColor = true;
			// 
			// BtnDeterminant
			// 
			this->BtnDeterminant->Location = System::Drawing::Point(172, 225);
			this->BtnDeterminant->Name = L"BtnDeterminant";
			this->BtnDeterminant->Size = System::Drawing::Size(103, 44);
			this->BtnDeterminant->TabIndex = 8;
			this->BtnDeterminant->Text = L"Matrix determinant";
			this->BtnDeterminant->UseVisualStyleBackColor = true;
			// 
			// FormStartMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 296);
			this->Controls->Add(this->BtnDeterminant);
			this->Controls->Add(this->BtnEquations);
			this->Controls->Add(this->BtnInverse);
			this->Controls->Add(this->BtnTranspose);
			this->Controls->Add(this->BtnMatrixMult);
			this->Controls->Add(this->BtnScalar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BtnSum);
			this->Name = L"FormStartMenu";
			this->Text = L"Start menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form_MatrixSum^ formMatrixSum = gcnew Form_MatrixSum;
				 this->Hide();
				 formMatrixSum->ShowDialog();
				 this->Show();
	}
	private: System::Void BtnScalar_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form_MatrixScalar^ formMatrixScalar = gcnew Form_MatrixScalar;
				 this->Hide();
				 formMatrixScalar->ShowDialog();
				 this->Show();
	}
	private: System::Void BtnMatrixMult_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form_MatrixMultiplication^ formMatrixMultiplication = gcnew Form_MatrixMultiplication;
				 this->Hide();
				 formMatrixMultiplication->ShowDialog();
				 this->Show();
	}
	private: System::Void BtnTranspose_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form_MatrixTranspose^ formMatrixTranspose = gcnew Form_MatrixTranspose;
				 this->Hide();
				 formMatrixTranspose->ShowDialog();
				 this->Show();
	}
	private: System::Void BtnInverse_Click(System::Object^  sender, System::EventArgs^  e) {
				 Form_MatrixInverse^ formMatrixInverse = gcnew Form_MatrixInverse;
				 this->Hide();
				 formMatrixInverse->ShowDialog();
				 this->Show();
	}
};
}
