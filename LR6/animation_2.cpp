#include <iostream>
#include <string>
#include "unistd.h"
//#include "windows.h"

using namespace std;

void rightLeft (string *firstEl, int col, int t);
void dancing (string *firstEl, int col, int t);
void jump (string *firstEl, int col, int t);
void ball (string *firstEl, int col, int t);
void show (string *firstEl, int col, int t);

void show_run_right (string *arr, int col, string spacesRight, string spacesLeft, int t);

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
		"  -| *|-  ",
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
			<< "Throw a ball: \t\t4" << endl << endl << "Enter 5 for exit." << endl;
		cin >> uChoice;
		if (uChoice == '1') {
			//system("cls");
			dancing(pers0, size_list, 1000);
		} else if (uChoice == '2') {
			//system("cls");
			rightLeft(pers0, size_list, 1000);
		} else if (uChoice == '3') {
			//system("cls");
			jump(pers0, size_list, 1000);
		} else if (uChoice == '4') {
			//system("cls");
			ball(pers0, size_list, 5000);
		} else {
			return 0;
		}
	}
}

void show(string *firstEl, int col, int t) {
	for (int i = 0; i < col; i ++, firstEl ++) cout << *firstEl << endl;
	usleep(t);
	//Sleep(t);
	//system("cls");
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
	pers[13] = "*  -| *|- o" + spacesRight;
	pers[14] = "* / |  | \\-" + spacesRight;
	pers[15] = "*/   \\/    " + spacesRight;
	show(ptpers, col, t);
	pers[12] = "*    ||   o" + spacesRight;
	pers[13] = "*  -| *|---" + spacesRight;
	pers[14] = "* / |  |   " + spacesRight;
	show(ptpers, col, t);
	pers[11] = "*   \\__/  o" + spacesRight;
	pers[12] = "*    ||    " + spacesRight;
	pers[13] = "*  -| *|--/" + spacesRight;
	show(ptpers, col, t);
	pers[10] = "*   |--|  o" + spacesRight;
	pers[11] = "*   \\__/   " + spacesRight;
	pers[13] = "*  -| *|---" + spacesRight;
	show(ptpers, col, t);
	pers[9] = "*  (|..|) o" + spacesRight;
	pers[10] = "*   |--|   " + spacesRight;
	pers[13] = "*  -| *|-- " + spacesRight;
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
	pers[13] = "* --| *|-  " + spacesRight;
	pers[14] = "*/  |  | \\ " + spacesRight;
	pers[15] = "*    \\/   \\" + spacesRight;
	show(ptpers, col, t);
	pers[9] = "*  (|..|)  " + spacesRight;
	pers[10] = "*o  |--|   " + spacesRight;
	pers[13] = "*---| *|-  " + spacesRight;
	pers[14] = "*   |  | \\ " + spacesRight;
	show(ptpers, col, t);
	pers[10] = "*   |--|   " + spacesRight;
	pers[11] = "*o  \\__/   " + spacesRight;
	pers[13] = "*\\--| *|-  " + spacesRight;
	show(ptpers, col, t);
	pers[11] = "*   \\__/   " + spacesRight;
	pers[12] = "*o   ||    " + spacesRight;
	pers[13] = "*---| *|-  " + spacesRight;
	show(ptpers, col, t);
	pers[12] = "*    ||    " + spacesRight;
	pers[13] = "*o -| *|-  " + spacesRight;
	pers[14] = "*-/ |  | \\ " + spacesRight;
	show(ptpers, col, t);
	pers[13] = "*  -| *|-  " + spacesRight;
	pers[14] = "*o/ |  | \\ " + spacesRight;
	pers[15] = "*_   \\/   \\" + spacesRight;
	show(ptpers, col, t);
	pers[14] = "* / |  | \\ " + spacesRight;
	pers[15] = "*/   \\/   \\" + spacesRight;
	show(ptpers, col, t);
	//system("cls");
	return;
}

void jump (string *firstEl, int col, int t) {
	string pers[col], spacesRight = "                            *";
	string *ptpers = pers;
	for (int i = 0; i < col; i ++, firstEl++) ( (i >= 0 && i < 7) || (i == 19) ) ?
		pers[i] = *firstEl : pers[i] = "*" + *firstEl + spacesRight;
	firstEl -= 20;

	show (ptpers, col, t);
	string emptyStr = pers[1];
	string a = pers[7], b = pers[8], c = pers[9], d = pers[10], e = pers[11], f = pers[12], 
		g = pers[13], h = pers[14], ii = pers[15], k = pers[16], l = pers[17], m = pers[18];
	
	pers[6] = emptyStr;
	pers[7] = emptyStr;
	pers[8] = emptyStr;
	pers[9] = a;
	pers[10] = b;
	pers[11] = c;
	pers[12] = d;
	pers[13] = e;
	pers[14] = f;
	pers[15] = g;
	pers[16] = h;
	pers[17] = "*    /\\    " + spacesRight;
	pers[18] = "*   _\\/_   " + spacesRight;
	for (int q = 18; q >= 14; q --) {
		show (ptpers, col, t);
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
	}
	show(ptpers, col, t);
	for (int q = 13; q <= 16; q ++) {
		pers[q-11] = emptyStr;
		show (ptpers, col, t);
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
	}
	//
	pers[6] = emptyStr;
	pers[7] = a;
	pers[8] = b;
	pers[9] = c;
	pers[10] = d;
	pers[11] = e;
	pers[12] = f;
	pers[13] = g;
	pers[14] = h;
	pers[15] = ii;
	pers[16] = k;
	pers[17] = l;
	pers[18] = "*    ||    " + spacesRight;
	show (ptpers, col, t);
	pers[6] = emptyStr;
	pers[7] = emptyStr;
	pers[8] = emptyStr;
	pers[9] = a;
	pers[10] = b;
	pers[11] = c;
	pers[12] = d;
	pers[13] = e;
	pers[14] = f;
	pers[15] = g;
	pers[16] = h;
	pers[17] = "*    /\\    " + spacesRight;
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
		pers[13] = "* --| *|-- " + spacesRight;
		pers[14] = "*/  |  |  \\" + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "*  -| *|---" + spacesRight;
		pers[14] = "* / |  |   " + spacesRight;
		pers[15] = "*/   \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[12] = "*    ||   /" + spacesRight;
		pers[13] = "* --| *|-- " + spacesRight;
		pers[14] = "*/  |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  /" + spacesRight;
		pers[12] = "*    ||  / " + spacesRight;
		pers[13] = "*  -| *|-  " + spacesRight;
		pers[14] = "* / |  |   " + spacesRight;
		pers[15] = "*/   \\/    " + spacesRight;
		usleep(t);
		//system("cls");

		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  *" + spacesRight;
		pers[12] = "*    ||  / " + spacesRight;
		pers[13] = "* --| *|-  " + spacesRight;
		pers[14] = "*/  |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  /" + spacesRight;
		pers[12] = "*    ||  / " + spacesRight;
		pers[13] = "*---| *|-  " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/  *" + spacesRight;
		pers[12] = "*\\   ||  / " + spacesRight;
		pers[13] = "* --| *|-  " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*\\  \\__/  /" + spacesRight;
		pers[12] = "* \\  ||  / " + spacesRight;
		pers[13] = "*  -| *|-  " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "**  \\__/  *" + spacesRight;
		pers[12] = "* \\  ||  / " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		//pers[16] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[11] = "*   \\__/   " + spacesRight;
		pers[12] = "**   ||   *" + spacesRight;
		pers[13] = "* --| *|-- " + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[12] = "*    ||    " + spacesRight;
		pers[13] = "**--| *|--*" + spacesRight;
		pers[14] = "*   |  |   " + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "* --| *|-- " + spacesRight;
		pers[14] = "**  |  |  *" + spacesRight;
		pers[15] = "*    \\/    " + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[13] = "*  -| *|-  " + spacesRight;
		pers[14] = "* / |  | \\ " + spacesRight;
		pers[15] = "**   \\/   *" + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}
		pers[15] = "*/   \\/   \\" + spacesRight;
		usleep(t);
		//system("cls");
		
		for (int i = 0; i < col; i++) {
			cout << pers[i] << endl;
		}	
	}
	//system("cls");
	return;
}


void show_run_right (string *arr, int col, string spacesRight, string spacesLeft, int t) {
	for (int i = 0; i < col; i ++) {
		if ( (i<7) || (i == 19) ) cout << arr[i] << endl;
		else cout << spacesLeft << arr[i] << spacesRight;
	}
	usleep(t);
	return;
}
void rightLeft (string *firstEl, int col, int t) {
	string pers[col];
	for (int i = 0; i < col; i++, firstEl++) pers[i] = *firstEl;
	for (int i = 0; i < col; i ++) {
		if ((i < 7) || (i == 19)) cout << pers[i] << endl;
		else {
			cout << "*" << pers[i];
			for (int i = 0; i < 28; i ++) cout << " ";
			cout << "*\n";
		}
	}
	usleep(t);
	//system("cls");
	
	// right
	for (int i = 0; i < 28; i ++) {
		string spacesLeft = "*";
		for (int q = 0; q < i; q ++) spacesLeft += " ";
		for (int step = 0; step < 3; step ++) {
			if (step == 0) {
				pers[17] = "    | \\   ";
				pers[18] = "   _|  \\_ ";
				string spacesRight = "";
				for (int z = 0; z < (39-10-(i+1)); z ++) spacesRight += " ";
				spacesRight += "*\n";
				show_run_right (pers, col, spacesRight, spacesLeft, t);
			} else if (step == 1) {
				spacesLeft += " ";
				pers[17] = "   / |    ";
				pers[18] = " _/  |_   ";
				string spacesRight = "";
				for (int z = 0; z < (39-10-(i+1)-1); z ++) spacesRight += " ";
				spacesRight += "*\n";
				show_run_right (pers, col, spacesRight, spacesLeft, t);
			} else {
				pers[17] = "    ||    ";
				pers[18] = "   _||_   ";
				string spacesRight = "";
				for (int z = 0; z < (39-10-(i+1)-1); z ++) spacesRight += " ";
				spacesRight += "*\n";
				show_run_right (pers, col, spacesRight, spacesLeft, t);
			}
		}
	}
	// left ||||| ||||| 
	for (int i = 28; i > 0; i --) {
		string spacesLeft = "*";
		for (int q = 0; q < i; q ++) spacesLeft += " ";
		for (int step = 0; step < 3; step ++) {
			if (step == 0) {
				pers[17] = "   / |    ";
				pers[18] = " _/  |_   ";
				string spacesRight = "";
				for (int z = 0; z < (39-10-(i+1)); z ++) spacesRight += " ";
				spacesRight += "*\n";
				show_run_right (pers, col, spacesRight, spacesLeft, t);
			} else if (step == 1) {
				spacesLeft = "*";
				for (int q = 0; q < i-1; q ++) spacesLeft += " ";
				pers[17] = "    | \\   ";
				pers[18] = "   _|  \\_ ";
				string spacesRight = "";
				for (int z = 0; z < (39-10-(i+1)+1); z ++) spacesRight += " ";
				spacesRight += "*\n";
				show_run_right (pers, col, spacesRight, spacesLeft, t);
			} else {
				pers[17] = "    ||    ";
				pers[18] = "   _||_   ";
				string spacesRight = "";
				for (int z = 0; z < (39-10-(i+1)+1); z ++) spacesRight += " ";
				spacesRight += "*\n";
				show_run_right (pers, col, spacesRight, spacesLeft, t);
			}
		}
	}
	return;
}
