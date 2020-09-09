#include "MyForm.h"
#include <iostream>
#include <ctime>
#include <Windows.h>

using namespace Project2;


void Project2::MyForm::fillArray()
{
	//this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
	//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
	m_arr = gcnew array <MyArr^, 1>(size_arr);

	int x(begin_x), y(begin_y);
	bool first = true;

	for (size_t i = 0; i < size_arr; i++)
	{
		m_arr[i] = gcnew MyArr;
		if (i % 10 == 0 && !first)
		{
			y += step;
			if (i < center_arr)
				x = begin_x;
			if (i >= center_arr)
			{
				x = 314;
				if (i == center_arr)
					y = begin_y;
			}
		}
		first = false;

		m_arr[i]->init(x, y);
		

		x += step;
	}
	random();

}

void Project2::MyForm::add()
{
	for (size_t i = 0; i < size_arr; i++)
	{
		this->panel1->Controls->Add(m_arr[i]->picture);
	}
}



void Project2::MyForm::endInit()
{
	for (size_t i = 0; i < size_arr; i++)
	{
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(m_arr[i]->picture))->EndInit();
		
	}
	//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(ar.picture))->EndInit();
}

void Project2::MyForm::random()
{
	srand(time(NULL));
	int i;

	//i = rand() % 66 + 10;
	//m_arr[i]->isShip();
	//m_arr[i + 10]->isShip();
	//m_arr[i + 20]->isShip();
	//m_arr[i + 30]->isShip();
	////m_arr[++i]->isShip();

	////i = rand() % 96 + 1;
	//m_arr[i + 2]->isShip();
	//m_arr[++i + 2]->isShip();
	//m_arr[++i + 2]->isShip();

	//i = rand() % 96 + 1;
	//m_arr[i]->isShip();
	//m_arr[++i]->isShip();
	//m_arr[++i]->isShip();


	//i = rand() % 96 + 1;
	//m_arr[i]->isShip();
	//m_arr[++i]->isShip();


	//i = rand() % 96 + 1;
	//m_arr[i]->isShip();
	//m_arr[++i]->isShip();


	//i = rand() % 96 + 1;
	//m_arr[i]->isShip();
	//m_arr[++i]->isShip();


	//i = rand() % 99 + 0;
	//m_arr[i]->isShip();



	//i = rand() % 99 + 0;
	//m_arr[i]->isShip();



	//i = rand() % 99 + 0;
	//m_arr[i]->isShip();

	//i = rand() % 99 + 0;
	//m_arr[i]->isShip();
	//Sleep(1000);
}

void Project2::MyForm::box(int index)
{
	m_arr[index]->picture->BackColor = System::Drawing::Color::Black;
}

char* Project2::MyForm::foo()
{
	return "100";
}

void Project2::MyForm::MyArr::init(int index_x, int index_y)
{

	picture = gcnew PictureBox();
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
		
	picture->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
	picture->Location = System::Drawing::Point(index_x, index_y);
	picture->Size = System::Drawing::Size(19, 19);
	picture->TabStop = false;
	picture->BackColor = System::Drawing::Color::Blue;
	picture->Click += gcnew System::EventHandler(this, &MyForm::MyArr::clickButton);
}

void Project2::MyForm::MyArr::clickButton(System::Object^ sender, System::EventArgs^ e)
{
	
	if (m_index < 20)
	{
		switch (m_step)
		{
		case 0:
			picture->BackColor = System::Drawing::Color::Green;
			m_step++;
			m_index++;
			break;
		case 1:
			picture->BackColor = System::Drawing::Color::Blue;
			m_step = 0;
			m_index--;
			break;
		}
	}
	
}

void Project2::MyForm::MyArr::isShip()
{
	picture->BackColor = System::Drawing::Color::Black;
	m_isShip = true;
}

