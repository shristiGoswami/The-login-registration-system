//---------------------------------------------------------------------------

#ifndef LoginFormH
#define LoginFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyLoginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *usernameEdit;
	TLabel *Label1;
	TEdit *passwordEdit;
	TLabel *Label2;
	TButton *loginButton;
	TLabel *messageLabel;
	void __fastcall loginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyLoginForm *myLoginForm;
//---------------------------------------------------------------------------
#endif
