#include <iostream>
#include <string>
#include "unistd.h"

using namespace std;

void dancing (string *firstEl, int col, int t);

int main() {
	string pers[12] = {
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
		"   _||_   ",
	};
	string *pers0 = pers;
	dancing (pers0, 12, 2000);
	
	return 0;
}

void dancing (string *firstEl, int col, int t) {
	string pers[col];
	string *ptpers = pers;
	for (int i = 0; i < col; i++, firstEl++) pers[i] = *firstEl;
	for (int i = 0; i < col; i++) cout << pers[i] << endl;
		
	for (int q = 0; q < 2; q++) {
		pers[6] = " --| *|-- ";
		pers[7] = "/  |  |  \\";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[6] = "  -| *|---";
		pers[7] = " / |  |   ";
		pers[8] = "/   \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[5] = "    ||   /";
		pers[6] = " --| *|-- ";
		pers[7] = "/  |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "   \\__/  /";
		pers[5] = "    ||  / ";
		pers[6] = "  -| *|-  ";
		pers[7] = " / |  |   ";
		pers[8] = "/   \\/    ";
		usleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "   \\__/  *";
		pers[5] = "    ||  / ";
		pers[6] = " --| *|-  ";
		pers[7] = "/  |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "   \\__/  /";
		pers[5] = "    ||  / ";
		pers[6] = "---| *|-  ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "   \\__/  *";
		pers[5] = "\\   ||  / ";
		pers[6] = " --| *|-  ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "\\  \\__/  /";
		pers[5] = " \\  ||  / ";
		pers[6] = "  -| *|-  ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "*  \\__/  *";
		pers[5] = " \\  ||  / ";
		pers[6] = "   | *|   ";
		//pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[4] = "   \\__/   ";
		pers[5] = "*   ||   *";
		pers[6] = " --| *|-- ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[5] = "    ||    ";
		pers[6] = "*--| *|--*";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[6] = " --| *|-- ";
		pers[7] = "*  |  |  *";
		pers[8] = "    \\/    ";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[6] = "  -| *|-  ";
		pers[7] = " / |  | \\ ";
		pers[8] = "*   \\/   *";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[8] = "/   \\/   \\";
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) cout << pers[i] << endl;	
		usleep(t);
	}
	//system("cls");
	return;
}
