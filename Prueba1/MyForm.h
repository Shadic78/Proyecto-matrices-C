#pragma once
#include "SegundoForm.h"

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
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  BtnHelloWorld;
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
			this->BtnHelloWorld = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnHelloWorld
			// 
			this->BtnHelloWorld->Location = System::Drawing::Point(104, 116);
			this->BtnHelloWorld->Name = L"BtnHelloWorld";
			this->BtnHelloWorld->Size = System::Drawing::Size(75, 23);
			this->BtnHelloWorld->TabIndex = 1;
			this->BtnHelloWorld->Text = L"Presioname";
			this->BtnHelloWorld->UseVisualStyleBackColor = true;
			this->BtnHelloWorld->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->BtnHelloWorld);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //BtnHelloWorld->Visible = false;
				 SegundoForm ^ form2 = gcnew SegundoForm;
				 this->Hide();
				 form2->ShowDialog();
				 this->Show();
	}
	};
}
