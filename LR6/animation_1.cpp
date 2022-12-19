#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;
int main() {
	const int n = 12;
	string mas[n] = {
		"    /\\    " ,
		"   |oo|   " ,
		"  (|..|)  " ,
		"   |--|   " ,
		"   \\__/   " ,
		"    ||    " ,
		"  -| *|-   " ,
		" / |  | \\ " ,
		"/   \\/   \\",
		"    /\\    ",
		"    ||    ",
		"   _||_   " };
	for (int i = 0; i < n; i++)
	{
		cout << mas[i] << endl;
	};
	for (int i = 0; i < 2; i++) {
		//Sleep(300);
		//system("cls");
		mas[6] = " --| *|-- ";
		mas[7] = "/  |  |  \\";
		mas[8] = "    \\/    ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//system("cls");
		//Sleep(300);
		//system("cls");
		mas[6] = "  -| *|---";
		mas[7] = " / |  |   ";
		mas[8] = "/   \\/    ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[5] = "    ||   /";
		mas[6] = " --| *|-- ";
		mas[7] = "/  |  |   ";
		mas[8] = "    \\/    ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(400);
		//system("cls");
		mas[4] = "   \\__/  /";
		mas[5] = "    ||  / ";
		mas[6] = "  -| *|-  ";
		mas[7] = " / |  |   ";
		mas[8] = "/   \\/    ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[4] = "   \\__/  *";
		mas[6] = " --| *|-  ";
		mas[7] = "/  |  |   ";
		mas[8] = "    \\/    ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[4] = "   \\__/  /";
		mas[6] = "---| *|-  ";
		mas[7] = "   |  |   ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[4] = "   \\__/  *";
		mas[5] = "\\   ||  / ";
		mas[6] = " --| *|-  ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[4] = "\\  \\__/  /";
		mas[5] = " \\  ||  / ";
		mas[6] = "  -| *|-  ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(400);
		//system("cls");
		mas[4] = "*  \\__/  *";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[4] = "   \\__/   ";
		mas[5] = "*   ||   *";
		mas[6] = " --| *|-- ";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(400);
		//system("cls");
		mas[5] = "    ||    ";
		mas[6] = "*--| *|--*";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[6] = " --| *|-- ";
		mas[7] = "*  |  |  *";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[6] = "  -| *|-  ";
		mas[7] = " / |  | \\ ";
		mas[8] = "*   \\/   *";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
		//Sleep(300);
		//system("cls");
		mas[8] = "/   \\/   \\";
		for (int i = 0; i < n; i++) {
			cout << mas[i] << endl;
		}
	}
	return 0;
}



