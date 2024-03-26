#pragma once

namespace Lab51 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem3;

	private: System::ComponentModel::IContainer^ components;

	private:
		

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->÷åğâîíèéToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->êîë³ğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->÷åğâîíèéToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(56, 147);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(332, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ëàáîğàòîğíà ğîáîòà ¹5";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem2,
					this->çåëåíèéToolStripMenuItem2, this->ñèí³éToolStripMenuItem2
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(150, 76);
			// 
			// æîâòèéToolStripMenuItem2
			// 
			this->÷åğâîíèéToolStripMenuItem2->Name = L"æîâòèéToolStripMenuItem2";
			this->÷åğâîíèéToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->÷åğâîíèéToolStripMenuItem2->Text = L"Æîâòèé";
			this->÷åğâîíèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::æîâòèéToolStripMenuItem2_Click);
			// 
			// çåëåíèéToolStripMenuItem2
			// 
			this->çåëåíèéToolStripMenuItem2->Name = L"çåëåíèéToolStripMenuItem2";
			this->çåëåíèéToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->çåëåíèéToolStripMenuItem2->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem2_Click);
			// 
			// áëàêèòíèéToolStripMenuItem2
			// 
			this->ñèí³éToolStripMenuItem2->Name = L"ñèí³éToolStripMenuItem2";
			this->ñèí³éToolStripMenuItem2->Size = System::Drawing::Size(149, 24);
			this->ñèí³éToolStripMenuItem2->Text = L"Áëàêèòíèé";
			this->ñèí³éToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::áëàêèòíèéToolStripMenuItem2_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->êîë³ğToolStripMenuItem,
					this->âèõ³äToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(451, 30);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// êîë³ğToolStripMenuItem
			// 
			this->êîë³ğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôîíToolStripMenuItem,
					this->òåêñòToolStripMenuItem
			});
			this->êîë³ğToolStripMenuItem->Name = L"êîë³ğToolStripMenuItem";
			this->êîë³ğToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->êîë³ğToolStripMenuItem->Text = L"Êîë³ğ";
			// 
			// ôîíToolStripMenuItem
			// 
			this->ôîíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem1,
					this->çåëåíèéToolStripMenuItem1, this->ñèí³éToolStripMenuItem1
			});
			this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
			this->ôîíToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ôîíToolStripMenuItem->Text = L"Ôîí";
			// 
			// æîâòèéToolStripMenuItem1
			// 
			this->÷åğâîíèéToolStripMenuItem1->Name = L"÷åğâîíèéToolStripMenuItem1";
			this->÷åğâîíèéToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->÷åğâîíèéToolStripMenuItem1->Text = L"Æîâòèé";
			this->÷åğâîíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::æîâòèéToolStripMenuItem1_Click);
			// 
			// çåëåíèéToolStripMenuItem1
			// 
			this->çåëåíèéToolStripMenuItem1->Name = L"çåëåíèéToolStripMenuItem1";
			this->çåëåíèéToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->çåëåíèéToolStripMenuItem1->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem1_Click);
			// 
			// áëàêèòíèéToolStripMenuItem1
			// 
			this->ñèí³éToolStripMenuItem1->Name = L"ñèí³éToolStripMenuItem1";
			this->ñèí³éToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->ñèí³éToolStripMenuItem1->Text = L"Áëàêèòíèé";
			this->ñèí³éToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem1_Click);
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem,
					this->çåëåíèéToolStripMenuItem, this->ñèí³éToolStripMenuItem
			});
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->òåêñòToolStripMenuItem->Text = L"Òåêñò";
			// 
			// æîâòèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->÷åğâîíèéToolStripMenuItem->Text = L"Æîâòèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::æîâòèéToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñèí³éToolStripMenuItem->Text = L"Áëàêèòíèé";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::áëàêèòíèéToolStripMenuItem_Click);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(64, 24);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem3,
					this->çåëåíèéToolStripMenuItem3, this->ñèí³éToolStripMenuItem3
			});
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(150, 76);
			// 
			// æîâòèéToolStripMenuItem3
			// 
			this->÷åğâîíèéToolStripMenuItem3->Name = L"æîâòèéToolStripMenuItem3";
			this->÷åğâîíèéToolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->÷åğâîíèéToolStripMenuItem3->Text = L"Æîâòèé";
			this->÷åğâîíèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::æîâòèéToolStripMenuItem3_Click);
			// 
			// çåëåíèéToolStripMenuItem3
			// 
			this->çåëåíèéToolStripMenuItem3->Name = L"çåëåíèéToolStripMenuItem3";
			this->çåëåíèéToolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->çåëåíèéToolStripMenuItem3->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem3_Click);
			// 
			// ñèí³éToolStripMenuItem3
			// 
			this->ñèí³éToolStripMenuItem3->Name = L"ñèí³éToolStripMenuItem3";
			this->ñèí³éToolStripMenuItem3->Size = System::Drawing::Size(149, 24);
			this->ñèí³éToolStripMenuItem3->Text = L"Áëàêàòíèé";
			this->ñèí³éToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::áëàêèòíèéToolStripMenuItem3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(451, 441);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 9.8F));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Ëàáîğàòîğíà ğîáîòà ¹5";
			this->contextMenuStrip1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void æîâòèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->ForeColor = Color::Yellow;
	}
private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void áëàêèòíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::SkyBlue;
}
private: System::Void æîâòèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor= Color::Yellow;
}
private: System::Void çåëåíèéToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
	private: System::Void ñèí³éToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		BackColor = Color::SkyBlue;
	}
private: System::Void æîâòèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Yellow;
}
private: System::Void çåëåíèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::Green;
}
private: System::Void áëàêèòíèéToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->ForeColor = Color::SkyBlue;
}
private: System::Void æîâòèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Yellow;
}
private: System::Void çåëåíèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Green;
}
private: System::Void áëàêèòíèéToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::SkyBlue;
}
};
}
