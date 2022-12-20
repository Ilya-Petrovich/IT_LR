#include <iostream>
//#include "windows.h"

using namespace std;

void dance(string* firstCond, int t);

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
	string* personaj = pers;// создаем указатель на массив строк для дальн передачи в функцию

	dance(personaj, 750);// наш персонаж танцует

	return 0;
}

void dance(string* firstCond, int t) {
	string pers[12]; //создаем новый массив строк

	// инициализируем новый массив
	for (int i = 0; i < 12; i++, firstCond++) {
		pers[i] = *firstCond;
	}

	// выводим первоначальное состояние
	for (int i = 0; i < 12; i++) cout << pers[i] << endl;

	// работаем уже с туловищем
	for (int q = 0; q < 2; q++) {

		pers[6] = " --| *|-- ";
		pers[7] = "/  |  |  \\";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[6] = "  -| *|---";
		pers[7] = " / |  |   ";
		pers[8] = "/   \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[5] = "    ||   /";
		pers[6] = " --| *|-- ";
		pers[7] = "/  |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "   \\__/  /";
		pers[5] = "    ||  / ";
		pers[6] = "  -| *|-  ";
		pers[7] = " / |  |   ";
		pers[8] = "/   \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "   \\__/  *";
		pers[5] = "    ||  / ";
		pers[6] = " --| *|-  ";
		pers[7] = "/  |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "   \\__/  /";
		pers[5] = "    ||  / ";
		pers[6] = "---| *|-  ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "   \\__/  *";
		pers[5] = "\\   ||  / ";
		pers[6] = " --| *|-  ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "\\  \\__/  /";
		pers[5] = " \\  ||  / ";
		pers[6] = "  -| *|-  ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "*  \\__/  *";
		pers[5] = " \\  ||  / ";
		pers[6] = "  -| *|-  ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[4] = "   \\__/   ";
		pers[5] = "*   ||   *";
		pers[6] = " --| *|-- ";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[5] = "    ||    ";
		pers[6] = "*--| *|--*";
		pers[7] = "   |  |   ";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[6] = " --| *|-- ";
		pers[7] = "*  |  |  *";
		pers[8] = "    \\/    ";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[6] = "  -| *|-  ";
		pers[7] = " / |  | \\ ";
		pers[8] = "*   \\/   *";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		pers[8] = "/   \\/   \\";
		//Sleep(t);
		//system("cls");
		for (int i = 0; i < 12; i++) cout << pers[i] << endl;

		//Sleep(t);
	}
	//system("cls");
	return;
}