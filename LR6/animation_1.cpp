#include <iostream>
#include <unistd.h>
using namespace std;

const int ñ = 12;

int main()
{
	string s[ñ] = {
		"    /\\    ",  
		"   |oo|   ",  
		"  (|..|)  ",  
		"   |--|   ",  
		"   \\__/   ", 
		"    ||    ",  
		"  -| *|-  ", 
		" / |  | \\ ", 
		"/   \\/   \\", 
		"    /\\    ",  
		"    ||    ",  
		"   _||_   "   
	};

	for (int i = 0; i < 2; i++)
	{
		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = " --| *|-- ";
		s[7] = "/  |  |  \\";
		s[8]= "    \\/    ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = "  -| *|---";
		s[7] = " / |  |   ";
		s[8] = "/   \\/    ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[5] = "    ||   /";
		s[6] = " --| *|-- ";
		s[7] = "/  |  |   ";
		s[8] = "    \\/    ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\__/  /";
		s[5] = "    ||  / ";
		s[6] = "  -| *|-  ";
		s[7] = " / |  |   ";
		s[8] = "/   \\/    ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\__/  *";
		s[5] = "    ||  / ";
		s[6] = " --| *|-  ";
		s[7] = "/  |  |   ";
		s[8] = "    \\/    ";
 

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\__/  /";
		s[5] = "    ||  / ";
		s[6] = "---| *|-  ";
		s[7] = "   |  |   ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\__/  *";
		s[5] = "\\   ||  / ";
		s[6] = " --| *|-  ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "\\  \\__/  /";
		s[5] = " \\  ||  / ";
		s[6] = "  -| *|-  ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "*  \\__/  *";
		s[5] = " \\  ||  / ";
		s[6] = "  -| *|-  ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[4] = "   \\__/   ";
		s[5] = "*   ||   *";
		s[6] = " --| *|-- ";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[5] = "    ||    ";
		s[6] = "*--| *|--*";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");
 
		s[6] = " --| *|-- ";
		s[7] = "*  |  |  *";

		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		s[6] = "  -| *|-  ";
		s[7] = " / |  | \\ ";
		s[8] = "*   \\/   *";
		
		for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
		//Sleep(1000);
		//system("cls");
		s[7] = " / |  | \\ ";
		s[8] = "/   \\/   \\";
	}
	for (int i = 0; i < ñ; i++) cout << s[i] << "\n"; 
	return 0;
}
