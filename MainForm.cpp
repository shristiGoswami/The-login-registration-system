//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
#include "LoginForm.h"
#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyMainForm *myMainForm;
//---------------------------------------------------------------------------
__fastcall TmyMainForm::TmyMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyMainForm::loginNavigationButtonClick(TObject *Sender)
{
    myLoginForm->Show();
}
//---------------------------------------------------------------------------
void __fastcall TmyMainForm::registrationNavigationButtonClick(TObject *Sender)
{
	myRegistrationForm->Show();
}
//---------------------------------------------------------------------------
