#include <iostream>
#include <unistd.h>
using namespace std;

const int b = 12;

int main()
{
	string p[b] = {
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
		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[6] = " --| *|-- ";
		p[7] = "/  |  |  \\";
		p[8]= "    \\/    ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[6] = "  -| *|---";
		p[7] = " / |  |   ";
		p[8] = "/   \\/    ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[5] = "    ||   /";
		p[6] = " --| *|-- ";
		p[7] = "/  |  |   ";
		p[8] = "    \\/    ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "   \\__/  /";
		p[5] = "    ||  / ";
		p[6] = "  -| *|-  ";
		p[7] = " / |  |   ";
		p[8] = "/   \\/    ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "   \\__/  *";
		p[5] = "    ||  / ";
		p[6] = " --| *|-  ";
		p[7] = "/  |  |   ";
		p[8] = "    \\/    ";
 

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "   \\__/  /";
		p[5] = "    ||  / ";
		p[6] = "---| *|-  ";
		p[7] = "   |  |   ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "   \\__/  *";
		p[5] = "\\   ||  / ";
		p[6] = " --| *|-  ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "\\  \\__/  /";
		p[5] = " \\  ||  / ";
		p[6] = "  -| *|-  ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "*  \\__/  *";
		p[5] = " \\  ||  / ";
		p[6] = "  -| *|-  ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[4] = "   \\__/   ";
		p[5] = "*   ||   *";
		p[6] = " --| *|-- ";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[5] = "    ||    ";
		p[6] = "*--| *|--*";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");
 
		p[6] = " --| *|-- ";
		p[7] = "*  |  |  *";

		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");

		p[6] = "  -| *|-  ";
		p[7] = " / |  | \\ ";
		p[8] = "*   \\/   *";
		
		for (int i = 0; i < b; i++) cout << p[i] << "\n"; 
		//Sleep(1000);
		//system("cls");
		p[7] = " / |  | \\ ";
		p[8] = "/   \\/   \\";
	}
	for (int i = 0; i < b; i++) cout << s[i] << "\n"; 
	return 0;
}
