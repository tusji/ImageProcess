#pragma once
#include<stdio.h>
#include<stdlib.h>






namespace P76071022 {
	struct site{
		int i = 0, j = 0;
		site *next = nullptr;
	};
	struct sites{
		int size = 0;
		site *head = nullptr;
		site *tail = nullptr;
	};
	void enqueue(sites *q, int i, int j){
		site *node = (site*)malloc(sizeof(site));
		node->next = nullptr; node->i = i; node->j = j;
		if (q->head == nullptr){
			q->head = node;
			q->tail = node;
		}
		else{
			site *temp = q->tail;
			q->tail = node;
			temp->next = node;
		}
	}
	void dequeue(sites *q){
		if (q->head == nullptr)return;
		else{
			site *temp = q->head;
			q->head = q->head->next;
			free(temp);
			return;
		}
	}
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	protected:
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(427, 416);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(879, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(415, 416);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(445, 41);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(428, 416);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(106, 486);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 12);
			this->label1->TabIndex = 3;
			this->label1->Text = L"origin";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(595, 486);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 12);
			this->label2->TabIndex = 4;
			this->label2->Text = L"ground true";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1081, 486);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 12);
			this->label3->TabIndex = 5;
			this->label3->Text = L"result";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(88, 518);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"load";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(88, 547);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"save";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(88, 576);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"run";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(597, 515);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(50, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"result :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(597, 534);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"ground true :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label6->Location = System::Drawing::Point(597, 554);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(88, 16);
			this->label6->TabIndex = 11;
			this->label6->Text = L"intersection :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label7->Location = System::Drawing::Point(597, 576);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 16);
			this->label7->TabIndex = 12;
			this->label7->Text = L"DC :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1376, 623);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	Bitmap^ openImg;
	Bitmap^ ground;
	Bitmap^ origin;

	

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 // 如果成功開檔
				 {
					 openImg = gcnew Bitmap(openFileDialog1->FileName);
					 pictureBox1->Image = openImg;
					 origin = openImg;
					 String^ str = openFileDialog1->FileName;
					 String^ str2 = "label";
					 int index = str->IndexOf("image");
					 str = str->Substring(0, index) + str2 + str->Substring(index + 5);
					 label2->Text = str;
					 ground = gcnew Bitmap(str);
					 pictureBox3->Image = ground;
				 }
				 
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
				 saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
				 saveFileDialog1->Title = "Save an Image File";

				 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 String^ sfd = saveFileDialog1->FileName;
					 pictureBox2->Image->Save(sfd, System::Drawing::Imaging::ImageFormat::Jpeg);
				 }
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {


				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 Bitmap^ answer = gcnew Bitmap(openImg->Width, openImg->Height);
				 //int histogram[256] = {};
				 //
				 //histogramEqualization
				 //
				 int num = 0;
				 int *greynum = (int*)calloc(256, sizeof(int));
				 for (int i = 0; i < openImg->Height; i++)
				 for (int j = 0; j < openImg->Width; j++){
					 answer->SetPixel(j, i, Color::FromArgb(0, 0, 0));
					 Color RGB = openImg->GetPixel(j, i);
					 if (RGB.R > 0){
						 greynum[Convert::ToInt32(RGB.R)] += 1;
					 }
				 }
				 int *cdf = (int*)calloc(256, sizeof(int));
				 int cdfnum = 0;
				 bool found = false;
				 int cdfmin;
				 
				 for (int i = 0; i < 256; i++){
					 if (greynum[i] != 0){
						 if (found == false){
							 cdfmin = greynum[i];
							 found = true;
						 }
						 cdf[i] = greynum[i] + cdfnum;
						 cdfnum = cdf[i];
					 }
				 }
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c = (double(cdf[RGB.R] - cdfmin) * 255 / double(cdfnum - cdfmin));
					 if (c <235 )c = 0;
					 else c = 255;
					 //else histogram[c]+=1;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 free(cdf);
				 free(greynum);
				 

				 //
				 //reduce
				 //
				 
				 int time = 0;
				 int count;
				 //以QUEUE紀錄最大的前者三
				int max[1][3] = {}; 
				count = 0;
				for (int i = 512/3; i < temp->Height; i++)
				for (int j = 512/3; j <512*2/3; j++)
				{
					if (temp->GetPixel(j, i).R == 255){
						temp->SetPixel(j, i , Color::FromArgb(150, 150, 150));
						int size = 1;
						int x = j, y = i;
						count += 1;
						sites wait;
						enqueue(&wait, i, j);
						while (wait.head != nullptr){
							bool end = false;
							for (int ii = wait.head->i - 1; ii < wait.head->i + 2; ii++){
								for (int jj = wait.head->j - 1; jj < wait.head->j + 2; jj++){
									if ((ii < 512 / 3) || (jj < 512 / 3) || (jj > 512 * 2 / 3)){
										end = true;
									}
									if (ii >= 0 && ii < temp->Height && jj >= 0 && jj < temp->Width)
									if (temp->GetPixel(jj, ii).R == 255 ){
										temp->SetPixel(jj, ii, Color::FromArgb(150, 0, 0));
										size++;
										enqueue(&wait, ii, jj); 
									}
								}
							}
							endfor:
							dequeue(&wait);
							if (end){
								size = -1;
								while (wait.head != nullptr)dequeue(&wait);
							}
								 
						}

							 int min = size, minp = -1;
							 for (int i = 0; i < 1; i++){
								 if (max[i][2] < min){
									 min = max[i][2];
									 minp = i;
								 }
							 }
							 if (minp != -1){
								 max[minp][0] = x;
								 max[minp][1] = y;
								 max[minp][2] = size;
							 } 
						 }
					 }

				 //
				 //draw answer
				 //
					 for (int i = 0; i < 1; i++)
					 {
  					     if (temp->GetPixel(max[i][0], max[i][1]).R == 150){
							 sites wait;
							 enqueue(&wait, max[i][1], max[i][0]);
							 while (wait.head != nullptr){
								 for (int ii = wait.head->i - 1; ii < wait.head->i + 2; ii++)
								 for (int jj = wait.head->j - 1; jj < wait.head->j + 2; jj++){
									 if (ii >= 0 && ii < temp->Height && jj >= 0 && jj < temp->Width)
									 if (temp->GetPixel(jj, ii).R == 150 && answer->GetPixel(jj, ii).R == 0){
										 enqueue(&wait, ii, jj);
										 answer->SetPixel(jj, ii, Color::FromArgb(255, 255, 255));
										 //printf("%d %d\n", ii, jj);
										 //system("pause");
									 }
								 }
								 dequeue(&wait);
							 }
						 }
					 }


					 //
					 //mean smooth
					 //
					 /*
					 for (int i = 0; i < answer->Height; i++)
					 for (int j = 0; j < answer->Width; j++)
					 {
						 int k = 0, c = 0;
						 int window[9];
						 for (int ii = i - 1; ii < i + 2; ii++)
						 for (int jj = j - 1; jj < j + 2; jj++){
							 if (ii >= 0 && jj >= 0 && ii < answer->Height && jj < answer->Width){
								 window[k] = answer->GetPixel(jj, ii).R;
							 }
							 else{
								 window[k] = 0;
							 }
							 k++;
						 }
						 for (int l = 0; l < 9; l++){
							 c += window[l];
						 }
						 c /= 9;
						 if (c>100)c = 255;
						 else c = 0;

						 answer->SetPixel(j, i, Color::FromArgb(c, c, c));
					 }*/
					 




				 //
				 //print result
				 //
				 int result = 0, groundtrue = 0, intersection = 0;
				 float DC = 0;
				 for (int i = 0; i < answer->Height;i++)
				 for (int j = 0; j < answer->Width; j++){
					 Color r = answer->GetPixel(j, i);
					 Color g = ground->GetPixel(j, i);
					 if (r.R)result++;
					 if (g.R)groundtrue++;
					 if (r.R && g.R)intersection++;
				 }
				 DC = float(intersection )* 2 / (result + groundtrue);
				 char s[50];
				 sprintf(s, "result :%d", result);
				 label4->Text = gcnew String(s);
				 sprintf(s, "ground true :%d", groundtrue);
				 label5->Text = gcnew String(s);
				 sprintf(s, "intersection :%d", intersection);
				 label6->Text = gcnew String(s);
				 sprintf(s, "DC :%.5f", DC);
				 label7->Text = gcnew String(s);


				 //
				 //present
				 //
				 pictureBox2->Image = answer;


	}
};
}
