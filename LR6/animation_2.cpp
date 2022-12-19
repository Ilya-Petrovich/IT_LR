#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	int choice, t = 70, k = 0;
	string filled = "***************************************";
	string bordered = "*                                     *";
	string m[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
	bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled, }, p[12] = {
		"    /\\    ",
		"   |00|   ",
		"  (|..|)  ",
		"   |__|   ",
		"   \\__/   ",
		"    ||    ",
		"  -| *|-  ",
		" / |  | \\ ",
		"/   \\/   \\",
		"    /\\    ",
		"    ||    ",
		"   _||_   " }
		, o[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
		bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled }, o1[12] = {
		"    /\\    ",
		"   |00|   ",
		"  (|..|)  ",
		"   |__|   ",
		"   \\__/   ",
		"    ||    ",
		"  -| *|-  ",
		" / |  | \\ ",
		"/   \\/   \\",
		"    /\\    ",
		"    |\\    ",
		"   _| \\ _ " }, o2[12] = {
		"    /\\    ",
		"   |00|   ",
		"  (|..|)  ",
		"   |__|   ",
		"   \\__/   ",
		"    ||    ",
		"  -| *|-  ",
		" / |  | \\ ",
		"/   \\/   \\",
		"    /\\    ",
		"    /|    ",
		"  _/ |_   " }, j1[12] = {
			"          ",
			"    /\\    ",
			"   |00|   ",
			"  (|..|)  ",
			"   |__|   ",
			"   \\__/   ",
			"    ||    ",
			"  -| *|-  ",
			" / |  | \\ ",
			"/   \\/   \\",
			"    /\\    ",
			"   _\\/_   ", }, f[12] = {
				"    /\\    ",
				"   |00|   ",
				"  (|..|)  ",
				"   |__|   ",
				"   \\__/   ",
				"    ||    ",
				"  -| *|-  ",
				" / |  | \\ ",
				"/   \\/   \\",
				"    /\\    ",
				"    ||    ",
				"    ||    " };;


	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			if (p[i][j] != ' ') {
				o[i + 7][j + 1] = p[i][j];
			}
		}
	}


	while (k == 0) {

		std::cout << "Choose animation:" << std::endl;
		std::cout << "Dance: \t\t\t1" << std::endl;
		std::cout << "Run: \t\t\t2" << std::endl;
		std::cout << "Sit down and jump: \t3" << std::endl;
		std::cout << "Throw a ball: \t\t4" << std::endl << std::endl;
		std::cout << "Enter 5 for exit." << std::endl;
		std::cin >> choice;
		system("cls");
		if (choice == 5) {
			k = 1;
		}
		if (choice == 1) {
			for (int i = 0; i < 14; i++) {
				if (i == 0) {
					k = 0;
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*  / |  | \\                            *" << endl;
					cout << "* /   \\/   \\                           *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				else if (i == 1) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "* /  |  |  \\                           *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 2) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*   -| *|---                           *" << endl;
					cout << "*  / |  |                              *" << endl;
					cout << "* /   \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 3) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||   /                           *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "* /  |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 4) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  /                           *" << endl;
					cout << "*     ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*  / |  |                              *" << endl;
					cout << "* /   \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 5) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  *                           *" << endl;
					cout << "*     ||  /                            *" << endl;
					cout << "*  --| *|-                             *" << endl;
					cout << "* /  |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 6) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  /                           *" << endl;
					cout << "*     ||  /                            *" << endl;
					cout << "* ---| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 7) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  *                           *" << endl;
					cout << "*  \\  ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 8) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "* \\  \\__/  /                           *" << endl;
					cout << "*  \\  ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 9) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "* *  \\__/  *                           *" << endl;
					cout << "*  \\  ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 10) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "* *   ||   *                           *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 11) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "* *--| *|--*                           *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 12) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "* *  |  |  *                           *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 13) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*  / |  | \\                            *" << endl;
					cout << "* *   \\/   *                           *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
			}

			cout << "****************************************" << endl;
			cout << "*                                      *" << endl;
			cout << "*                                      *" << endl;
			cout << "*                                      *" << endl;
			cout << "*                                      *" << endl;
			cout << "*                                      *" << endl;
			cout << "*                                      *" << endl;
			cout << "*     /\\                               *" << endl;
			cout << "*    |00|                              *" << endl;
			cout << "*   (|..|)                             *" << endl;
			cout << "*    |__|                              *" << endl;
			cout << "*    \\__/                              *" << endl;
			cout << "*     ||                               *" << endl;
			cout << "*   -| *|-                             *" << endl;
			cout << "*  / |  | \\                            *" << endl;
			cout << "* /   \\/   \\                           *" << endl;
			cout << "*     /\\                               *" << endl;
			cout << "*     ||                               *" << endl;
			cout << "*    _||_                              *" << endl;
			cout << "****************************************" << endl;
			Sleep(t);
			system("cls");

			for (int i = 0; i < 14; i++) {
				if (i == 0) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "* /  |  |  \\                           *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 1) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*   -| *|---                           *" << endl;
					cout << "*  / |  |                              *" << endl;
					cout << "* /   \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 2) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||   /                           *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "* /  |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 3) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  /                           *" << endl;
					cout << "*     ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*  / |  |                              *" << endl;
					cout << "* /   \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 4) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  *                           *" << endl;
					cout << "*     ||  /                            *" << endl;
					cout << "*  --| *|-                             *" << endl;
					cout << "* /  |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 5) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  /                           *" << endl;
					cout << "*     ||  /                            *" << endl;
					cout << "* ---| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 6) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/  *                           *" << endl;
					cout << "* \\   ||  /                            *" << endl;
					cout << "*  --| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 7) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "* \\  \\__/  /                           *" << endl;
					cout << "*  \\  ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 8) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "* *  \\__/  *                           *" << endl;
					cout << "*  \\  ||  /                            *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 9) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "* *   ||   *                           *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 10) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "* *--| *|--*                           *" << endl;
					cout << "*    |  |                              *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 11) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*  --| *|--                            *" << endl;
					cout << "* *  |  |  *                           *" << endl;
					cout << "*     \\/                               *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 12) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*  / |  | \\                            *" << endl;
					cout << "* *   \\/   *                           *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
				if (i == 13) {
					cout << "****************************************" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*                                      *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*    |00|                              *" << endl;
					cout << "*   (|..|)                             *" << endl;
					cout << "*    |__|                              *" << endl;
					cout << "*    \\__/                              *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*   -| *|-                             *" << endl;
					cout << "*  / |  | \\                            *" << endl;
					cout << "* /   \\/   \\                           *" << endl;
					cout << "*     /\\                               *" << endl;
					cout << "*     ||                               *" << endl;
					cout << "*    _||_                              *" << endl;
					cout << "****************************************" << endl;
					Sleep(t);
					system("cls");
				}
			}
		}
		if (choice == 2) {
			for (int z = 1; z < 29; z++) {
				if (z % 3 == 1) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + z] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				else if (z % 3 == 2) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (o1[i][j] != ' ') {
								o[i + 7][j + z] = o1[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {

						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (z % 3 == 0) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (o2[i][j] != ' ') {
								o[i + 7][j + z] = o2[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
			}
			for (int z = 27; z >= 1; z--) {
				if (z % 3 == 1) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + z] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				else if (z % 3 == 2) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (o1[i][j] != ' ') {
								o[i + 7][j + z - 1] = o1[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (z % 3 == 0) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (o2[i][j] != ' ') {
								o[i + 7][j + z] = o2[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
			}
		}
		if (choice == 3) {
			for (int r = 0; r < 6; r++) {
				if (r == 0 or r == 5) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (r == 1 or r == 4) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (j1[i][j] != ' ') {
								o[i + 7][j + 1] = j1[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}

					Sleep(t);
					system("cls");


				}
				if (r == 2) {
					for (int u = 0; u < 5; u++) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (f[i][j] != ' ') {
									o[i + 7 - u][j + 1] = f[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}

						Sleep(t);
						system("cls");


					}
				}
				if (r == 3) {
					for (int u = 3; u > -1; u--) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (f[i][j] != ' ') {
									o[i + 7 - u][j + 1] = f[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}

						Sleep(t);
						system("cls");


					}
				}
			}
		}
		if (choice == 4) {
			for (int i = 0; i < 25; i++) {
				if (i == 0) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (i == 2) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					p[8][9] = '-'; o[14][10] = 'o';
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (i == 3) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					p[7][9] = '-'; o[13][10] = 'o'; p[8][9] = ' ';
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (i == 4) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					p[6][9] = '-'; o[12][10] = 'o'; p[7][9] = ' '; p[7][8] = ' '; p[6][8] = '-';
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (i == 5) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					p[6][9] = '/'; o[11][10] = 'o'; o[12][10] = ' ';
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (i == 6) {
					for (int u = 2; u < 6; u++) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}
						if (u == 1) {
							p[6][9] = '-';
						}
						if (u == 2) {
							p[6][9] = ' '; p[7][9] = '\\';
						}
						if (u == 3) {
							p[7][9] = ' '; p[8][9] = '\\'; p[7][8] = '\\'; p[6][8] = ' ';
						}
						o[12 - u][10] = 'o'; o[12 - u + 1][10] = ' ';
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (p[i][j] != ' ') {
									o[i + 7][j + 1] = p[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}
						Sleep(t);
						system("cls");
					}
				}

				if (i == 7) {
					for (int u = 2; u < 6; u++) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}

						o[8 - u][10 - u + 1] = 'o'; o[8 - u + 1][10 - u + 1] = ' ';
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (p[i][j] != ' ') {
									o[i + 7][j + 1] = p[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}
						Sleep(t);
						system("cls");
					}
				}
				if (i == 8) {
					for (int i = 0; i < 20; i++) {
						if (o[i] != m[i]) {
							o[i] = m[i];
						}
					}
					o[3][6] = ' '; o[3][5] = 'o';
					for (int i = 0; i < 12; i++) {
						for (int j = 0; j < 10; j++) {
							if (p[i][j] != ' ') {
								o[i + 7][j + 1] = p[i][j];
							}
						}
					}
					for (int i = 0; i < 20; i++) {
						cout << o[i] << endl;
					}
					Sleep(t);
					system("cls");
				}
				if (i == 9) {
					for (int y = 2; y < 6; y++) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}

						o[3 + y - 1][5 - y + 1] = 'o'; o[3 + y - 1][6 - y + 1] = ' ';
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (p[i][j] != ' ') {
									o[i + 7][j + 1] = p[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}
						Sleep(t);
						system("cls");
					}
				}
				if (i == 10) {
					for (int u = 0; u < 6; u++) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}
						if (u == 1) {
							p[6][1] = '-'; p[7][0] = '/'; p[7][1] = ' '; p[8][0] = ' ';
						}
						if (u == 3) {
							p[6][0] = '\\'; p[6][1] = '-'; p[7][0] = ' '; p[7][1] = ' ';
						}
						if (u == 2) {
							p[6][0] = '-'; p[7][0] = ' ';
						}
						if (u == 4) {
							p[6][0] = '-'; p[7][0] = ' ';
						}
						if (u == 5) {
							p[6][0] = ' '; p[7][0] = '-';
						}

						o[8 + u][1] = 'o'; o[8 + u - 1][1] = ' ';
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (p[i][j] != ' ') {
									o[i + 7][j + 1] = p[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}
						Sleep(t);
						system("cls");
					}

				}
				if (i == 11) {
					for (int a = 0; a < 2; a++) {
						for (int i = 0; i < 20; i++) {
							if (o[i] != m[i]) {
								o[i] = m[i];
							}
						}
						if (a == 0) {
							o[14][1] = 'o'; o[13][1] = ' '; p[8][0] = '-'; p[7][0] = ' '; p[7][1] = '/'; p[6][1] = ' ';
						}

						if (a == 1) {
							p[8][0] = '/';
						}
						for (int i = 0; i < 12; i++) {
							for (int j = 0; j < 10; j++) {
								if (p[i][j] != ' ') {
									o[i + 7][j + 1] = p[i][j];
								}
							}
						}
						for (int i = 0; i < 20; i++) {
							cout << o[i] << endl;
						}
						Sleep(t);
						system("cls");
					}
				}

			}

		}
	}

}












