#pragma once
#include<stdlib.h>
#include<vcclr.h>
#include<math.h>
#include<stdio.h>


namespace HW1 {
	
	
	struct site{
		int i = 0, j = 0;
		site *next = nullptr;
	};
	struct sites{
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
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton2;
	private: System::Windows::Forms::ToolStripMenuItem^  rChannelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gChannelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  bchannelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  grayScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton3;
	private: System::Windows::Forms::ToolStripMenuItem^  medianToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  meanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton4;
	private: System::Windows::Forms::ToolStripMenuItem^  histogramEqualizationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton5;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  aUserdefinedthresholdingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton6;
	private: System::Windows::Forms::ToolStripMenuItem^  sobelEdgeDetectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  horizontalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  combinedToolStripMenuItem;

	private: System::Windows::Forms::ErrorProvider^  errorProvider1;
	private: System::Windows::Forms::ToolStripDropDownButton^  toolStripDropDownButton7;
	private: System::Windows::Forms::ToolStripMenuItem^  numOfConnectedRegionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^  toolStripTextBox2;
	private: System::Windows::Forms::ToolStripMenuItem^  bineryImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  overlapImageToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripDropDownButton1 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton2 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->rChannelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gChannelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->bchannelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton3 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->medianToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->meanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton4 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->histogramEqualizationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton5 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->aUserdefinedthresholdingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton6 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->sobelEdgeDetectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horizontalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->combinedToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->bineryImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->overlapImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripDropDownButton7 = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->numOfConnectedRegionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(218, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(506, 381);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(817, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(514, 381);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(425, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Original";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label2->Location = System::Drawing::Point(1072, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Result";
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripDropDownButton1,
					this->toolStripDropDownButton2, this->toolStripDropDownButton3, this->toolStripDropDownButton4, this->toolStripDropDownButton5,
					this->toolStripDropDownButton6, this->toolStripDropDownButton7
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1401, 25);
			this->toolStrip1->TabIndex = 10;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripDropDownButton1
			// 
			this->toolStripDropDownButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->saveToolStripMenuItem, this->undoToolStripMenuItem
			});
			this->toolStripDropDownButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton1->Name = L"toolStripDropDownButton1";
			this->toolStripDropDownButton1->Size = System::Drawing::Size(42, 22);
			this->toolStripDropDownButton1->Text = L"FILE";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(104, 22);
			this->toolStripMenuItem1->Text = L"load";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->saveToolStripMenuItem->Text = L"save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->Size = System::Drawing::Size(104, 22);
			this->undoToolStripMenuItem->Text = L"undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::undoToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton2
			// 
			this->toolStripDropDownButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton2->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rChannelToolStripMenuItem,
					this->gChannelToolStripMenuItem, this->bchannelToolStripMenuItem, this->grayScaleToolStripMenuItem
			});
			this->toolStripDropDownButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton2->Name = L"toolStripDropDownButton2";
			this->toolStripDropDownButton2->Size = System::Drawing::Size(195, 22);
			this->toolStripDropDownButton2->Text = L"RGB Extraction & Transformation";
			// 
			// rChannelToolStripMenuItem
			// 
			this->rChannelToolStripMenuItem->Name = L"rChannelToolStripMenuItem";
			this->rChannelToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->rChannelToolStripMenuItem->Text = L"R channel";
			this->rChannelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::rChannelToolStripMenuItem_Click);
			// 
			// gChannelToolStripMenuItem
			// 
			this->gChannelToolStripMenuItem->Name = L"gChannelToolStripMenuItem";
			this->gChannelToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->gChannelToolStripMenuItem->Text = L"G channel";
			this->gChannelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::gChannelToolStripMenuItem_Click);
			// 
			// bchannelToolStripMenuItem
			// 
			this->bchannelToolStripMenuItem->Name = L"bchannelToolStripMenuItem";
			this->bchannelToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->bchannelToolStripMenuItem->Text = L"B channel";
			this->bchannelToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bchannelToolStripMenuItem_Click);
			// 
			// grayScaleToolStripMenuItem
			// 
			this->grayScaleToolStripMenuItem->Name = L"grayScaleToolStripMenuItem";
			this->grayScaleToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->grayScaleToolStripMenuItem->Text = L"Gray scale";
			this->grayScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::grayScaleToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton3
			// 
			this->toolStripDropDownButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->medianToolStripMenuItem,
					this->meanToolStripMenuItem
			});
			this->toolStripDropDownButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton3->Name = L"toolStripDropDownButton3";
			this->toolStripDropDownButton3->Size = System::Drawing::Size(93, 22);
			this->toolStripDropDownButton3->Text = L"Smooth filter";
			// 
			// medianToolStripMenuItem
			// 
			this->medianToolStripMenuItem->Name = L"medianToolStripMenuItem";
			this->medianToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->medianToolStripMenuItem->Text = L"median";
			this->medianToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::medianToolStripMenuItem_Click);
			// 
			// meanToolStripMenuItem
			// 
			this->meanToolStripMenuItem->Name = L"meanToolStripMenuItem";
			this->meanToolStripMenuItem->Size = System::Drawing::Size(117, 22);
			this->meanToolStripMenuItem->Text = L"mean";
			this->meanToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::meanToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton4
			// 
			this->toolStripDropDownButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton4->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->histogramEqualizationToolStripMenuItem });
			this->toolStripDropDownButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton4->Name = L"toolStripDropDownButton4";
			this->toolStripDropDownButton4->Size = System::Drawing::Size(152, 22);
			this->toolStripDropDownButton4->Text = L"Histogram Equalization";
			// 
			// histogramEqualizationToolStripMenuItem
			// 
			this->histogramEqualizationToolStripMenuItem->Name = L"histogramEqualizationToolStripMenuItem";
			this->histogramEqualizationToolStripMenuItem->Size = System::Drawing::Size(206, 22);
			this->histogramEqualizationToolStripMenuItem->Text = L"Histogram Equalization";
			this->histogramEqualizationToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::histogramEqualizationToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton5
			// 
			this->toolStripDropDownButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton5->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripTextBox1,
					this->aUserdefinedthresholdingToolStripMenuItem
			});
			this->toolStripDropDownButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton5->Name = L"toolStripDropDownButton5";
			this->toolStripDropDownButton5->Size = System::Drawing::Size(174, 22);
			this->toolStripDropDownButton5->Text = L"A user-definedthresholding";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox1->Text = L"input number";
			// 
			// aUserdefinedthresholdingToolStripMenuItem
			// 
			this->aUserdefinedthresholdingToolStripMenuItem->Name = L"aUserdefinedthresholdingToolStripMenuItem";
			this->aUserdefinedthresholdingToolStripMenuItem->Size = System::Drawing::Size(216, 22);
			this->aUserdefinedthresholdingToolStripMenuItem->Text = L"Click to change threshold";
			this->aUserdefinedthresholdingToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aUserdefinedthresholdingToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton6
			// 
			this->toolStripDropDownButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton6->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->sobelEdgeDetectionToolStripMenuItem,
					this->horizontalToolStripMenuItem, this->combinedToolStripMenuItem
			});
			this->toolStripDropDownButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton6->Name = L"toolStripDropDownButton6";
			this->toolStripDropDownButton6->Size = System::Drawing::Size(143, 22);
			this->toolStripDropDownButton6->Text = L"Sobel edge detection";
			// 
			// sobelEdgeDetectionToolStripMenuItem
			// 
			this->sobelEdgeDetectionToolStripMenuItem->Name = L"sobelEdgeDetectionToolStripMenuItem";
			this->sobelEdgeDetectionToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sobelEdgeDetectionToolStripMenuItem->Text = L"vertical";
			this->sobelEdgeDetectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sobelEdgeDetectionToolStripMenuItem_Click);
			// 
			// horizontalToolStripMenuItem
			// 
			this->horizontalToolStripMenuItem->Name = L"horizontalToolStripMenuItem";
			this->horizontalToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->horizontalToolStripMenuItem->Text = L"horizontal";
			this->horizontalToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::horizontalToolStripMenuItem_Click);
			// 
			// combinedToolStripMenuItem
			// 
			this->combinedToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripTextBox2,
					this->bineryImageToolStripMenuItem
			});
			this->combinedToolStripMenuItem->Name = L"combinedToolStripMenuItem";
			this->combinedToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->combinedToolStripMenuItem->Text = L"combined";
			this->combinedToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::combinedToolStripMenuItem_Click);
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			this->toolStripTextBox2->Text = L"input number";
			// 
			// bineryImageToolStripMenuItem
			// 
			this->bineryImageToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->overlapImageToolStripMenuItem });
			this->bineryImageToolStripMenuItem->Name = L"bineryImageToolStripMenuItem";
			this->bineryImageToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->bineryImageToolStripMenuItem->Text = L"binery image";
			this->bineryImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::bineryImageToolStripMenuItem_Click);
			// 
			// overlapImageToolStripMenuItem
			// 
			this->overlapImageToolStripMenuItem->Name = L"overlapImageToolStripMenuItem";
			this->overlapImageToolStripMenuItem->Size = System::Drawing::Size(156, 22);
			this->overlapImageToolStripMenuItem->Text = L"overlap image";
			this->overlapImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::overlapImageToolStripMenuItem_Click);
			// 
			// toolStripDropDownButton7
			// 
			this->toolStripDropDownButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripDropDownButton7->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->numOfConnectedRegionToolStripMenuItem });
			this->toolStripDropDownButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripDropDownButton7->Name = L"toolStripDropDownButton7";
			this->toolStripDropDownButton7->Size = System::Drawing::Size(153, 22);
			this->toolStripDropDownButton7->Text = L"Connected Component";
			this->toolStripDropDownButton7->Click += gcnew System::EventHandler(this, &Form1::toolStripDropDownButton7_Click);
			// 
			// numOfConnectedRegionToolStripMenuItem
			// 
			this->numOfConnectedRegionToolStripMenuItem->Name = L"numOfConnectedRegionToolStripMenuItem";
			this->numOfConnectedRegionToolStripMenuItem->Size = System::Drawing::Size(231, 22);
			this->numOfConnectedRegionToolStripMenuItem->Text = L"Num of Connected region : ";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1401, 557);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Bitmap^ openImg;
		Bitmap^ origin;
	

	//
	//load
	//
	private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 // 如果成功開檔
				 {
					 
					 openImg = gcnew Bitmap(openFileDialog1->FileName);
					 pictureBox1->Image = openImg;
					 origin = openImg;
				 }
	}
	//
	//save
	//
	private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog();
				 saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
				 saveFileDialog1->Title = "Save an Image File";

				 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					 String^ sfd = saveFileDialog1->FileName;
					 pictureBox2->Image->Save(sfd, System::Drawing::Imaging::ImageFormat::Jpeg);
				 }
	}
	//
	//R channel
	//
	private: System::Void rChannelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c = RGB.R;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//G channel
	//
	private: System::Void gChannelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c = RGB.G;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//	
	//B channel
	//
	private: System::Void bchannelToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c = RGB.B;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//Gray scale
	//
	private: System::Void grayScaleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c = (RGB.R * 299 + RGB.G * 587 + RGB.B * 114) / 1000;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//median
	//
	private: System::Void medianToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 int k = 0;
					 int window[9];
					 for (int ii = i - 1; ii < i + 2; ii++)
					 for (int jj = j - 1; jj < j + 2; jj++){
						 if (ii >= 0 && jj >= 0 && ii < temp->Height && jj < temp->Width){
							window[k] = openImg->GetPixel(jj, ii).R;
						 }
						 else{
							 window[k] = 0;
						 }
						 k++;
					 }

					 for (int m = 0; m < 9; m++){
						 int min = m;
						 for (int l = m + 1; l < 9; l++){
							 if (window[l] < window[min])min = l;
						 }
						 int temp = window[m];
						 window[m] = window[min];
						 window[min] = temp;
					 }
					 int c = window[4];
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//mean
	//
	private: System::Void meanToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height ; i++)
				 for (int j = 0; j < temp->Width ; j++)
				 {	
					 int k = 0, c = 0;
					 int window[9];
					 for (int ii = i - 1; ii < i + 2; ii++)
					 for (int jj = j - 1; jj < j + 2; jj++){
						 if (ii >= 0 && jj >= 0 && ii < temp->Height && jj < temp->Width){
							 window[k] = openImg->GetPixel(jj, ii).R;
						 }
						 else{
							 window[k] = 255;
						 }
						 k++;
					 }
					 for (int l = 0; l < 9; l++){
						 c += window[l];
					 }
					 c /= 9;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//Histogram Equalization
	//
	private: System::Void histogramEqualizationToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 int num = 0;
				 int *greynum = (int*)calloc(256, sizeof(int));
				 for (int i = 0; i < openImg->Height; i++)
				 for (int j = 0; j < openImg->Width; j++){
					 Color RGB = openImg->GetPixel(j, i);
					 if (RGB.R > 0){
						 greynum[Convert::ToInt32 (RGB.R)] += 1;
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
							 found == true;
						 }
						 cdf[i] = greynum[i] + cdfnum;
						 cdfnum = cdf[i];
					 }
				 }
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c = (double(cdf[RGB.R]-cdfmin)*255 / double(cdfnum-cdfmin)) ;
					 if (c < 0)c = 0;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	// A user-definedthresholding
	//
	private: System::Void aUserdefinedthresholdingToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 int t = 0;
				 interior_ptr<const Char> ppchar = PtrToStringChars(toolStripTextBox1->Text);
				 for (; *ppchar != L'\0'; ++ppchar){
					 t *= 10;
					 t += (*ppchar - '0');
				 }
				 /*
				 int histogram[256] = {};
				 for (int i = 0; i < 512;i++)
				 for (int j = 0; j < 512; j++){
					 histogram[openImg->GetPixel(j, i).R] += 1;
				 }



				 unsigned int sumB = 0;
				 unsigned int sum1 = 0;
				 float wB = 0.0f;
				 float wF = 0.0f;
				 float mF = 0.0f;
				 float max_var = 0.0f;
				 float inter_var = 0.0f;
				 unsigned int threshold = 0;
				 unsigned int index_histo = 0;

				 for (index_histo = 1; index_histo < 256; ++index_histo)
				 {
					 sum1 += index_histo * histogram[index_histo];
				 }

				 for (index_histo = 1; index_histo < 256; ++index_histo)
				 {
					 wB = wB + histogram[index_histo];
					 wF = 512*512 - wB;
					 if (wB == 0 || wF == 0)
					 {
						 continue;
					 }
					 sumB = sumB + index_histo * histogram[index_histo];
					 mF = (sum1 - sumB) / wF;
					 inter_var = wB * wF * ((sumB / wB) - mF) * ((sumB / wB) - mF);
					 if (inter_var >= max_var)
					 {
						 threshold = index_histo;
						 max_var = inter_var;
					 }
				 }

				 */









				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j <temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c;
					 if (RGB.R >(t))c = 255;
					 else c = 0;

					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//vertical
	//
	private: System::Void sobelEdgeDetectionToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 int Gx[3][3] = { { -1, 0, 1 }, { -2, 0, 2 }, { -1, 0, 1 } };
				 int Gy[3][3] = { { -1, -2, -1 }, { 0, 0, 0 }, { 1, 2, 1 } };
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j < temp->Width; j++){
					 int s1 = 0, s2 = 0;
					 for (int x = 0; x < 3; x++)
					 for (int y = 0; y < 3; y++){
						 if (i > 0 && j > 0 && i < temp->Height-1 && j < temp->Width-1){
								s1 += Gx[x][y] * openImg->GetPixel(j - 1 + y, i - 1 + x).R;
						 }
						 else{
							 s1 += Gx[x][y] * 255;
						 }
						
					 }
					 if (s1<0)s1 *= -1;
					 int c = s1;
					 if (c>255)c = 255;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//horizontial
	//
	private: System::Void horizontalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 int Gx[3][3] = { { -1, 0, 1 }, { -2, 0, 2 }, { -1, 0, 1 } };
				 int Gy[3][3] = { { -1, -2, -1 }, { 0, 0, 0 }, { 1, 2, 1 } };
				 for (int i = 1; i < temp->Height - 1; i++)
				 for (int j = 1; j < temp->Width - 1; j++){
					 int s1 = 0, s2 = 0;
					 for (int x = 0; x < 3; x++)
					 for (int y = 0; y < 3; y++){
						 if (i > 0 && j > 0 && i < temp->Height-1 && j < temp->Width-1){
							 s2 += Gy[x][y] * openImg->GetPixel(j - 1 + y, i - 1 + x).R;
						 }
						 else{
							 s2 += Gy[x][y] * 255;
						 }
					 }
					 if (s2<0)s2 *= -1;
					 int c = s2;
					 if (c>255)c = 255;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//combined
	//
	private: System::Void combinedToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 int Gx[3][3] = { { -1, 0, 1 }, { -2, 0, 2 }, { -1, 0, 1 } };
				 int Gy[3][3] = { { -1, -2, -1 }, { 0, 0, 0 }, { 1, 2, 1 } };
				 for (int i = 1; i < temp->Height - 1; i++)
				 for (int j = 1; j < temp->Width - 1; j++){
					 int s1 = 0, s2 = 0;
					 for (int x = 0; x < 3; x++)
					 for (int y = 0; y < 3; y++){
						 if (i > 0 && j > 0 && i < temp->Height-1 && j < temp->Width-1){
							 s1 += Gx[x][y] * openImg->GetPixel(j - 1 + y, i - 1 + x).R;
							 s2 += Gy[x][y] * openImg->GetPixel(j - 1 + y, i - 1 + x).R;
						 }
						 else{
							 s1 += Gx[x][y] * 255;
							 s2 += Gx[x][y] * 255;
						 }
					 }

					 int c = sqrt(double(s1*s1 + s2*s2));
					 if (c>255)c = 255;
					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//Connected Component
	//
	private: System::Void toolStripDropDownButton7_Click(System::Object^  sender, System::EventArgs^  e) {
				Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);

				for (int i = 0; i < temp->Height; i++)
				for (int j = 0; j < temp->Width; j++){
					Color RGB = openImg->GetPixel(j, i);
					int invR = Convert::ToInt32(RGB.R);
					int invG = Convert::ToInt32(RGB.G);
					int invB = Convert::ToInt32(RGB.B);
					temp->SetPixel(j, i, Color::FromArgb(invR, invG, invB));
				}

				int count = 0;
				for (int i = 0; i < temp->Height; i++)
				for (int j = 0; j <temp->Width; j++)
				{
					if (temp->GetPixel(j, i).R == 0){
						count += 1;
						sites wait;
						enqueue(&wait, i, j);
						int c[3] = { (rand() % 255) + 1, (rand() % 255) + 1, (rand() % 255) + 1 };
						int invR = c[0];
						int invG = c[1];
						int invB = c[2];
						temp->SetPixel(j, i, Color::FromArgb(invR, invG, invB));
						while (wait.head != nullptr){
							for (int ii = wait.head->i - 1; ii < wait.head->i + 2; ii++)
							for (int jj = wait.head->j - 1; jj < wait.head->j + 2; jj++){
								if (ii >= 0 && ii < temp->Height && jj >= 0 && jj < temp->Width)
								if (temp->GetPixel(jj, ii).R == 0){
									enqueue(&wait, ii, jj);
									temp->SetPixel(jj, ii, Color::FromArgb(invR, invG, invB));
								}
							}
							dequeue(&wait);
						}
					}
				}
				char s[50];
				sprintf(s, "Num of Connected region : %d", count);
				numOfConnectedRegionToolStripMenuItem->Text = gcnew String(s);
				pictureBox2->Image = temp;

	}
	//
	//undo
	//
	private: System::Void undoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 openImg = (Bitmap^)pictureBox1->Image;
				 pictureBox1->Image = pictureBox2->Image;
				 pictureBox2->Image = openImg;
	}
	//
	//binary image
	//
	private: System::Void bineryImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 int t = 0;
				 interior_ptr<const Char> ppchar = PtrToStringChars(toolStripTextBox2->Text);
				 for (; *ppchar != L'\0'; ++ppchar){
					 t *= 10;
					 t += (*ppchar - '0');
				 }
				 Bitmap^ temp = gcnew Bitmap(openImg->Width, openImg->Height);
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j <temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 int c;
					 if (RGB.R < (t))c = 0;
					 else c = 255;
					 

					 temp->SetPixel(j, i, Color::FromArgb(c, c, c));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
	//
	//overlap image
	//
	private: System::Void overlapImageToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 pictureBox1->Image = openImg;
				 Bitmap^ temp = origin;
				 for (int i = 0; i < temp->Height; i++)
				 for (int j = 0; j <temp->Width; j++)
				 {
					 Color RGB = openImg->GetPixel(j, i);
					 if (RGB.R >=255) temp->SetPixel(j, i, Color::FromArgb(0, 200, 0));
				 }
				 pictureBox2->Image = temp;
				 openImg = temp;
	}
};
}
	