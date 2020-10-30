#pragma once
#include <string>
#include <iostream>

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
	private: System::Windows::Forms::Button^  BtnGenerar;
	private: System::Windows::Forms::Button^  BtnLeerTextBox;
	private: System::Windows::Forms::Label^  labelTextoLeido;
	private: System::Windows::Forms::GroupBox^  ContainerMatrizA;
	private: System::Windows::Forms::TextBox^  textBox1;




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
			this->BtnGenerar = (gcnew System::Windows::Forms::Button());
			this->BtnLeerTextBox = (gcnew System::Windows::Forms::Button());
			this->labelTextoLeido = (gcnew System::Windows::Forms::Label());
			this->ContainerMatrizA = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Segundo form";
			// 
			// BtnGenerar
			// 
			this->BtnGenerar->Location = System::Drawing::Point(12, 55);
			this->BtnGenerar->Name = L"BtnGenerar";
			this->BtnGenerar->Size = System::Drawing::Size(126, 23);
			this->BtnGenerar->TabIndex = 1;
			this->BtnGenerar->Text = L"Generar buttons";
			this->BtnGenerar->UseVisualStyleBackColor = true;
			this->BtnGenerar->Click += gcnew System::EventHandler(this, &SegundoForm::BtnGenerar_Click);
			// 
			// BtnLeerTextBox
			// 
			this->BtnLeerTextBox->Location = System::Drawing::Point(144, 55);
			this->BtnLeerTextBox->Name = L"BtnLeerTextBox";
			this->BtnLeerTextBox->Size = System::Drawing::Size(128, 23);
			this->BtnLeerTextBox->TabIndex = 2;
			this->BtnLeerTextBox->Text = L"Leer text1";
			this->BtnLeerTextBox->UseVisualStyleBackColor = true;
			this->BtnLeerTextBox->Click += gcnew System::EventHandler(this, &SegundoForm::BtnLeerTextBox_Click);
			// 
			// labelTextoLeido
			// 
			this->labelTextoLeido->AutoSize = true;
			this->labelTextoLeido->Location = System::Drawing::Point(261, 272);
			this->labelTextoLeido->Name = L"labelTextoLeido";
			this->labelTextoLeido->Size = System::Drawing::Size(55, 13);
			this->labelTextoLeido->TabIndex = 3;
			this->labelTextoLeido->Text = L"texto leido";
			// 
			// ContainerMatrizA
			// 
			this->ContainerMatrizA->Location = System::Drawing::Point(12, 95);
			this->ContainerMatrizA->Name = L"ContainerMatrizA";
			this->ContainerMatrizA->Size = System::Drawing::Size(260, 174);
			this->ContainerMatrizA->TabIndex = 4;
			this->ContainerMatrizA->TabStop = false;
			this->ContainerMatrizA->Text = L"Matriz";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(347, 129);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(10, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"texto matrix xdxd";
			// 
			// SegundoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(585, 327);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ContainerMatrizA);
			this->Controls->Add(this->labelTextoLeido);
			this->Controls->Add(this->BtnLeerTextBox);
			this->Controls->Add(this->BtnGenerar);
			this->Controls->Add(this->label1);
			this->Name = L"SegundoForm";
			this->Text = L"SegundoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BtnGenerar_Click(System::Object^  sender, System::EventArgs^  e) {
				 /*System::Windows::Forms::Button^  BtnPrueba;
				 BtnPrueba = (gcnew System::Windows::Forms::Button());
				 BtnPrueba->Location = System::Drawing::Point(66, 85);
				 BtnPrueba->Name = L"BtnPrueba";
				 BtnPrueba->Size = System::Drawing::Size(120, 23);
				 BtnPrueba->Text = L"Boton generado";
				 this->Controls->Add(BtnPrueba);*/

				 TextBox^  TxtPrueba;
				 int coordenadaY = 15;
				 int coordenadaX = 5;
				 int MAX_TEXT_BOX = 4;
				 int GAP = 5;

				 int width = ContainerMatrizA->Width / (MAX_TEXT_BOX / 2) - GAP;
				 int height = ContainerMatrizA->Height / (MAX_TEXT_BOX / 2) - GAP;

				 /*for (int textBoxIndex = 0; textBoxIndex < MAX_TEXT_BOX; textBoxIndex++) {
					 String^ text = "TxtPrueba" + textBoxIndex;

					 TxtPrueba = (gcnew System::Windows::Forms::TextBox());
					 TxtPrueba->Location = System::Drawing::Point(coordenadaX, coordenadaY);
					 TxtPrueba->Name = text;
					 TxtPrueba->Size = System::Drawing::Size(width, height);
					 TxtPrueba->Text = text;
					 //this->Controls->Add(TxtPrueba);
					 ContainerMatrizA->Controls->Add(TxtPrueba);
				 }*/

				 for (int fila = 0; fila < (MAX_TEXT_BOX / 2); fila++) {
					 for (int columna = 0; columna < (MAX_TEXT_BOX / 2); columna++) {
						 String^ text = "TxtPrueba" + fila + columna;

						 TxtPrueba = (gcnew System::Windows::Forms::TextBox());
						 TxtPrueba->Location = System::Drawing::Point(coordenadaX, coordenadaY);
						 TxtPrueba->Name = text;
						 TxtPrueba->Size = System::Drawing::Size(width, height);
						 TxtPrueba->Text = text;
						 TxtPrueba->Multiline = true;
						 ContainerMatrizA->Controls->Add(TxtPrueba);

						 coordenadaX += width + GAP;
					 }
					 coordenadaX = GAP;
					 coordenadaY += height + GAP;
				 }

	}
	private: System::Void BtnLeerTextBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 /* Obtener el texto de un TextBox
				 Control^ control = this->Controls->Find("TxtPrueba1", false)[0];
				 TextBox^ textBox = (TextBox^) control;
				 this->labelTextoLeido->Text = textBox->Text;*/

				 const int MAX_TEXT_BOX = 4;
				 int matriz[MAX_TEXT_BOX / 2][MAX_TEXT_BOX / 2];

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

				 for (int fila = 0; fila < (MAX_TEXT_BOX / 2); fila++) {
					 for (int columna = 0; columna < (MAX_TEXT_BOX / 2); columna++) {
						 Control^ control = ContainerMatrizA->Controls->Find("TxtPrueba" + fila + columna, false)[0];
						 TextBox^ textBox = (TextBox^)control;
						 String^ textoIngresado = textBox->Text;
						 int value = Convert::ToInt32(textBox->Text);

						 matriz[fila][columna] = value;
					 }
				 }
										

				 // Imprimir la matriz
				 String^ output = "";
				 for (int fila = 0; fila < MAX_TEXT_BOX / 2; fila++) {
					 for (int columna = 0; columna < MAX_TEXT_BOX / 2; columna++) {
						 std::cout << matriz[fila][columna] << "     " << std::endl;
						 output += matriz[fila][columna] + "       ";
					 }
					 output += "\n";
				 }
				 this->labelTextoLeido->Text = output;

	}
};
}
