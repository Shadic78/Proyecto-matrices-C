#pragma once
#include "UIMatrixSum.h"

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
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n utilizando.
		/// </summary>
		~FormStartMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  BtnHelloWorld;
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
			this->BtnHelloWorld->Click += gcnew System::EventHandler(this, &FormStartMenu::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->BtnHelloWorld);
			this->Name = L"StartMenu";
			this->Text = L"Start menu";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 FormMatrixSum ^ formMatrixSum = gcnew FormMatrixSum;
				 this->Hide();
				 formMatrixSum->ShowDialog();
				 this->Show();
	}
	};
}