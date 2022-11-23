#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

void rightLeft (string *firstEl, int col, int t);
void dancing (string *firstEl, int col, int t);
void jump (string *firstEl, int col, int t);
void ball (string *firstEl, int col, int t);
void show (string *firstEl, int col, int t);

int main() {
	char uChoice;
	string pers[20] = {
		"****************************************",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"*                                      *",
		"    /\\    ",
		"   |oo|   ",
		"  (|..|)  ",
		"   |--|   ",
		"   \\__/   ",
		"    ||    ",
		"  -|  |-  ",
		" / |  | \\ ",
		"/   \\/   \\",
		"    /\\    ",
		"    ||    ",
		"   _||_   ",
		"****************************************"
	};
	string *pers0 = pers;

	while (1) {
		int size_list = sizeof(pers)/sizeof(pers[0]);
		cout << "Choose animation:" << endl << "Dance: \t\t\t1" << endl
			<< "Run: \t\t\t2" << endl << "Sit down and jump: \t3" << endl
			<< "Throw a ball: \t\t4" << endl << endl << "Enter 5 for exit." << endl <<;
		cin >> uChoice;
		if (uChoice == '1') {
			system("cls");
			dancing(pers0, size_list, 150);
		} else if (uChoice == '2') {
			system("cls");
			rightLeft(pers0, size_list, 80);
		} else if (uChoice == '3') {
			system("cls");
			jump(pers0, size_list, 100);
		} else if (uChoice == '4') {
			system("cls");
			ball(pers0, size_list, 100);
		} else if (uChoice == '5') {
			return 0;
		} else {
			cout << "Bad input.";
			return 0;
		}	
	}
}

void show(string *firstEl, int col, int t) {
	for (int i = 0; i < col; i ++, firstEl ++) cout << *firstEl << endl;
	Sleep(t);
	system("cls");
	return;
}

void ball (string *firstEl, int col, int t) {
	string pers[col], spacesRight = "                            *";
	string *ptpers = pers;
	for (int i = 0; i < col; i ++, firstEl++) ( (i >= 0 && i < 7) || (i == 19) ) ?
		pers[i] = *firstEl : pers[i] = "*" + *firstEl + spacesRight;
	show(ptpers, col, t);
	pers[14] = "* / |  | \\o" + spacesRight;
	pers[15] = "*/   \\/   _" + spacesRight;
	show(ptpers, col, t);
	pers[13] = "*  -|  |- o" + spacesRight;
	pers[14] = "* / |  | \\-" + spacesRight;
	pers[15] = "*/   \\/    " + spacesRight;
	show(ptpers, col, t);
	pers[12] = "*    ||   o" + spacesRight;
	pers[13] = "*  -|  |---" + spacesRight;
	pers[14] = "* / |  |   " + spacesRight;
	show(ptpers, col, t);
	pers[11] = "*   \\__/  o" + spacesRight;
	pers[12] = "*    ||    " + spacesRight;
	pers[13] = "*  -|  |--/" + spacesRight;
	show(ptpers, col, t);
	pers[10] = "*   |--|  o" + spacesRight;
	pers[11] = "*   \\__/   " + spacesRight;
	pers[13] = "*  -|  |---" + spacesRight;
	show(ptpers, col, t);
	pers[9] = "*  (|..|) o" + spacesRight;
	pers[10] = "*   |--|   " + spacesRight;
	pers[13] = "*  -|  |-- " + spacesRight;
	pers[14] = "* / |  |  \\" + spacesRight;
	show(ptpers, col, t);
	pers[8] = "*   |oo|  o" + spacesRight;
	pers[9] = "*  (|..|)  " + spacesRight;
	firstEl -= 10;
	for (int i = 10; i < col-1; i ++, firstEl ++) pers[i] = "*" + *firstEl + spacesRight;
	show(ptpers, col, t);
	pers[7] = "*    /\\   o" + spacesRight;
	pers[8] = "*   |oo|   " + spacesRight;
	show(ptpers, col, t);
	pers[6] = "*        o " + spacesRight;
	pers[7] = "*    /\\    " + spacesRight;
	show(ptpers, col, t);
	pers[5] = "*       o  " + spacesRight;
	pers[6] = "*          " + spacesRight;
	show(ptpers, col, t);
	pers[4] = "*      o   " + spacesRight;
	pers[5] = "*          " + spacesRight;
	show(ptpers, col, t);
	pers[3] = "*     o    " + spacesRight;
	pers[4] = "*          " + spacesRight;
	show(ptpers, col, t);
	pers[3] = "*    o     " + spacesRight;
	show(ptpers, col, t);
	pers[3] = "*          " + spacesRight;
	pers[4] = "*   o      " + spacesRight;
	show(ptpers, col, t);
	pers[4] = "*          " + spacesRight;
	pers[5] = "*  o       " + spacesRight;
	show(ptpers, col, t);
	pers[5] = "*          " + spacesRight;
	pers[6] = "* o        " + spacesRight;
	show(ptpers, col, t);
	pers[6] = "*          " + spacesRight;
	pers[7] = "*o   /\\    " + spacesRight;
	show(ptpers, col, t);
	pers[7] = "*    /\\    " + spacesRight;
	pers[8] = "*o  |oo|   " + spacesRight;
	show(ptpers, col, t);
	pers[8] = "*   |oo|   " + spacesRight;
	pers[9] = "*o (|..|)  " + spacesRight;
	pers[13] = "* --|  |-  " + spacesRight;
	pers[14] = "*/  |  | \\ " + spacesRight;
	pers[15] = "*    \\/   \\" + spacesRight;
	show(ptpers, col, t);
	pers[9] = "*  (|..|)  " + spacesRight;
	pers[10] = "*o  |--|   " + spacesRight;
	pers[13] = "*---|  |-  " + spacesRight;
	pers[14] = "*   |  | \\ " + spacesRight;
	show(ptpers, col, t);
	pers[10] = "*   |--|   " + spacesRight;
	pers[11] = "*o  \\__/   " + spacesRight;
	pers[13] = "*\\--|  |-  " + spacesRight;
	show(ptpers, col, t);
	pers[11] = "*   \\__/   " + spacesRight;
	pers[12] = "*o   ||    " + spacesRight;
	pers[13] = "*---|  |-  " + spacesRight;
	show(ptpers, col, t);
	pers[12] = "*    ||    " + spacesRight;
	pers[13] = "*o -|  |-  " + spacesRight;
	pers[14] = "*-/ |  | \\ " + spacesRight;
	show(ptpers, col, t);
	pers[13] = "*  -|  |-  " + spacesRight;
	pers[14] = "*o/ |  | \\ " + spacesRight;
	pers[15] = "*_   \\/   \\" + spacesRight;
	show(ptpers, col, t);
	pers[14] = "* / |  | \\ " + spacesRight;
	pers[15] = "*/   \\/   \\" + spacesRight;
	show(ptpers, col, t);
	system("cls");
	return;
}

void jump (string *firstEl, int col, int t) {
	string pers[col], spacesRight = "                            *";
	string *ptpers = pers;
	for (int i = 0; i < col; i ++, firstEl++) ( (i >= 0 && i < 7) || (i == 19) ) ?
		pers[i] = *firstEl : pers[i] = "*" + *firstEl + spacesRight;
	firstEl -= 20;
	for (int i = 0; i < col; i++) cout << pers[i] << endl;
	string emptyStr = pers[1];
	string a = pers[7], b = pers[8], c = pers[9], d = pers[10], e = pers[11], f = pers[12], 
		g = pers[13], h = pers[14], ii = pers[15], k = pers[16], l = pers[17], m = pers[18];
	
	pers[7] = emptyStr;
	pers[8] = emptyStr;
	pers[9] = emptyStr;
	pers[10] = a;
	pers[11] = b;
	pers[12] = c;
	pers[13] = d;
	pers[14] = e;
	pers[15] = f;
	pers[16] = g;
	pers[17] = h;
	pers[18] = "*   _\\/_   " + spacesRight;
	Sleep(t);
	
	for (int q = 18; q >= 14; q --) {
		system("cls");
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[q-11] = a;
		pers[q-10] = b;
		pers[q-9] = c;
		pers[q-8] = d;
		pers[q-7] = e;
		pers[q-6] = f;
		pers[q-5] = g;
		pers[q-4] = h;
		pers[q-3] = ii;
		pers[q-2] = k;
		pers[q-1] = l;
		pers[q] = "*    ||    " + spacesRight;
		if (q != 18) pers[q+1] = emptyStr;
		Sleep(t);
	}
	system("cls");
	for (int q = 13; q <= 16; q ++) {
		pers[q-11] = emptyStr;
		for (int i = 0; i < col; i++) cout << pers[i] << endl;
		pers[q-9] = a;
		pers[q-8] = b;
		pers[q-7] = c;
		pers[q-6] = d;
		pers[q-5] = e;
		pers[q-4] = f;
		pers[q-3] = g;
		pers[q-2] = h;
		pers[q-1] = ii;
		pers[q] = k;
		pers[q+1] = l;
		pers[q+2] = "*    ||    " + spacesRight;
		Sleep(t);
		system("cls");
	}
	pers[6] = emptyStr;
	pers[7] = emptyStr;
	pers[8] = emptyStr;
	pers[9] = emptyStr;
	pers[10] = a;
	pers[11] = b;
	pers[12] = c;
	pers[13] = d;
	pers[14] = e;
	pers[15] = f;
	pers[16] = g;
	pers[17] = h;
	pers[18] = "*   _\\/_   " + spacesRight;
	show(ptpers, col, t);
	for (int i = 0; i < col; i ++, firstEl++) ( (i >= 0 && i < 7) || (i == 19) ) ?
		pers[i] = *firstEl : pers[i] = "*" + *firstEl + spacesRight;
	show(ptpers, col, t);
	return;
}

void dancing (string *firstEl, int col, int t) {
	string pers[col], spacesRight = "                            *";
	string *ptpers = pers;
	for (int i = 0; i < col; i++, firstEl++) ( (i >= 0 && i < 7) || (i == 19) ) ? pers[i] = *firstEl
		: pers[i] = "*" + *firstEl  + spacesRight;
	for (int i = 0; i < col; i++) ((i >= 0 && i < 7) || i == 19) ? cout << pers[i] << endl :
		cout << pers[i] << endl;
		
	for (int q = 0; q < 2; q++) {
		pers[13] = "* --|  |-- " + spacesRight;
		pers[14] = "*/  |  |  \\" + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "*  -|  |---" + spacesRight;
		pers[14] = "* / |  |   " + spacesRight;
		pers[15] = "*/   \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[12] = "*    ||   /" + spacesRight;
		pers[13] = "* --|  |-- " + spacesRight;
		pers[14] = "*/  |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  /" + spacesRight;
		pers[12] = "*    ||  / " + spacesRight;
		pers[13] = "*  -|  |-  " + spacesRight;
		pers[14] = "* / |  |   " + spacesRight;
		pers[15] = "*/   \\/    " + spacesRight;
		Sleep(t);
		system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  *" + spacesRight;
		pers[12] = "*    ||  / " + spacesRight;
		pers[13] = "* --|  |-  " + spacesRight;
		pers[14] = "*/  |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  /" + spacesRight;
		pers[12] = "*    ||  / " + spacesRight;
		pers[13] = "*---|  |-  " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  *" + spacesRight;
		pers[12] = "*\\   ||  / " + spacesRight;
		pers[13] = "* --|  |-  " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*\\  \\__/  /" + spacesRight;
		pers[12] = "* \\  ||  / " + spacesRight;
		pers[13] = "*  -|  |-  " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "**  \\__/  *" + spacesRight;
		pers[12] = "* \\  ||  / " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/   " + spacesRight;
		pers[12] = "**   ||   *" + spacesRight;
		pers[13] = "* --|  |-- " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[12] = "*    ||    " + spacesRight;
		pers[13] = "**--|  |--*" + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "* --|  |-- " + spacesRight;
		pers[14] = "**  |  |  *" + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "*  -|  |-  " + spacesRight;
		pers[14] = "* / |  | \\ " + spacesRight;
		pers[15] = "**   \\/   *" + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[15] = "*/   \\/   \\" + spacesRight;
		Sleep(t);
		system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}	
	}
	system("cls");
	return;
}

void rightLeft (string *firstEl, int col, int t) {
	string pers[col];
	for (int i = 0; i < col; i++, firstEl++) pers[i] = *firstEl;
	
	string spaces = "";
	for (int i = 11; i < 39; i++) {
		for (int step = 0; step < 3; step ++) {
			if (step == 1) {
				pers[17] = "    | \\   ";
				pers[18] = "   _|  \\_ ";
				
				int copy_i = i-11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i --;
				}
				string spaces_right = "";
				for (int p = 40-i-1; p > 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				
				for (int q = 0; q < 20; q++) {
					( (q >= 0 && q < 7) || (q == 19) ) ? cout << pers[q] << endl :
						cout << "*" + spaces + pers[q] + spaces_right << endl;
				}
				Sleep(t);
				system("cls");
				spaces = "";
			} else if (step == 0) {
				pers[17] = "    ||    ";
				pers[18] = "   _||_   ";
				
				int copy_i = i-11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i --;
				}
				string spaces_right = "";
				for (int p = 40-i-1; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				
				for (int q = 0; q < 20; q++) {
					( (q >= 0 && q < 7) || (q == 19) ) ? cout << pers[q] << endl :
						cout << "*" + spaces + pers[q] + spaces_right << endl;
				}
				Sleep(t);
				system("cls");
				spaces = "";
				
			} else {
				int copy_i = i-10;
				while (copy_i != 0) {
					spaces += " ";
					copy_i --;
				}
				string spaces_right = "";
				for (int p = 40-i-2; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				pers[17] = "   / |    ";
				pers[18] = " _/  |_   ";
				for (int q = 0; q < 20; q++) {
					( (q >= 0 && q < 7) || (q == 19) ) ? cout << pers[q] << endl :
						cout << "*" + spaces + pers[q] + spaces_right << endl;
				}
				Sleep(t);
				system("cls");
				spaces = "";
			}
		}
	}
	// MAKE GO BACK BY STEP
	for (int i = 38; i != 11; i-- ) {
		for (int step = 0; step < 3; step ++) {
			if (step == 1) {
				pers[17] = "    | \\   ";
				pers[18] = "   _|  \\_ ";
				
				int copy_i = i-11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i --;
				}
				string spaces_right = "";
				for (int p = 40-i-1; p > 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				for (int q = 0; q < 20; q++) {
					( (q >= 0 && q < 7) || (q == 19) ) ? cout << pers[q] << endl :
						cout << "*" + spaces + pers[q] + spaces_right << endl;
				}
				Sleep(t);
				system("cls");
				spaces = "";		
			} else if (step == 0) {
				int copy_i = i-11;
				while (copy_i != 0) {
					spaces += " ";
					copy_i --;
				}
				string spaces_right = "";
				for (int p = 40-i-1; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				pers[17] = "    ||    ";
				pers[18] = "   _||_   ";
				for (int q = 0; q < 20; q++) {
					( (q >= 0 && q < 7) || (q == 19) ) ? cout << pers[q] << endl :
						cout << "*" + spaces + pers[q] + spaces_right << endl;
				}
				Sleep(t);
				system("cls");
				spaces = "";
				
			} else {
				int copy_i = i-12;
				while (copy_i != 0) {
					spaces += " ";
					copy_i --;
				}
				string spaces_right = "";
				for (int p = 40-i; p != 0; p--) {
					spaces_right += " ";
				}
				spaces_right += "*";
				pers[17] = "   / |    ";
				pers[18] = " _/  |_   ";
				for (int q = 0; q < 20; q++) {
					( (q >= 0 && q < 7) || (q == 19) ) ? cout << pers[q] << endl :
						cout << "*" + spaces + pers[q] + spaces_right << endl;
				}
				Sleep(t);
				system("cls");
				spaces = "";
			}
		}
	}
	return;
}
