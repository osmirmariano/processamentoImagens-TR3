//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "resultados.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	Form2->Color = clWhite;
	SpeedButton2->Enabled = false;
	SpeedButton3->Enabled = false;
	Label2->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
	Image1->Picture->LoadFromFile("image1.bmp"); // Carregando imagem
	Image1->Stretch = true; //redimensiona
	Image1->Refresh(); //atualiza

	Image2->Picture->LoadFromFile("image2.bmp");
	Image2->Stretch = true; //redimensiona
	Image2->Refresh(); //atualiza

	SpeedButton2->Enabled = true;
	SpeedButton3->Enabled =  true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
	Label2->Enabled = true;
	int x, y;
	int a, b, c, d, e, f, o, s, t;
//  int a, b;
	for(x = 0; x < Image1->Width; x++){
		for(y = 0; y < Image1->Height; y++){
			cor1 = Image1->Canvas->Pixels[x][y];
			a = GetRValue(cor1);
			b = GetGValue(cor1);
			c = GetBValue(cor1);

			cor2 = Image2->Canvas->Pixels[x][y];
			d = GetRValue(cor2);
			e = GetGValue(cor2);
			f = GetBValue(cor2);

			o =  ((a+d)/2);
			s =  ((b+e)/2);
			t =  ((c+e)/2);

			Image3->Canvas->Pixels[x][y] = RGB(o,s,t);
			//a = Image1->Canvas->Pixels[x][y];
			//b = Image2->Canvas->Pixels[x][y];
			//Image3->Canvas->Pixels[x][y] = ((Image1->Canvas->Pixels[x][y]+Image2->Canvas->Pixels[x][y])/2);
		}
	}
	//ShowMessage(Image2->Canvas->Pixels[0][0]);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::SpeedButton3Click(TObject *Sender)
{
	int x, y,a, b, c, d, e, f, o, s, t;
	for(x = 0; x < Image1->Width; x++){
		for(y = 0; y < Image1->Height; y++){
			cor1 = Image1->Canvas->Pixels[x][y];
			a = GetRValue(cor1);
			b = GetGValue(cor1);
			c = GetBValue(cor1);

			cor2 = Image2->Canvas->Pixels[x][y];
			d = GetRValue(cor2);
			e = GetGValue(cor2);
			f = GetBValue(cor2);

			o =  ((a-d)/2);
			s =  ((b-e)/2);
			t =  ((c-e)/2);

			Image3->Canvas->Pixels[x][y] = RGB(o,s,t);
			//a = Image1->Canvas->Pixels[x][y];
			//b = Image2->Canvas->Pixels[x][y];
			//Image3->Canvas->Pixels[x][y] = ((Image1->Canvas->Pixels[x][y]+Image2->Canvas->Pixels[x][y])/2);

		}
	}
}
//---------------------------------------------------------------------------



