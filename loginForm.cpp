//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#pragma hdrstop

#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TmyLoginForm *myLoginForm;
//---------------------------------------------------------------------------
__fastcall TmyLoginForm::TmyLoginForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
//Parsing the stored information - This allows us to access the individual
//information from the different information in the form of indexes. Parsing
//makes it easier for the 'line' variable to work with.
//This vector of strings receives one line that is one user's information
//at a time
std::vector<std::string> parseCommaDelimitedString(std::string line)
{
	std::vector<std::string> result;
	std::stringstream s_stream(line);
	
	//Iteration continues through our line string stream till we reach the
	//delimiter ','. The substring is pushed back into our result vector array.
	while(s_stream.good())
	{
		std::string substr;
		getline(s_stream,substr,',');
		result.push_back(substr);
	}
	return result;
}
//---------------------------------------------------------------------------
void __fastcall TmyLoginForm::loginButtonClick(TObject *Sender)
{
		//Since we are reading from a file, we make an object of fstream
		//and also include the fstream library
		fstream myFile;
		myFile.open("registeredUsers.txt", ios::in);
		if(myFile.is_open())
		{
			std::string line;
			//The 'line' variable will represent one record from our file i.e.
			//it will represent data about one user.
			//Now, we will iterate through our file line by line. So, we use
			//the getline function to obtain the data from 'myFile' and store
			//it in our line variable.
			while(getline(myFile,line))
			{
			 std::vector<std::string> parsedLine=parseCommaDelimitedString(line);

			 //The variable username stores the already stored username of the
			 //user for future comparison when the user registers again. The
			 //".c_str()" is used to convert the value into a c-string.
			 const char* username = parsedLine.at(2).c_str();

			 //Storing the username that the user has entered into the
			 //variable editUsername
			 AnsiString editUsername = usernameEdit->Text;
			 const char* usernameString = editUsername.c_str();

				if(std::strcmp(username,usernameString)==0)
				{
						const char* password = parsedLine.at(3).c_str();

						AnsiString editPassword = passwordEdit->Text;
						const char* passwordString = editPassword.c_str();
					
						//Comparing the strings and if found same, then
						//comparing passwords
						if(std::strcmp(password,passwordString)==0)
						{
							messageLabel->Text = "Logged in";
						}
						else
						{
							messageLabel->Text = "Invalid Login";
						}
				}
			}
		}
}
//---------------------------------------------------------------------------
