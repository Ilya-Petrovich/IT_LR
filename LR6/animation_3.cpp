#include <iostream>
#include <windows.h>
#include <conio.h>
//#include <unistd.h>

using namespace std;

void vivod(string a[]);
string probel(int i);
void left(string a[], int& l, int& r, int& l1, int& r1, int& live);
void right(string a[], int& l, int& r, int& l1, int& r1, int& live);
void jump(string a[], int &l, int &r);
void runpr(string a[], int& l, int& r, int& l1, int& r1, char& napr);
void leftpr(string a[], int& l, int& r, int& l1, int& r1);
void rightpr(string a[], int& l, int& r, int& l1, int& r1);
void hit(string a[], int& l, int& r, int& l1, int& r1, int& live);

int main()
{
	string a[20] = {
		"*******************************************************************************",
		"*                                                                             *",
		"*                                                                             *",
		"*                                                                             *",
		"*                                                                             *",
		"*                                                                             *",
		"*                                                                             *",
		"*                 ()()                                   \\  /                 *",
		"*                 ()()                                   /  \\                 *",
		"*                 ()()                                   |__|                 *",
		"*                 |..|                                   |xx|                 *",
		"*                \\|  |/                                 \\|__|/                *",
		"*                /|UU|\\                                 /|  |\\                *",
		"*                --\\/--                                 --\\/--                *",
		"*               /  ||  \\                               /  ||  \\               *",
		"*              /   ||   \\                             /   ||   \\              *",
		"*                  /\\                                     /\\                  *",
		"*                  ||                                     ||                  *",
		"*                 _||_                                   _||_                 *",
		"*******************************************************************************"
	};

	int l = 15, r = 24;

	int l1 = 54, r1 = 63, live = 1;

	char napr = 'r';

	vivod(a);

	while (true) {
		Sleep(10);
		if (_kbhit()) {
			switch (_getch()) {
			case 'a':
				left(a, l, r, l1, r1, live);
				break;
			case 'd':
				right(a, l, r, l1, r1, live);
				break;
			case 'w':
				jump(a,l,r);
				break;
			case ' ':
				hit(a, l, r, l1, r1, live);
				break;
			case '\x1b':
				Sleep(5);
				system("cls");
				cout << "\n\n\n\n\n" << "\t\t\t" << "GAME OVER!" << "\n\n\n\n\n";
				exit(1);
			}

		}
		if (live == 1) {
			runpr(a, l,r, l1, r1, napr);
		}

	}


	return 0;
}

void hit(string a[], int& l, int& r, int &l1, int &r1, int &live) {
	string k, k1,k2;

	k = probel(l-1);
	k1 = probel(l1 - r -1);
	k2 = probel(78 - r1-1);

	if (live == 1) {
		a[17] = "*" + k + "    |\\    " + k1 + "    ||    " + k2 + "*";
		a[18] = "*" + k + "   _| \\_  " + k1 + "   _||_   " + k2 + "*";

		vivod(a);

		a[17] = "*" + k + "    |\\_|  " + k1 + "    ||    " + k2 + "*";
		a[18] = "*" + k + "   _|     " + k1 + "   _||_   " + k2 + "*";

		vivod(a);

		a[17] = "*" + k + "    |\\    " + k1 + "    ||    " + k2 + "*";
		a[18] = "*" + k + "   _| \\_) " + k1 + "   _||_   " + k2 + "*";

		vivod(a);

		a[17] = "*" + k + "    ||   )" + k1 + "    ||    " + k2 + "*";
		a[18] = "*" + k + "   _||_  )" + k1 + "   _||_   " + k2 + "*";

		vivod(a);
	}
	else {
		a[17] = "*" + k + "    |\\    " + probel(77-r) + "*";
		a[18] = "*" + k + "   _| \\_  " + probel(77 - r) + "*";

		vivod(a);

		a[17] = "*" + k + "    |\\_|  " + probel(77 - r) + "*";
		a[18] = "*" + k + "   _|     " + probel(77 - r) + "*";

		vivod(a);

		a[17] = "*" + k + "    |\\    " + probel(77 - r) + "*";
		a[18] = "*" + k + "   _| \\_) " + probel(77 - r) + "*";

		vivod(a);

		a[17] = "*" + k + "    ||   )" + probel(77 - r) + "*";
		a[18] = "*" + k + "   _||_  )" + probel(77- r) + "*";
	}
	
	int z = r, kol = 2;

	while (z <= l1-2) {
		if (kol < 18) {
			for (int i = 1, vis = 18; i <= kol; vis--, i++) {
				a[vis][z] = ' ';
			}
			kol++; z++;
			for (int i = 1, vis = 18; i <= kol; vis--, i++) {
				a[vis][z] = ')';
			}
		}
		else {
			for (int i = 1, vis = 18; i <= kol; vis--, i++) {
				a[vis][z] = ' ';
			}
			z++;
			for (int i = 1, vis = 18; i <= kol; vis--, i++) {
				a[vis][z] = ')';
			}
		}
		vivod(a);
	}
	
	for (int i = 1, vis = 18; i <= kol; vis--, i++) {
		a[vis][z] = ' ';
	}
	

	live = 0;

	for (z; z <= r1; z++) {
		for (int i = 1, vis = 18; i <= 18; vis--, i++) {
			a[vis][z] = ' ';
		}
	}

	l1 = 78; r1 = 77;

	vivod(a);

}

void runpr(string a[], int &l, int &r, int& l1, int& r1, char &napr) {
	if (napr == 'r' and r1 < 77 and l1 > r) {
		rightpr(a, l, r, l1, r1);
	}
	else if (napr == 'l' and l1 > 0 and l1 - 1 > r) {
		leftpr(a, l, r, l1, r1);
	}
	else if (napr == 'r' and r1 > 76 and l1 - 1 > r) {
		napr = 'l';
		leftpr(a, l, r, l1, r1);
	}
	else if (napr == 'l' and l1 - 2 < r and l1 > 0) {
		napr = 'r';
		rightpr(a, l, r, l1, r1);
	}
}

void leftpr(string a[], int& l, int& r, int &l1, int &r1) {
	string k, k1,k2;

	k = probel(l1 - r - 1);
	k1 = probel(78 - r1 - 1);
	k2 = probel(l - 1);
	r1--; l1--;

	a[7] = "*" + k2 + "   ()()   " + k + "   \\  /   " + k1 + "*";
	a[8] = "*" + k2 + "   ()()   " + k + "   /  \\   " + k1 + "*";
	a[9] = "*" + k2 + "   ()()   " + k + "   |__|   " + k1 + "*";
	a[10] = "*" + k2 + "   |..|   " + k + "   |xx|   " + k1 + "*";
	a[11] = "*" + k2 + "  \\|  |/  " + k + "  \\|__|/  " + k1 + "*";
	a[12] = "*" + k2 + "  /|UU|\\  " + k + "  /|  |\\  " + k1 + "*";
	a[13] = "*" + k2 + "  --\\/--  " + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k2 + " /  ||  \\ " + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k2 + "/   ||   \\" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k2 + "    /\\    " + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k2 + "    ||    " + k + "    /|    " + k1 + "*";
	a[18] = "*" + k2 + "   _||_   " + k + "  _/ |_   " + k1 + "*";

	vivod(a);

	k = probel(l1 - r - 1);
	k1 = probel(78 - r1 - 1);
	k2 = probel(l - 1);

	a[7] = "*" + k2 + "   ()()   " + k + "   \\  /   " + k1 + "*";
	a[8] = "*" + k2 + "   ()()   " + k + "   /  \\   " + k1 + "*";
	a[9] = "*" + k2 + "   ()()   " + k + "   |__|   " + k1 + "*";
	a[10] = "*" + k2 + "   |..|   " + k + "   |xx|   " + k1 + "*";
	a[11] = "*" + k2 + "  \\|  |/  " + k + "  \\|__|/  " + k1 + "*";
	a[12] = "*" + k2 + "  /|UU|\\  " + k + "  /|  |\\  " + k1 + "*";
	a[13] = "*" + k2 + "  --\\/--  " + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k2 + " /  ||  \\ " + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k2 + "/   ||   \\" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k2 + "    /\\    " + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k2 + "    ||    " + k + "    |\\    " + k1 + "*";
	a[18] = "*" + k2 + "   _||_   " + k + "   _| \\_  " + k1 + "*";

	vivod(a);

	a[7] = "*" + k2 + "   ()()   " + k + "   \\  /   " + k1 + "*";
	a[8] = "*" + k2 + "   ()()   " + k + "   /  \\   " + k1 + "*";
	a[9] = "*" + k2 + "   ()()   " + k + "   |__|   " + k1 + "*";
	a[10] = "*" + k2 + "   |..|   " + k + "   |xx|   " + k1 + "*";
	a[11] = "*" + k2 + "  \\|  |/  " + k + "  \\|__|/  " + k1 + "*";
	a[12] = "*" + k2 + "  /|UU|\\  " + k + "  /|  |\\  " + k1 + "*";
	a[13] = "*" + k2 + "  --\\/--  " + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k2 + " /  ||  \\ " + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k2 + "/   ||   \\" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k2 + "    /\\    " + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k2 + "    ||    " + k + "    ||    " + k1 + "*";
	a[18] = "*" + k2 + "   _||_   " + k + "   _||_   " + k1 + "*";

	vivod(a);
}

void rightpr(string a[],int &l, int &r, int& l1, int& r1) {

	string k, k1,k2;

	k = probel(l1-r-1);
	k1 = probel(78 - r1 - 1);
	k2 = probel(l-1);
	r1++; l1++;

	a[7] = "*" + k2 + "   ()()   " + k + "   \\  /   " + k1 + "*";
	a[8] = "*" + k2 + "   ()()   " + k + "   /  \\   " + k1 + "*";
	a[9] = "*" + k2 + "   ()()   " + k + "   |__|   " + k1 + "*";
	a[10] = "*" + k2 + "   |..|   " + k + "   |xx|   " + k1 + "*";
	a[11] = "*" + k2 + "  \\|  |/  " + k + "  \\|__|/  " + k1 + "*";
	a[12] = "*" + k2 + "  /|UU|\\  " + k + "  /|  |\\  " + k1 + "*";
	a[13] = "*" + k2 + "  --\\/--  " + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k2 + " /  ||  \\ " + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k2 + "/   ||   \\" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k2 + "    /\\    " + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k2 + "    ||    " + k + "    |\\    " + k1 + "*";
	a[18] = "*" + k2 + "   _||_   " + k + "   _| \\_  " + k1 + "*";

	vivod(a);

	k = probel(l1 - r-1);
	k1 = probel(78 - r1-1);
	k2 = probel(l-1);

	a[7] = "*" + k2 + "   ()()   " + k + "   \\  /   " + k1 + "*";
	a[8] = "*" + k2 + "   ()()   " + k + "   /  \\   " + k1 + "*";
	a[9] = "*" + k2 + "   ()()   " + k + "   |__|   " + k1 + "*";
	a[10] = "*" + k2 + "   |..|   " + k + "   |xx|   " + k1 + "*";
	a[11] = "*" + k2 + "  \\|  |/  " + k + "  \\|__|/  " + k1 + "*";
	a[12] = "*" + k2 + "  /|UU|\\  " + k + "  /|  |\\  " + k1 + "*";
	a[13] = "*" + k2 + "  --\\/--  " + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k2 + " /  ||  \\ " + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k2 + "/   ||   \\" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k2 + "    /\\    " + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k2 + "    ||    " + k + "    /|    " + k1 + "*";
	a[18] = "*" + k2 + "   _||_   " + k + "  _/ |_   " + k1 + "*";

	vivod(a);

	a[7] = "*" + k2 + "   ()()   " + k + "   \\  /   " + k1 + "*";
	a[8] = "*" + k2 + "   ()()   " + k + "   /  \\   " + k1 + "*";
	a[9] = "*" + k2 + "   ()()   " + k + "   |__|   " + k1 + "*";
	a[10] = "*" + k2 + "   |..|   " + k + "   |xx|   " + k1 + "*";
	a[11] = "*" + k2 + "  \\|  |/  " + k + "  \\|__|/  " + k1 + "*";
	a[12] = "*" + k2 + "  /|UU|\\  " + k + "  /|  |\\  " + k1 + "*";
	a[13] = "*" + k2 + "  --\\/--  " + k + "  --\\/--  " + k1 + "*";
	a[14] = "*" + k2 + " /  ||  \\ " + k + " /  ||  \\ " + k1 + "*";
	a[15] = "*" + k2 + "/   ||   \\" + k + "/   ||   \\" + k1 + "*";
	a[16] = "*" + k2 + "    /\\    " + k + "    /\\    " + k1 + "*";
	a[17] = "*" + k2 + "    ||    " + k + "    ||    " + k1 + "*";
	a[18] = "*" + k2 + "   _||_   " + k + "   _||_   " + k1 + "*";

	vivod(a);

}

void right(string a[], int& l, int& r, int& l1, int &r1, int& live) {
	string k, k1, k2;
	if (r < 77 and r < l1-1) {
		if (live == 1) {
			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);
			r++; l++;

			a[7] = "*" + k + "   ()()   " + k1 + "   \\  /   " + k2 + "*";
			a[8] = "*" + k + "   ()()   " + k1 + "   /  \\   " + k2 + "*";
			a[9] = "*" + k + "   ()()   " + k1 + "   |__|   " + k2 + "*";
			a[10] = "*" + k + "   |..|   " + k1 + "   |xx|   " + k2 + "*";
			a[11] = "*" + k + "  \\|  |/  " + k1 + "  \\|__|/  " + k2 + "*";
			a[12] = "*" + k + "  /|UU|\\  " + k1 + "  /|  |\\  " + k2 + "*";
			a[13] = "*" + k + "  --\\/--  " + k1 + "  --\\/--  " + k2 + "*";
			a[14] = "*" + k + " /  ||  \\ " + k1 + " /  ||  \\ " + k2 + "*";
			a[15] = "*" + k + "/   ||   \\" + k1 + "/   ||   \\" + k2 + "*";
			a[16] = "*" + k + "    /\\    " + k1 + "    /\\    " + k2 + "*";
			a[17] = "*" + k + "    |\\    " + k1 + "    ||    " + k2 + "*";
			a[18] = "*" + k + "   _| \\_  " + k1 + "   _||_   " + k2 + "*";

			vivod(a);

			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);

			a[7] = "*" + k + "   ()()   " + k1 + "   \\  /   " + k2 + "*";
			a[8] = "*" + k + "   ()()   " + k1 + "   /  \\   " + k2 + "*";
			a[9] = "*" + k + "   ()()   " + k1 + "   |__|   " + k2 + "*";
			a[10] = "*" + k + "   |..|   " + k1 + "   |xx|   " + k2 + "*";
			a[11] = "*" + k + "  \\|  |/  " + k1 + "  \\|__|/  " + k2 + "*";
			a[12] = "*" + k + "  /|UU|\\  " + k1 + "  /|  |\\  " + k2 + "*";
			a[13] = "*" + k + "  --\\/--  " + k1 + "  --\\/--  " + k2 + "*";
			a[14] = "*" + k + " /  ||  \\ " + k1 + " /  ||  \\ " + k2 + "*";
			a[15] = "*" + k + "/   ||   \\" + k1 + "/   ||   \\" + k2 + "*";
			a[16] = "*" + k + "    /\\    " + k1 + "    /\\    " + k2 + "*";
			a[17] = "*" + k + "    /|    " + k1 + "    ||    " + k2 + "*";
			a[18] = "*" + k + "  _/ |_   " + k1 + "   _||_   " + k2 + "*";

			vivod(a);

			a[7] = "*" + k + "   ()()   " + k1 + "   \\  /   " + k2 + "*";
			a[8] = "*" + k + "   ()()   " + k1 + "   /  \\   " + k2 + "*";
			a[9] = "*" + k + "   ()()   " + k1 + "   |__|   " + k2 + "*";
			a[10] = "*" + k + "   |..|   " + k1 + "   |xx|   " + k2 + "*";
			a[11] = "*" + k + "  \\|  |/  " + k1 + "  \\|__|/  " + k2 + "*";
			a[12] = "*" + k + "  /|UU|\\  " + k1 + "  /|  |\\  " + k2 + "*";
			a[13] = "*" + k + "  --\\/--  " + k1 + "  --\\/--  " + k2 + "*";
			a[14] = "*" + k + " /  ||  \\ " + k1 + " /  ||  \\ " + k2 + "*";
			a[15] = "*" + k + "/   ||   \\" + k1 + "/   ||   \\" + k2 + "*";
			a[16] = "*" + k + "    /\\    " + k1 + "    /\\    " + k2 + "*";
			a[17] = "*" + k + "    ||    " + k1 + "    ||    " + k2 + "*";
			a[18] = "*" + k + "   _||_   " + k1 + "   _||_   " + k2 + "*";

			vivod(a);
		}
		else {
			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);
			r++; l++;

			a[7] = "*" + k + "   ()()   " + probel(78-r) + "*";
			a[8] = "*" + k + "   ()()   " + probel(78 - r) + "*";
			a[9] = "*" + k + "   ()()   " + probel(78 - r) + "*";
			a[10] = "*" + k + "   |..|   " + probel(78 - r) + "*";
			a[11] = "*" + k + "  \\|  |/  " + probel(78 - r) + "*";
			a[12] = "*" + k + "  /|UU|\\  " + probel(78 - r) + "*";
			a[13] = "*" + k + "  --\\/--  " + probel(78 - r) + "*";
			a[14] = "*" + k + " /  ||  \\ " + probel(78 - r) + "*";
			a[15] = "*" + k + "/   ||   \\" + probel(78 - r) + "*";
			a[16] = "*" + k + "    /\\    " + probel(78 - r) + "*";
			a[17] = "*" + k + "    |\\    " + probel(78 - r) + "*";
			a[18] = "*" + k + "   _| \\_  " + probel(78 - r) + "*";

			vivod(a);

			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);

			a[7] = "*" + k + "   ()()   " + probel(77 - r) + "*";
			a[8] = "*" + k + "   ()()   " + probel(77 - r) + "*";
			a[9] = "*" + k + "   ()()   " + probel(77 - r) + "*";
			a[10] = "*" + k + "   |..|   " + probel(77 - r) + "*";
			a[11] = "*" + k + "  \\|  |/  " + probel(77 - r) + "*";
			a[12] = "*" + k + "  /|UU|\\  " + probel(77 - r) + "*";
			a[13] = "*" + k + "  --\\/--  " + probel(77 - r) + "*";
			a[14] = "*" + k + " /  ||  \\ " + probel(77 - r) + "*";
			a[15] = "*" + k + "/   ||   \\" + probel(77 - r) + "*";
			a[16] = "*" + k + "    /\\    " + probel(77 - r) + "*";
			a[17] = "*" + k + "    /|    " + probel(77 - r) + "*";
			a[18] = "*" + k + "  _/ |_   " + probel(77 - r) + "*";

			vivod(a);

			a[7] = "*" + k + "   ()()   " + probel(77 - r) + "*";
			a[8] = "*" + k + "   ()()   " + probel(77 - r) + "*";
			a[9] = "*" + k + "   ()()   " + probel(77 - r) + "*";
			a[10] = "*" + k + "   |..|   " + probel(77 - r) + "*";
			a[11] = "*" + k + "  \\|  |/  " + probel(77 - r) + "*";
			a[12] = "*" + k + "  /|UU|\\  " + probel(77 - r) + "*";
			a[13] = "*" + k + "  --\\/--  " + probel(77 - r) + "*";
			a[14] = "*" + k + " /  ||  \\ " + probel(77 - r) + "*";
			a[15] = "*" + k + "/   ||   \\" + probel(77 - r) + "*";
			a[16] = "*" + k + "    /\\    " + probel(77 - r) + "*";
			a[17] = "*" + k + "    ||    " + probel(77 - r) + "*";
			a[18] = "*" + k + "   _||_   " + probel(77 - r) + "*";

			vivod(a);
		}
	}
}

void left(string a[], int &l, int &r, int &l1, int &r1, int &live) {
	string k, k1,k2;
	if (l > 1) {
		if (live == 1) {
			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);
			r--; l--;

			a[7] = "*" + k + "   ()()   " + k1 + "   \\  /   " + k2 + "*";
			a[8] = "*" + k + "   ()()   " + k1 + "   /  \\   " + k2 + "*";
			a[9] = "*" + k + "   ()()   " + k1 + "   |__|   " + k2 + "*";
			a[10] = "*" + k + "   |..|   " + k1 + "   |xx|   " + k2 + "*";
			a[11] = "*" + k + "  \\|  |/  " + k1 + "  \\|__|/  " + k2 + "*";
			a[12] = "*" + k + "  /|UU|\\  " + k1 + "  /|  |\\  " + k2 + "*";
			a[13] = "*" + k + "  --\\/--  " + k1 + "  --\\/--  " + k2 + "*";
			a[14] = "*" + k + " /  ||  \\ " + k1 + " /  ||  \\ " + k2 + "*";
			a[15] = "*" + k + "/   ||   \\" + k1 + "/   ||   \\" + k2 + "*";
			a[16] = "*" + k + "    /\\    " + k1 + "    /\\    " + k2 + "*";
			a[17] = "*" + k + "    /|    " + k1 + "    ||    " + k2 + "*";
			a[18] = "*" + k + "  _/ |_   " + k1 + "   _||_   " + k2 + "*";

			vivod(a);

			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);

			a[7] = "*" + k + "   ()()   " + k1 + "   \\  /   " + k2 + "*";
			a[8] = "*" + k + "   ()()   " + k1 + "   /  \\   " + k2 + "*";
			a[9] = "*" + k + "   ()()   " + k1 + "   |__|   " + k2 + "*";
			a[10] = "*" + k + "   |..|   " + k1 + "   |xx|   " + k2 + "*";
			a[11] = "*" + k + "  \\|  |/  " + k1 + "  \\|__|/  " + k2 + "*";
			a[12] = "*" + k + "  /|UU|\\  " + k1 + "  /|  |\\  " + k2 + "*";
			a[13] = "*" + k + "  --\\/--  " + k1 + "  --\\/--  " + k2 + "*";
			a[14] = "*" + k + " /  ||  \\ " + k1 + " /  ||  \\ " + k2 + "*";
			a[15] = "*" + k + "/   ||   \\" + k1 + "/   ||   \\" + k2 + "*";
			a[16] = "*" + k + "    /\\    " + k1 + "    /\\    " + k2 + "*";
			a[17] = "*" + k + "    |\\    " + k1 + "    ||    " + k2 + "*";
			a[18] = "*" + k + "   _| \\_  " + k1 + "   _||_   " + k2 + "*";

			vivod(a);

			a[7] = "*" + k + "   ()()   " + k1 + "   \\  /   " + k2 + "*";
			a[8] = "*" + k + "   ()()   " + k1 + "   /  \\   " + k2 + "*";
			a[9] = "*" + k + "   ()()   " + k1 + "   |__|   " + k2 + "*";
			a[10] = "*" + k + "   |..|   " + k1 + "   |xx|   " + k2 + "*";
			a[11] = "*" + k + "  \\|  |/  " + k1 + "  \\|__|/  " + k2 + "*";
			a[12] = "*" + k + "  /|UU|\\  " + k1 + "  /|  |\\  " + k2 + "*";
			a[13] = "*" + k + "  --\\/--  " + k1 + "  --\\/--  " + k2 + "*";
			a[14] = "*" + k + " /  ||  \\ " + k1 + " /  ||  \\ " + k2 + "*";
			a[15] = "*" + k + "/   ||   \\" + k1 + "/   ||   \\" + k2 + "*";
			a[16] = "*" + k + "    /\\    " + k1 + "    /\\    " + k2 + "*";
			a[17] = "*" + k + "    ||    " + k1 + "    ||    " + k2 + "*";
			a[18] = "*" + k + "   _||_   " + k1 + "   _||_   " + k2 + "*";

			vivod(a);
		}
		else {
			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);
			r--; l--;

			a[7] = "*" + k + "   ()()   " + probel(76 - r) + "*";
			a[8] = "*" + k + "   ()()   " + probel(76 - r) + "*";
			a[9] = "*" + k + "   ()()   " + probel(76 - r) + "*";
			a[10] = "*" + k + "   |..|   " + probel(76 - r) + "*";
			a[11] = "*" + k + "  \\|  |/  " + probel(76 - r) + "*";
			a[12] = "*" + k + "  /|UU|\\  " + probel(76 - r) + "*";
			a[13] = "*" + k + "  --\\/--  " + probel(76 - r) + "*";
			a[14] = "*" + k + " /  ||  \\ " + probel(76 - r) + "*";
			a[15] = "*" + k + "/   ||   \\" + probel(76 - r) + "*";
			a[16] = "*" + k + "    /\\    " + probel(76 - r) + "*";
			a[17] = "*" + k + "    /|    " + probel(76 - r) + "*";
			a[18] = "*" + k + "  _/ |_   " + probel(76 - r) + "*";

			vivod(a);

			k = probel(l - 1);
			k1 = probel(l1 - r - 1);
			k2 = probel(78 - r1 - 1);

			a[7] = "*" + k + "   ()()   " + probel(76 - r + 1) + "*";
			a[8] = "*" + k + "   ()()   " + probel(76 - r + 1) + "*";
			a[9] = "*" + k + "   ()()   " + probel(76 - r + 1) + "*";
			a[10] = "*" + k + "   |..|   " + probel(76 - r + 1) + "*";
			a[11] = "*" + k + "  \\|  |/  " + probel(76 - r + 1) + "*";
			a[12] = "*" + k + "  /|UU|\\  " + probel(76 - r + 1) + "*";
			a[13] = "*" + k + "  --\\/--  " + probel(76 - r + 1) + "*";
			a[14] = "*" + k + " /  ||  \\ " + probel(76 - r + 1) + "*";
			a[15] = "*" + k + "/   ||   \\" + probel(76 - r + 1) + "*";
			a[16] = "*" + k + "    /\\    " + probel(76 - r + 1) + "*";
			a[17] = "*" + k + "    |\\    " + probel(76 - r + 1) + "*";
			a[18] = "*" + k + "   _| \\_  " + probel(76 - r + 1) + "*";

			vivod(a);

			a[7] = "*" + k + "   ()()   " +  probel(76 - r + 1) + "*";
			a[8] = "*" + k + "   ()()   " +  probel(76 - r + 1) + "*";
			a[9] = "*" + k + "   ()()   " +  probel(76 - r + 1) + "*";
			a[10] = "*" + k + "   |..|   " +  probel(76 - r + 1) + "*";
			a[11] = "*" + k + "  \\|  |/  " +  probel(76 - r + 1) + "*";
			a[12] = "*" + k + "  /|UU|\\  " +  probel(76 - r + 1) + "*";
			a[13] = "*" + k + "  --\\/--  " +  probel(76 - r + 1) + "*";
			a[14] = "*" + k + " /  ||  \\ " +  probel(76 - r + 1) + "*";
			a[15] = "*" + k + "/   ||   \\" +  probel(76 - r + 1) + "*";
			a[16] = "*" + k + "    /\\    " + probel(76 - r + 1) + "*";
			a[17] = "*" + k + "    ||    " +  probel(76 - r + 1) + "*";
			a[18] = "*" + k + "   _||_   " +  probel(76 - r + 1) + "*";

			vivod(a);
		}
	}
}

void jump(string a[], int &l, int &r) {

	vivod(a);

	int i = 0;

	for (i = 6; i < 18; i++) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i + 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);


	for (i = 5; i < 17; i++) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i + 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

	for (i = 4; i < 16; i++) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i + 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

	for (i = 3; i < 15; i++) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i + 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

	for (i = 15; i > 3; i--) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i - 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

	for (i = 16; i > 4; i--) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i - 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

	for (i = 17; i > 5; i--) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i - 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

	for (i = 18; i > 6; i--) {
		for (int j = l; j <= r; j++) {
			a[i][j] = a[i - 1][j];
		}
	}

	for (int j = l; j <= r; j++) {
		a[i][j] = ' ';
	}

	vivod(a);

}

void vivod(string a[]) {
	Sleep(5);
	system("cls");
	for (int i = 0; i < 20; i++) {
		cout << a[i] << '\n';
	}
	
}

string probel(int i) {
	string d = "";
	for (int j = 0; j < i; j++) {
		d += " ";
	}
	return d;
}