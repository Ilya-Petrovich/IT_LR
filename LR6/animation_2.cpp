#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <stdio.h>
using namespace std;

void stAnim(string arr[]);
void firstAnim(string arr[]);
void secondAnim(string arr[]);
void thirdAnim(string arr[]);
void fourthAnim(string arr[]);
void fifthAnim(string arr[]);
void sixthAnim(string arr[]);
void seventhAnim(string arr[]);
void eighthAnim(string arr[]);
void ninthAnim(string arr[]);
void tenthAnim(string arr[]);
void eleventhAnim(string arr[]);
void twelfthAnim(string arr[]);
void thirteenthAnim(string arr[]);
void fourteenthAnim(string arr[]);
void menu();
void dance();
void run();
void jump();
void ball();

int main()
{
	//system("cls");
	menu();
	return 0;
}

void menu() {
	int choice;
	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "Throw a ball: \t\t4" << endl << endl;
	cout << "Enter 5 for exit." << endl;
	cin >> choice;
	switch (choice) {
	case 1: dance(); break;
	case 2: run(); break;
	case 3: jump(); break;
	case 4: ball(); break;
	case 5: exit(0);
	}
}

void dance() {
	//system("cls");
	string A[]
	{
		"****************************************",	//0
		"*                                      *",	//1
		"*                                      *",	//2
		"*                                      *",	//3
		"*                                      *",	//4
		"*                                      *",	//5
			"*                                      *",	//6
		"*   ()()                               *",	//7
			"*   ()()                               *",	//8
			"*   ()()                               *",	//9
			"*   |..|                               *",	//10
			"*  \\|  |/                              *",	//11
			"*  /|UU|\\                              *",	//12
			"*  --\\/--                              *",	//13
			"* /  ||  \\                             *",	//14
			"*/   ||   \\                            *",	//15
			"*    /\\                                *",	//16
			"*    ||                                *",	//17
			"*   _||_                               *",	//18
		"****************************************"	//19
	};
	void (*func[14])(string[]) = { firstAnim, secondAnim, thirdAnim, fourthAnim, fifthAnim, sixthAnim, seventhAnim, eighthAnim, ninthAnim, tenthAnim, eleventhAnim, twelfthAnim, thirteenthAnim, fourteenthAnim };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 14; j++) {
			stAnim(A);
			func[j](A);
			//system("cls");
			if (i == 1 && j == 13) stAnim(A);
		}
	}
	menu();
}

void stAnim(string arr[]) {
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << endl;
	}
	//sleep(333);
}

void firstAnim(string arr[]) {
	arr[13] = "* ---\\/---                             *";
	arr[14] = "*/   ||   \\                            *";
	arr[15] = "*    ||                                *";
}

void secondAnim(string arr[]) {
	arr[13] = "*  --\\/----                            *";
	arr[14] = "* /  ||                                *";
	arr[15] = "*/   ||                                *";
}

void thirdAnim(string arr[]) {
	arr[12] = "*  /|UU|\\ /                            *";
	arr[13] = "* ---\\/---                             *";
	arr[14] = "*/   ||                                *";
	arr[15] = "*    ||                                *";
}

void fourthAnim(string arr[]) {
	arr[11] = "*  \\|  |/ /                            *";
	arr[12] = "*  /|UU|\\/                             *";
	arr[13] = "*  --\\/--                              *";
	arr[14] = "* /  ||                                *";
	arr[15] = "*/   ||                                *";
}

void fifthAnim(string arr[]) {
	arr[11] = "*  \\|  |/ *                            *";
	arr[12] = "*  /|UU|\\/                             *";
	arr[13] = "* ---\\/--                              *";
	arr[14] = "*/   ||                                *";
	arr[15] = "*    ||                                *";
}

void sixthAnim(string arr[]) {
	arr[11] = "*  \\|  |/ /                            *";
	arr[13] = "*----\\/--                              *";
	arr[14] = "*    ||                                *";
}

void seventhAnim(string arr[]) {
	arr[11] = "*  \\|  |/ *                            *";
	arr[12] = "*\\ /|UU|\\/                             *";
	arr[13] = "* ---\\/--                              *";
}

void eighthAnim(string arr[]) {
	arr[11] = "*\\ \\|  |/ /                            *";
	arr[12] = "* \\/|UU|\\/                             *";
	arr[13] = "*  --\\/--                              *";
}

void ninthAnim(string arr[]) {
	arr[11] = "** \\|  |/ *                            *";
}

void tenthAnim(string arr[]) {
	arr[11] = "*  \\|  |/                              *";
	arr[12] = "** /|UU|\\ *                            *";
	arr[13] = "* ---\\/---                             *";
}

void eleventhAnim(string arr[]) {
	arr[12] = "*  /|UU|\\                              *";
	arr[13] = "**---\\/---*                            *";
}

void twelfthAnim(string arr[]) {
	arr[13] = "* ---\\/---                             *";
	arr[14] = "**   ||   *                            *";
}

void thirteenthAnim(string arr[]) {
	arr[13] = "*  --\\/--                              *";
	arr[14] = "* /  ||  \\                             *";
	arr[15] = "**   ||   *                            *";
}

void fourteenthAnim(string arr[]) {
	arr[15] = "*/   ||   \\                            *";
}

void run() {
	string A[]
	{
		"****************************************",	//0
		"*                                      *",	//1
		"*                                      *",	//2
		"*                                      *",	//3
		"*                                      *",	//4
		"*                                      *",	//5
			"*                                      *",	//6
		"*   ()()                               *",	//7
			"*   ()()                               *",	//8
			"*   ()()                               *",	//9
			"*   |..|                               *",	//10
			"*  \\|  |/                              *",	//11
			"*  /|UU|\\                              *",	//12
			"*  --\\/--                              *",	//13
			"* /  ||  \\                             *",	//14
			"*/   ||   \\                            *",	//15
			"*    /\\                                *",	//16
			"*    ||                                *",	//17
			"*   _||_                               *",	//18
		"****************************************"	//19
	};
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 40; j++) {
			cout << A[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < 28; i++) {
		//sleep(333);
		//system("cls");
		for (int j = 0; j < 3; j++) {
			//system("cls");
			cout << string(40, '*') << endl;
			for (int j = 0; j < 6; j++) {
				cout << "*                                      *" << endl;;
			}
			switch (j) {
			case 0: {
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   |..|   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  \\|  |/  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  /|UU|\\  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  --\\/--  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << " /  ||  \\ " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "/   ||   \\" << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "    /\\    " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "    | \\   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   _|  \\_ " << string(28 - i, ' ') << "*" << endl;
				cout << string(40, '*') << endl;
				break;
			}
			case 1: {
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   |..|   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  \\|  |/  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  /|UU|\\  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  --\\/--  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << " /  ||  \\ " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "/   ||   \\" << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "    /\\    " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   / |    " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << " _/  |_   " << string(27 - i, ' ') << "*" << endl;
				cout << string(40, '*') << endl;
				break;
			}
			case 2: {
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   |..|   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  \\|  |/  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  /|UU|\\  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  --\\/--  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << " /  ||  \\ " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "/   ||   \\" << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "    /\\    " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "    ||    " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   _||_   " << string(27 - i, ' ') << "*" << endl;
				cout << string(40, '*') << endl;
				break;
			}
			}
			//sleep(333);
		}
	}
	for (int i = 27; i >= 0; i--) {
		//sleep(333);
		//system("cls");
		for (int j = 0; j < 3; j++) {
			//system("cls");
			cout << string(40, '*') << endl;
			for (int j = 0; j < 6; j++) {
				cout << "*                                      *" << endl;;
			}
			switch (j) {
			case 0: {

				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   |..|   " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  \\|  |/  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  /|UU|\\  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "  --\\/--  " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << " /  ||  \\ " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "/   ||   \\" << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "    /\\    " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << "   / |    " << string(27 - i, ' ') << "*" << endl;
				cout << "*" << string(i + 1, ' ') << " _/  |_   " << string(27 - i, ' ') << "*" << endl;
				cout << string(40, '*') << endl;
				break;
			}
			case 1: {
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   |..|   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  \\|  |/  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  /|UU|\\  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  --\\/--  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << " /  ||  \\ " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "/   ||   \\" << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "    /\\    " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "    | \\   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   _|  \\_ " << string(28 - i, ' ') << "*" << endl;
				cout << string(40, '*') << endl;
				break;
			}
			case 2: {
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   |..|   " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  \\|  |/  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  /|UU|\\  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "  --\\/--  " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << " /  ||  \\ " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "/   ||   \\" << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "    /\\    " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "    ||    " << string(28 - i, ' ') << "*" << endl;
				cout << "*" << string(i, ' ') << "   _||_   " << string(28 - i, ' ') << "*" << endl;
				cout << string(40, '*') << endl;
				break;
			}
			}
		}
		//sleep(333);
	}
	menu();
}

void jump() {
	string A[]
	{
		"****************************************",	//0
		"*                                      *",	//1
		"*                                      *",	//2
		"*                                      *",	//3
		"*                                      *",	//4
		"*                                      *",	//5
			"*                                      *",	//6
		"*   ()()                               *",	//7
			"*   ()()                               *",	//8
			"*   ()()                               *",	//9
			"*   |..|                               *",	//10
			"*  \\|  |/                              *",	//11
			"*  /|UU|\\                              *",	//12
			"*  --\\/--                              *",	//13
			"* /  ||  \\                             *",	//14
			"*/   ||   \\                            *",	//15
			"*    /\\                                *",	//16
			"*    ||                                *",	//17
			"*   _||_                               *",	//18
		"****************************************"	//19
	};
	stAnim(A);
	for (int i = 17; i >= 7; i--) A[i] = A[i - 1];				//up
	A[18] = "*   _\\/_                               *";
	stAnim(A);								//1
	for (int i = 7; i < 17; i++) A[i] = A[i + 1];
	A[17] = "*    ||                                *";
	A[18] = "*    ||                                *";
	stAnim(A);								//2
	for (int i = 6; i <= 17; i++) A[i] = A[i + 1];
	A[18] = "*                                      *";
	stAnim(A);								//3
	for (int i = 5; i <= 16; i++) A[i] = A[i + 1];
	A[17] = "*                                      *";
	stAnim(A);								//4
	for (int i = 4; i <= 15; i++) A[i] = A[i + 1];
	A[16] = "*                                      *";
	stAnim(A);								//5
	for (int i = 3; i <= 14; i++) A[i] = A[i + 1];
	A[15] = "*                                      *";
	stAnim(A);								//6
	for (int i = 14; i >= 3; i--) A[i] = A[i - 1];				//down
	A[15] = "*    ||                                *";
	stAnim(A);								//1
	for (int i = 15; i >= 4; i--) A[i] = A[i - 1];
	A[16] = "*    ||                                *";
	stAnim(A);								//2
	for (int i = 16; i >= 5; i--) A[i] = A[i - 1];
	A[17] = "*    ||                                *";
	stAnim(A);								//3
	for (int i = 17; i >= 6; i--) A[i] = A[i - 1];
	A[18] = "*    ||                                *";
	stAnim(A);								//4
	for (int i = 17; i >= 7; i--) A[i] = A[i - 1];
	A[18] = "*   _\\/_                               *";			//5
	stAnim(A);
	for (int i = 7; i <= 16; i++) A[i] = A[i + 1];				//6
	A[17] = "*    ||                                *";
	A[18] = "*   _||_                               *";
	stAnim(A);
	menu();
}
void ball() {
	string A[]
	{
		"****************************************",	//0
		"*                                      *",	//1
		"*                                      *",	//2
		"*                                      *",	//3
		"*                                      *",	//4
		"*                                      *",	//5
			"*                                      *",	//6
		"*   ()()                               *",	//7
			"*   ()()                               *",	//8
			"*   ()()                               *",	//9
			"*   |..|                               *",	//10
			"*  \\|  |/                              *",	//11
			"*  /|UU|\\                              *",	//12
			"*  --\\/--                              *",	//13
			"* /  ||  \\                             *",	//14
			"*/   ||   \\                            *",	//15
			"*    /\\                                *",	//16
			"*    ||                                *",	//17
			"*   _||_                               *",	//18
		"****************************************"	//19
	};
	stAnim(A);
	A[14] = "* /  ||  \\o                            *";
	A[15] = "*/   ||   -                            *";
	stAnim(A);
	A[13] = "*  --\\/-- o                            *";
	A[14] = "* /  ||  \\-                            *";
	A[15] = "*/   ||                                *";
	stAnim(A);
	A[12] = "*  /|UU|\\ o                            *";
	A[13] = "*  --\\/----                            *";
	A[14] = "* /  ||                                *";
	A[15] = "*/   ||                                *";
	stAnim(A);
	A[11] = "*  \\|  |/ o                            *";
	A[12] = "*  /|UU|\\                              *";
	A[13] = "*  --\\/---/                            *";
	stAnim(A);
	A[10] = "*   |..|  o                            *";
	A[11] = "*  \\|  |/                              *";
	A[13] = "*  --\\/----                            *";
	stAnim(A);
	A[9] = "*   ()()  o                            *";
	A[10] = "*   |..|                               *";
	A[11] = "*  \\|  |/                              *";
	A[13] = "*  --\\/---                             *";
	A[14] = "* /  ||   \\                            *";
	stAnim(A);
	A[8] = "*   ()()  o                            *";
	A[9] = "*   ()()                               *";
	A[13] = "*  --\\/--                              *";
	A[14] = "* /  ||  \\                             *";
	A[15] = "*/   ||   \\                            *";
	stAnim(A);
	A[7] = "*   ()()  o                            *";
	A[8] = "*   ()()                               *";
	stAnim(A);
	A[6] = "*        o                             *";
	A[7] = "*   ()()                               *";
	stAnim(A);
	A[5] = "*       o                              *";
	A[6] = "*                                      *";
	stAnim(A);
	A[4] = "*      o                               *";
	A[5] = "*                                      *";
	stAnim(A);
	A[3] = "*     o                                *";
	A[4] = "*                                      *";
	stAnim(A);
	A[3] = "*    o                                 *";
	stAnim(A);
	A[3] = "*                                      *";
	A[4] = "*   o                                  *";
	stAnim(A);
	A[4] = "*                                      *";
	A[5] = "*  o                                   *";
	stAnim(A);
	A[5] = "*                                      *";
	A[6] = "* o                                    *";
	stAnim(A);
	A[6] = "*                                      *";
	A[7] = "*o  ()()                               *";
	stAnim(A);
	A[7] = "*   ()()                               *";
	A[8] = "*o  ()()                               *";
	stAnim(A);
	A[8] = "*   ()()                               *";
	A[9] = "*o  ()()                               *";
	A[13] = "* ---\\/--                              *";
	A[14] = "*/   ||  \\                             *";
	A[15] = "*    ||   \\                            *";
	stAnim(A);
	A[9] = "*   ()()                               *";
	A[10] = "*o  |..|                               *";
	A[13] = "*----\\/--                              *";
	A[14] = "*    ||  \\                             *";
	stAnim(A);
	A[10] = "*   |..|                               *";
	A[11] = "*o \\|  |/                              *";
	A[13] = "*\\---\\/--                              *";
	stAnim(A);
	A[11] = "*  \\|  |/                              *";
	A[12] = "*o /|UU|\\                              *";
	A[13] = "*----\\/--                              *";
	stAnim(A);
	A[12] = "*  /|UU|\\                              *";
	A[13] = "*o --\\/--                              *";
	A[14] = "*-/  ||  \\                             *";
	stAnim(A);
	A[13] = "*  --\\/--                              *";
	A[14] = "*o/  ||  \\                             *";
	A[15] = "*-   ||   \\                            *";
	stAnim(A);
	A[14] = "* /  ||  \\                             *";
	A[15] = "*/   ||   \\                            *";
	stAnim(A);
	menu();
}