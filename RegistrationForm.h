//---------------------------------------------------------------------------

#ifndef RegistrationFormH
#define RegistrationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *nameEdit;
	TLabel *Label1;
	TEdit *ageEdit;
	TLabel *Label2;
	TEdit *usernameEdit;
	TLabel *Label3;
	TEdit *passwordEdit;
	TLabel *Label4;
	TButton *saveButton;
	void __fastcall saveButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyRegistrationForm *myRegistrationForm;
//---------------------------------------------------------------------------
#endif
