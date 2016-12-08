//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "CPPForm.h"
#include "DelphiCode.hpp"
#include <memory>

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------
void __fastcall TForm1::btnDelphiClick(TObject *Sender)
{
	std::unique_ptr<TMyDelphiClass> DC(new TMyDelphiClass());
	DC->Text = L"Text set from C++";

	_di_IMyDelphiInterface DI { CreateADelphiInstance() };
	DI->DoSomething();
}
//---------------------------------------------------------------------------

