#include<iostream>
#include<string>
#include<unistd.h>
using namespace std;
void dance(string m[]);
void run(string m[]);
void jump(string m[]);
void ball(string m[]);
void input(string m[]);
int main() {
	string  m[12];
	string m1 = m[0] = "   ()()   ";
	string m2 = m[1] = "   ()()   ";
	string m3 = m[2] = "   ()()   ";
	string m4 = m[3] = "   |..|   ";
	string m5 = m[4] = "  \\|  |/  ";
	string m6 = m[5] = "  /|UU|\\  ";
	string m7 = m[6] = "  --\\/--  ";
	string m8 = m[7] = " /  ||  \\ ";
	string m9 = m[8] = "/   ||   \\";
	string m10 = m[9] = "    /\\    ";
	string m11 = m[10] = "    ||    ";
	string m12 = m[11] = "   _||_   ";
	input(m);
	return 0;
}
void input(string m[]) {
	while (1) {
		int choice;
		cout << "Choose animation:" << endl;
cout << "Dance: \t\t\t1" << endl;
cout << "Run: \t\t\t2" << endl;
cout << "Sit down and jump: \t3" << endl;
cout << "Throw a ball: \t\t4" << endl << endl;
cout << "Enter 5 for exit." << endl;
cin >> choice;
		//system("cls");
		if (choice == 1) {
			dance(m);
		}
		else if (choice == 2) {
			run(m);
		}
		else if (choice == 3) {
			jump(m);
		}
		else if (choice == 4) {
			ball(m);
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
void mool() {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	for (int k = 0; k < 6; k++) {
		cout << "\n*                                      *";
	}
}
void cool(string* m) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	for (int k = 0; k < 6; k++) {
		cout << "\n*                                      *";
	}
	for (int i = 0; i < 12; i++) {

		cout << "\n*" << *m << "                            *";
		*m++;
	}
	cout << endl;
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	//Sleep(1000);
	//system("cls");
}
void foo(string* m, int& n, int& k) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	cout << endl;
	for (int k = 0; k < n; k++) {
		cout << "*                                      *" << endl;
	}
	for (int i = 0; i < 12; i++) {

		cout << "*" << *m << "                            *" << endl;
		*m++;
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
void prisest(string* m) {
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	cout << endl;
	for (int k = 0; k < 7; k++) {
		cout << "*                                      *" << endl;
	}
	for (int i = 0; i < 12; i++) {
		if (i == 10) {
			*m++;
		}
		else {
			cout << "*" << *m << "                            *" << endl;
			*m++;
		}
	}
	for (int j = 0; j < 40; j++) {
		cout << "*";
	}
	//Sleep(1000);
	//system("cls");
}
void dance(string m[]) {
	cool(&m[0]);
	m[6] = " ---\\/--- ";
	m[7] = "/   ||   \\";
	m[8] = "    ||    ";
	cool(&m[0]);
	m[6] = "  --\\/----";
	m[7] = " /  ||    ";
	m[8] = "/   ||    ";
	cool(&m[0]);
	m[5] = "  /|UU|\\ /";
	m[6] = " ---\\/--- ";
	m[7] = "/   ||    ";
	m[8] = "    ||    ";
	cool(&m[0]);
	m[4] = "  \\|  |/ /";
	m[5] = "  /|UU|\\/ ";
	m[6] = "  --\\/--  ";
	m[7] = " /  ||    ";
	m[8] = "/   ||    ";
	cool(&m[0]);
	m[4] = "  \\|  |/ *";
	m[5] = "  /|UU|\\/ ";
	m[6] = " ---\\/--  ";
	m[7] = "/   ||    ";
	m[8] = "    ||    ";
	cool(&m[0]);
	m[4] = "  \\|  |/ /";
	m[5] = "  /|UU|\\/ ";
	m[6] = "----\\/--  ";
	m[7] = "    ||    ";
	cool(&m[0]);
	m[4] = "  \\|  |/ *";
	m[5] = "\\ /|UU|\\/ ";
	m[6] = " ---\\/--  ";
	cool(&m[0]);
	m[4] = "\\ \\|  |/ /";
	m[5] = " \\/|UU|\\/ ";
	m[6] = "  --\\/--  ";
	cool(&m[0]);
	m[4] = "* \\|  |/ *";
	cool(&m[0]);
	m[4] = "  \\|  |/  ";
	m[5] = "* /|UU|\\ *";
	m[6] = " ---\\/--- ";
	cool(&m[0]);
	m[5] = "  /|UU|\\  ";
	m[6] = "*---\\/---*";
	cool(&m[0]);
	m[6] = " ---\\/--- ";
	m[7] = "*   ||   *";
	cool(&m[0]);
	m[6] = "  --\\/--  ";
	m[7] = " /  ||  \\ ";
	m[8] = "*   ||   *";
	cool(&m[0]);
	m[6] = "  --\\/--  ";
	m[7] = " /  ||  \\ ";
	m[8] = "/   ||   \\";
	cool(&m[0]);
}
void run(string m[]) {
	int probel = 0, shet = 0;
	cool(&m[0]);
	int t = 28;
	for (int k = 0; k < 27; k++) {
		m[10] = "    | \\   ";
		m[11] = "   _|  \\_ ";
		mool();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel < shet) {
				cout << " ";
				probel++;
			}
			probel = 0;
			cout << m[i];
			for (int j = 0; j < t - shet; j++) {
				cout << " ";
			}
			cout << "*\n";

		}zvezd();
		//Sleep(1000);
		//system("cls");
		shet++;
		m[10] = "   / |    ";
		m[11] = " _/  |_   ";
		mool();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel < shet) {
				cout << " ";
				probel++;
			}
			probel = 0;
			cout << m[i];
			for (int j = 0; j < t - shet; j++) {
				cout << " ";
			}
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
		m[10] = "    ||    ";
		m[11] = "   _||_   ";
		mool();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (probel < shet) {
				cout << " ";
				probel++;
			}
			probel = 0;
			cout << m[i];
			for (int j = 0; j < 28 - shet; j++) {
				cout << " ";
			}
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
	}
	int p1, p2;
	for (int k = 28; k > 0; k--) {
		p1 = k;
		p2 = 28 - p1;
		m[10] = "    | \\   ";
		m[11] = "   _|  \\_ ";
		mool();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (p1 != 0) {
				cout << " ";
				p1--;
			}
			p1 = k;
			cout << m[i];
			while (p2 != 0) {
				cout << " ";
				p2--;
			}
			p2 = 28 - p1;
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
		m[10] = "   / |    ";
		m[11] = " _/  |_   ";
		mool();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (p1 != 0) {
				cout << " ";
				p1--;
			}
			p1 = k;
			cout << m[i];
			while (p2 > 0) {
				cout << " ";
				p2--;
			}
			p2 = 28 - p1;
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
		m[10] = "    ||    ";
		m[11] = "   _||_   ";
		mool();
		cout << endl;
		for (int i = 0; i < 12; i++) {
			cout << "*";
			while (p1 != 0) {
				cout << " ";
				p1--;
			}
			p1 = k;
			cout << m[i];
			while (p2 > 0) {
				cout << " ";
				p2--;
			}
			p2 = 28 - p1;
			cout << "*\n";
		}zvezd();
		//Sleep(1000);
		//system("cls");
	}
}
void jump(string m[]) {
	int n = 6, k = 1;
	cool(&m[0]);
	m[11] = "   _\\/_   ";
	prisest(&m[0]);
	m[11] = "    ||    ";
	for (int i = 0; i < 9; i++) {
		foo(&m[0], n, k);
		//system("cls");
	}
	m[11] = "   _\\/_   ";
	prisest(&m[0]);
	m[11] = "   _||_   ";
	cool(&m[0]);

}
void foob(string* m, int& r, int& p, int& l) {
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

		cout << "\n*" << *m << "                            *";
		*m++;
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
void ball(string m[]) {
	int r = 5, p = 8, l = 1;
	cool(&m[0]);
	m[7] = " /  ||  \\o";
	m[8] = "/   ||   _";
	cool(&m[0]);
	m[6] = "  --\\/-- o";
	m[7] = " /  ||  \\-";
	m[8] = "/   ||    ";
	cool(&m[0]);
	m[5] = "  /|UU|\\ o";
	m[6] = "  --\\/----";
	m[7] = " /  ||    ";
	cool(&m[0]);
	m[4] = "  \\|  |/ o";
	m[5] = "  /|UU|\\  ";
	m[6] = "  --\\/---/";
	cool(&m[0]);
	m[3] = "   |..|  o";
	m[4] = "  \\|  |/  ";
	m[6] = "  --\\/----";
	cool(&m[0]);
	m[2] = "   ()()  o";
	m[3] = "   |..|   ";
	m[6] = "  --\\/--- ";
	m[7] = " /  ||   \\";
	cool(&m[0]);
	m[1] = "   ()()  o";
	m[2] = "   ()()   ";
	m[6] = "  --\\/--  ";
	m[7] = " /  ||  \\ ";
	m[8] = "/   ||   \\";
	cool(&m[0]);
	m[0] = "   ()()  o";
	m[1] = "   ()()   ";
	cool(&m[0]);
	m[0] = "   ()()   ";
	for (int i = 0; i < 8; i++) {
		foob(&m[0], r, p, l);
	}
	m[0] = "o  ()()   ";
	cool(&m[0]);
	m[0] = "   ()()   ";
	m[1] = "o  ()()   ";
	cool(&m[0]);
	m[1] = "   ()()   ";
	m[2] = "o  ()()   ";
	m[6] = " ---\\/--  ";
	m[7] = "/   ||  \\ ";
	m[8] = "    ||   \\";
	cool(&m[0]);
	m[2] = "   ()()   ";
	m[3] = "o  |..|   ";
	m[6] = "----\\/--  ";
	m[7] = "    ||  \\ ";
	cool(&m[0]);
	m[3] = "   |..|   ";
	m[4] = "o \\|  |/  ";
	m[6] = "\\---\\/--  ";
	cool(&m[0]);
	m[4] = "  \\|  |/  ";
	m[5] = "o /|UU|\\  ";
	m[6] = "----\\/--  ";
	cool(&m[0]);
	m[5] = "  /|UU|\\  ";
	m[6] = "o --\\/--  ";
	m[7] = "-/  ||  \\ ";
	cool(&m[0]);
	m[6] = "  --\\/--  ";
	m[7] = "o/  ||  \\ ";
	m[8] = "-   ||   \\";
	cool(&m[0]);
	m[7] = " /  ||  \\ ";
	m[8] = "/   ||   \\";
	cool(&m[0]);
}