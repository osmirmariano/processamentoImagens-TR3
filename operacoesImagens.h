//---------------------------------------------------------------------------

#ifndef operacoesImagensH
#define operacoesImagensH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TSpeedButton *SpeedButton1;
	TImage *Image1;
	TLabel *Label1;
	TLabel *Label2;
	TComboBox *ComboBox1;
	TLabel *Label3;
	TSpeedButton *SpeedButton4;
	TLabel *Label4;
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall ComboBox1Change(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
