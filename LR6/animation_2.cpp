#include<iostream>
#include<string>
#include<conio.h>
#include<unistd.h>
using namespace std;
void dance(string ar[]);
void run(string ar[]);
void jump(string ar[]);
void ball(string ar[]);
void vvod(string ar[]);
int main() {
	string  ar[12];
	string str1 = ar[0] = "   ()()   ";
	string str2 = ar[1] = "   ()()   ";
	string str3 = ar[2] = "   ()()   ";
	string str4 = ar[3] = "   |..|   ";
	string str5 = ar[4] = "  \\|  |/  ";
	string str6 = ar[5] = "  /|UU|\\  ";
	string str7 = ar[6] = "  --\\/--  ";
	string str8 = ar[7] = " /  ||  \\ ";
	string str9 = ar[8] = "/   ||   \\";
	string str10 = ar[9] = "    /\\    ";
	string str11 = ar[10] = "    ||    ";
	string str12 = ar[11] = "   _||_   ";
	vvod(ar);
	return 0;
}
void vvod(string ar[]) {
	while (1) {
		int choice;
		cout << "Choose animation:" << endl;
		cout << "Dance:\t\t\t1" << endl;
		cout << "Run:\t\t\t2" << endl;
		cout << "Sit down and jump: \t3" << endl;
		cout << "Throw a ball: \t\t4" << endl << endl;
		cout << "Enter 5 for exit." << endl;
		cin >> choice;
		//system("cls");
		if (choice == 1) {
			dance(ar);
		}
		else if (choice == 2) {
			run(ar);
		}
		else if (choice == 3) {
			jump(ar);
		}
		else if (choice == 4) {
			ball(ar);
		}
		else if (choice == 5) {
			break;
		}
	}
}
void zvezd() {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
}
void fo() {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	for (int k = 0; k < 6; k++) {
		cout << "\n*                                      *";
	}
}
void foo(string* ar) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	for (int k = 0; k < 6; k++) {
		cout << "\n*                                      *";
	}
	for (int i = 0; i < 12; i++) {

		cout << "\n*" << *ar << "                            *";
		*ar++;
	}
	cout << endl;
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	//Sleep(1000);
	//system("cls");
}
void fooj(string* ar, int& n, int& k) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	cout << endl;
	for (int k = 0; k < n; k++) {
		cout << "*                                      *" << endl;
	}
	for (int i = 0; i < 12; i++) {

		cout << "*" << *ar << "                            *" << endl;
		*ar++;
	}
	for (int k = 0; k < 6 - n; k++) {
		cout << "*                                      *" << endl;
	}
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	if (n >= 3 and k == 1) {
		n--;
	}
	else { n++; k = 0; }
	//Sleep(1000);
	//system("cls");
}
void prisest(string* ar) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	cout << endl;
	for (int k = 0; k < 7; k++) {
		cout << "*                                      *" << endl;
	}
	for (int i = 0; i < 12; i++) {
		if (i == 10) {
			*ar++;
		}
		else {
			cout << "*" << *ar << "                            *" << endl;
			*ar++;
		}
	}
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	//Sleep(1000);
	//system("cls");
}
void dance(string ar[]) {
	foo(&ar[0]);
	ar[6] = " ---\\/--- ";
	ar[7] = "/   ||   \\";
	ar[8] = "    ||    ";
	foo(&ar[0]);
	ar[6] = "  --\\/----";
	ar[7] = " /  ||    ";
	ar[8] = "/   ||    ";
	foo(&ar[0]);
	ar[5] = "  /|UU|\\ /";
	ar[6] = " ---\\/--- ";
	ar[7] = "/   ||    ";
	ar[8] = "    ||    ";
	foo(&ar[0]);
	ar[4] = "  \\|  |/ /";
	ar[5] = "  /|UU|\\/ ";
	ar[6] = "  --\\/--  ";
	ar[7] = " /  ||    ";
	ar[8] = "/   ||    ";
	foo(&ar[0]);
	ar[4] = "  \\|  |/ *";
	ar[5] = "  /|UU|\\/ ";
	ar[6] = " ---\\/--  ";
	ar[7] = "/   ||    ";
	ar[8] = "    ||    ";
	foo(&ar[0]);
	ar[4] = "  \\|  |/ /";
	ar[5] = "  /|UU|\\/ ";
	ar[6] = "----\\/--  ";
	ar[7] = "    ||    ";
	foo(&ar[0]);
	ar[4] = "  \\|  |/ *";
	ar[5] = "\\ /|UU|\\/ ";
	ar[6] = " ---\\/--  ";
	foo(&ar[0]);
	ar[4] = "\\ \\|  |/ /";
	ar[5] = " \\/|UU|\\/ ";
	ar[6] = "  --\\/--  ";
	foo(&ar[0]);
	ar[4] = "* \\|  |/ *";
	foo(&ar[0]);
	ar[4] = "  \\|  |/  ";
	ar[5] = "* /|UU|\\ *";
	ar[6] = " ---\\/--- ";
	foo(&ar[0]);
	ar[5] = "  /|UU|\\  ";
	ar[6] = "*---\\/---*";
	foo(&ar[0]);
	ar[6] = " ---\\/--- ";
	ar[7] = "*   ||   *";
	foo(&ar[0]);
	ar[6] = "  --\\/--  ";
	ar[7] = " /  ||  \\ ";
	ar[8] = "*   ||   *";
	foo(&ar[0]);
	ar[6] = "  --\\/--  ";
	ar[7] = " /  ||  \\ ";
	ar[8] = "/   ||   \\";
	foo(&ar[0]);
}
void run(string ar[]) {
	int probel = 0, shet = 0;
	foo(&ar[0]);
	int t = 28;
	for (int k = 0; k < 27; k++) {
		ar[10] = "    | \\   ";
		ar[11] = "   _|  \\_ ";
		fo();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel < shet) {
				cout << " ";
				probel++;
			}
			probel = 0;
			cout << ar[i];
			for (int j = 0; j < t - shet; j++) {
				cout << " ";
			}
			cout << "*\n";

		}zvezd();
		//Sleep(1000);
		//system("cls");
		shet++;
		ar[10] = "   / |    ";
		ar[11] = " _/  |_   ";
		fo();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel < shet) {
				cout << " ";
				probel++;
			}
			probel = 0;
			cout << ar[i];
			for (int j = 0; j < t - shet; j++) {
				cout << " ";
			}
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
		ar[10] = "    ||    ";
		ar[11] = "   _||_   ";
		fo();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel < shet) {
				cout << " ";
				probel++;
			}
			probel = 0;
			cout << ar[i];
			for (int j = 0; j < 28 - shet; j++) {
				cout << " ";
			}
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
	}
	int probel1, probel2;
	for (int k = 28; k > 0; k--) {
		probel1 = k;
		probel2 = 28 - probel1;
		ar[10] = "    | \\   ";
		ar[11] = "   _|  \\_ ";
		fo();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel1 != 0) {
				cout << " ";
				probel1--;
			}
			probel1 = k;
			cout << ar[i];
			while (probel2 != 0) {
				cout << " ";
				probel2--;
			}
			probel2 = 28 - probel1;
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
		ar[10] = "   / |    ";
		ar[11] = " _/  |_   ";
		fo();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel1 != 0) {
				cout << " ";
				probel1--;
			}
			probel1 = k;
			cout << ar[i];
			while (probel2 > 0) {
				cout << " ";
				probel2--;
			}
			probel2 = 28 - probel1;
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
		ar[10] = "    ||    ";
		ar[11] = "   _||_   ";
		fo();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel1 != 0) {
				cout << " ";
				probel1--;
			}
			probel1 = k;
			cout << ar[i];
			while (probel2 > 0) {
				cout << " ";
				probel2--;
			}
			probel2 = 28 - probel1;
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
	}
}
void jump(string ar[]) {
	int n = 6, k = 1;
	foo(&ar[0]);
	ar[11] = "   _\\/_   ";
	prisest(&ar[0]);
	ar[11] = "    ||    ";
	for (int i = 0; i < 9; i++) {
		fooj(&ar[0], n, k);
		//system("cls");
	}
	ar[11] = "   _\\/_   ";
	prisest(&ar[0]);
	ar[11] = "   _||_   ";
	foo(&ar[0]);

}
void foob(string* ar, int& r, int& p, int& l) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	for (int k = 0; k < 6; k++) {
		if (k != r) {
			cout << "\n*                                      *";
		}
		else {
			cout << endl << "*";
			for (int f = 0; f < 38; f++) {
				if (f != p) {
					cout << " ";
				}
				else {
					cout << "o";
				}
			}
			cout << "*";
		}
	}
	p--;
	for (int i = 0; i < 12; i++) {

		cout << "\n*" << *ar << "                            *";
		*ar++;
	}
	cout << endl;
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	if (r > 2 and l == 1) {
		r--;
	}
	else if (r == 2 and l == 1) {
		l++;
		r = 2;
	}
	else if (r == 2 and l == 2) {
		r++;
	}
	else { r++; l = 0; }
	//Sleep(1000);
	//system("cls");
}
void ball(string ar[]) {
	int r = 5, p = 8, l = 1;
	foo(&ar[0]);
	ar[7] = " /  ||  \\o";
	ar[8] = "/   ||   _";
	foo(&ar[0]);
	ar[6] = "  --\\/-- o";
	ar[7] = " /  ||  \\-";
	ar[8] = "/   ||    ";
	foo(&ar[0]);
	ar[5] = "  /|UU|\\ o";
	ar[6] = "  --\\/----";
	ar[7] = " /  ||    ";
	foo(&ar[0]);
	ar[4] = "  \\|  |/ o";
	ar[5] = "  /|UU|\\  ";
	ar[6] = "  --\\/---/";
	foo(&ar[0]);
	ar[3] = "   |..|  o";
	ar[4] = "  \\|  |/  ";
	ar[6] = "  --\\/----";
	foo(&ar[0]);
	ar[2] = "   ()()  o";
	ar[3] = "   |..|   ";
	ar[6] = "  --\\/--- ";
	ar[7] = " /  ||   \\";
	foo(&ar[0]);
	ar[1] = "   ()()  o";
	ar[2] = "   ()()   ";
	ar[6] = "  --\\/--  ";
	ar[7] = " /  ||  \\ ";
	ar[8] = "/   ||   \\";
	foo(&ar[0]);
	ar[0] = "   ()()  o";
	ar[1] = "   ()()   ";
	foo(&ar[0]);
	ar[0] = "   ()()   ";
	for (int i = 0; i < 8; i++) {
		foob(&ar[0], r, p, l);
	}
	ar[0] = "o  ()()   ";
	foo(&ar[0]);
	ar[0] = "   ()()   ";
	ar[1] = "o  ()()   ";
	foo(&ar[0]);
	ar[1] = "   ()()   ";
	ar[2] = "o  ()()   ";
	ar[6] = " ---\\/--  ";
	ar[7] = "/   ||  \\ ";
	ar[8] = "    ||   \\";
	foo(&ar[0]);
	ar[2] = "   ()()   ";
	ar[3] = "o  |..|   ";
	ar[6] = "----\\/--  ";
	ar[7] = "    ||  \\ ";
	foo(&ar[0]);
	ar[3] = "   |..|   ";
	ar[4] = "o \\|  |/  ";
	ar[6] = "\\---\\/--  ";
	foo(&ar[0]);
	ar[4] = "  \\|  |/  ";
	ar[5] = "o /|UU|\\  ";
	ar[6] = "----\\/--  ";
	foo(&ar[0]);
	ar[5] = "  /|UU|\\  ";
	ar[6] = "o --\\/--  ";
	ar[7] = "-/  ||  \\ ";
	foo(&ar[0]);
	ar[6] = "  --\\/--  ";
	ar[7] = "o/  ||  \\ ";
	ar[8] = "-   ||   \\";
	foo(&ar[0]);
	ar[7] = " /  ||  \\ ";
	ar[8] = "/   ||   \\";
	foo(&ar[0]);
}