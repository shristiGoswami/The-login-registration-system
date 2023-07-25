//---------------------------------------------------------------------------

#include <fmx.h>
#include<fstream>
#pragma hdrstop

#include "RegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyRegistrationForm *myRegistrationForm;
//---------------------------------------------------------------------------
__fastcall TmyRegistrationForm::TmyRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TmyRegistrationForm::saveButtonClick(TObject *Sender)
{
	  fstream myFile;
	  myFile.open("registeredUsers.txt",ios::app);
	  if(myFile.is_open())
	  {
		  AnsiString name = nameEdit->Text;
		  AnsiString age = ageEdit->Text;
		  AnsiString username = usernameEdit->Text;
		  AnsiString password = passwordEdit->Text;
		  //writing into our file
		  myFile<<name<<","<<age<<","<<username<<","<<password<<"\n";
		  //closing our file
		  myFile.close();
		  //closing our registration form
		  this->Close();
      }
}
//---------------------------------------------------------------------------
