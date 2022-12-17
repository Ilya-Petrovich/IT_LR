#include<iostream>
#include<unistd.h>
#include<cstring>
using namespace std;
void world(int w, int h);
void output(char pers[12][11], int h, int w);
void dance(char pers[12][11], int h, int w);
void run(char pers[12][11], int h, int w);
void legs(int cnt, int ls, int rs);
void body(char pers[12][11], int h, int w, int cnt, int ls, int rs);
void flying(char pers[12][11], int h, int w);
void Jbody(char pers[12][11], int h, int w, int up, int down);
void Jlegs(int frame, int down);
void ball();
void Tout(char th[20][41], int h, int w);

int main() {
	const int W = 11, H = 12;
	int choice;
	char pers[H][W] = {
		{"   ()()   "},
		{"   ()()   "},
		{"   ()()   "},
		{"   |..|   "},
		{"  \\|  |/  "},
		{"  /|UU|\\  "},
		{"  --\\/--  "},
		{" /  ||  \\ "},
		{"/   ||   \\"},
		{"    /\\    "},
		{"    ||    "},
		{"   _||_   "},
	};
	link:
	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "th a ball: \t\t4" << endl;
	cout << "Enter 5 for exit." << endl;
	cin >> choice;

	switch (choice) {
		case 1:
				dance(pers, H, W);
				//system("cls");
				goto link;
		case 2:
				run(pers, H, W);
				//system("cls");
				goto link;
		case 3:
				flying(pers, H, W);
				//system("cls");
				goto link;
				break;
		case 4:
				ball();
				//system("cls");
				goto link;
		case 5:
				exit(1);
	}

	return 0;
}

void dance(char pers[12][11], int H, int W) {
	int cnt = 0;
	char a = '/', b = ' ', c = '\\', d = '-', e = '*';
	//system("cls");
	while (cnt != 2) {
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[6][1] = pers[6][8] = d;
		pers[7][0] = a;
		pers[7][9] = c;
		pers[7][8] = pers[8][0] = pers[8][9] = pers[7][1] = b;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[6][9] = d;
		pers[7][1] = pers[8][0] = a;
		pers[7][9] = pers[7][0] = pers[6][1] = b;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[6][9] = pers[8][0] = pers[7][1] = b;
		pers[6][1] = d;
		pers[5][9] = pers[7][0] = a;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[6][1] = pers[7][0] = pers[6][8] = pers[5][9] = b;
		pers[4][9] = pers[7][1] = pers[8][0] = pers[5][8] = a;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[7][1] = pers[8][0] = b;
		pers[6][1] = d;
		pers[4][9] = e;
		pers[7][0] = a;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[7][0] = b;
		pers[6][0] = d;
		pers[4][9] = a;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[6][0] = b;
		pers[5][0] = c;
		pers[4][9] = e;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[5][0] = pers[6][1] = b;
		pers[4][9] = a;
		pers[4][0] = pers[5][1] = c;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[4][9] = pers[4][0] = e;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[4][9] = pers[4][0] = pers[5][1] = pers[5][8] = b;
		pers[6][1] = pers[6][8] = d;
		pers[5][0] = pers[5][9] = e;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[5][0] = pers[5][9] = b;
		pers[6][0] = pers[6][9] = e;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[6][0] = pers[6][9] = b;
		pers[7][0] = pers[7][9] = e;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[7][0] = pers[7][9] = pers[6][1] = pers[6][8] = b;
		pers[8][0] = pers[8][9] = e;
		pers[7][1] = a;
		pers[7][8] = c;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		pers[8][0] = a;
		pers[8][9] = c;
		output(pers, H, W);
		//Sleep(100);
		//system("cls");
		cnt++;
	}
}

void output(char pers[12][11], int h, int w) {
	cout << string(40, '*') << endl;

	for (int i = 0; i < 6; i++) {
		cout << '*' << string(38, ' ') << '*' << endl;
	}

	for (int i = 0; i < 12; i++) {
		cout << '*';

		for (int j = 0; j < 10; j++) {
			cout << pers[i][j];
		}

		cout << string(28, ' ') << '*' << endl;
	}

	cout << string(40, '*') << endl;
}

void run(char pers[12][11], int h, int w) {
	int ls = 40, rs = 12, cnt = 0;
	//Sleep(100);
	//system("cls");

	while (cnt != 57) {
		cout << string(40, '*') << endl;
		body(pers, h, w, cnt, ls, rs);
		legs(cnt, ls, rs);

		if (cnt <= 27) {
			rs++;
			ls--;
			cnt++;
			cout << string(40, '*') << endl;
			//Sleep(100);
			//system("cls");
		} else {
			rs--;
			ls++;
			cnt++;
			cout << string(40, '*') << endl;
			//Sleep(100);
			//system("cls");
		}
	}
	cout << string(40, '*') << endl;
	body(pers, h, w, cnt, 40, 12);
	legs(cnt, 40, 12);
	cout << string(40, '*') << endl;
}

void body(char pers[12][11], int h, int w, int cnt, int ls, int rs) {
	for (int i = 0; i < 6; i++) {
		cout << '*' << string(38, ' ') << '*' << endl;
	}

	for (int i = 0; i < 10; i++) {
		cout << '*' << string(40 - ls, ' ');

		for (int j = 0; j < 10; j++) {
			cout << pers[i][j];
		}

		cout << string(40 - rs, ' ') << '*' << endl;
	}
}

void legs(int cnt, int ls, int rs) {
	char legs[2][11] {
		{"    ||    "},
		{"   _||_   "}
	};
	cnt = cnt % 3;
	switch (cnt) {
		case 0:
				break;
		case 1:
				legs[1][5] = legs[0][5] = legs[1][6] = ' ';
				legs[0][6] = legs[1][7] = '\\';
				legs[1][8] = '_';
				break;
		case 2:
				legs[1][4] = legs[0][4] = legs[1][3] = ' ';
				legs[0][3] = legs[1][2] = '/';
				legs[1][1] = '_';
				break;
	}

	for (int i = 0; i < 2; i++) {
		cout << '*' << string(40 - ls, ' ');

		for (int j = 0; j < 10; j++) {
			cout << legs[i][j];
		}
		cout << string(40 - rs, ' ') << '*' << endl;
	}
}

void flying(char pers[12][11], int h, int w) {
	int frame = 0, up = 6, down = 0;
	//Sleep(100);
	//system("cls");

	while (frame != 12) {
		cout << string(40, '*') << endl;
		Jbody(pers, h, w, up, down);
		Jlegs(frame, down);
		cout << string(40, '*') << endl;

		if ((frame <= 5 || frame == 11) && frame != 0) {
			up--;
			down++;
		} else if (frame == 0 || frame == 10) {
			up = 7;
			down = -1;
		} else if (frame > 5 && frame != 10) {
			up++;
			down--;
		}

		//Sleep(100);
		//system("cls");
		frame++;
	}

	cout << string(40, '*') << endl;
	Jbody(pers, h, w, up, down);
	Jlegs(frame, down);
	cout << string(40, '*') << endl;
}

void Jbody(char pers[12][11], int h, int w, int up, int down) {
	for (int i = 0; i < up; i++) {
		cout << '*' << string(38, ' ') << '*' << endl;
	}

	for (int i = 0; i < 10; i++) {
		cout << '*';

		for (int j = 0; j < 10; j++) {
			cout << pers[i][j];
		}

		cout << string(28, ' ') << '*' << endl;
	}
}

void Jlegs(int frame, int down) {
	if (frame == 0 || frame == 12) {
		char legs[2][11] {
			{"    ||    "},
			{"   _||_   "},
		};

		for (int i = 0; i < 2; i++) {
			cout << '*';

			for (int j = 0; j < 10; j++) {
				cout << legs[i][j];
			}

			cout <<string(28, ' ') << '*' << endl;
		}
	} else if (frame == 1 || frame == 11) {
		char legs[] {"   _\\/_   "};
		cout << '*' << legs << string(28, ' ') << '*' << endl;
	} else {
		char legs[2][11] {
			{"    ||    "},
			{"    ||    "},
		};

		for (int i = 0; i < 2; i++) {
			cout << '*';

			for (int j = 0; j < 10; j++) {
				cout << legs[i][j];
			}

			cout <<string(28, ' ') << '*' << endl;
		}
	}

	for (int i = 0; i < down; i++) {
		cout << '*' << string(38, ' ') << '*' << endl;
	}
}

void ball() {
	const int H = 20, W = 41;
	char a = 'o', b = ' ', c = '/', d = '\\', e = '-';
	char th[H][W] {
		{"****************************************"},
		{"*                                      *"},
		{"*                                      *"},
		{"*                                      *"},  //3
		{"*                                      *"},  //4
		{"*                                      *"},  //5
		{"*                                      *"},  //6
		{"*   ()()                               *"},  //7
		{"*   ()()                               *"},  //8
		{"*   ()()                               *"},  //9
		{"*   |..|                               *"},  //10
		{"*  \\|  |/                              *"}, //11
		{"*  /|UU|\\                              *"}, //12
		{"*  --\\/--                              *"}, //13
		{"* /  ||  \\                             *"}, //14
		{"*/   ||   \\                            *"}, //15
		{"*    /\\                                *"},
		{"*    ||                                *"},
		{"*   _||_                               *"},
		{"****************************************"},
	};
	//system("cls");
	Tout(th, H, W);
	th[15][10] = e;
	th[14][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[15][10] = b;
	th[14][10] = e;
	th[13][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[14][9] = th[14][10] = b;
	th[13][9] = th[13][10] = e;
	th[12][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[12][10] = b;
	th[13][10] = c;
	th[11][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[11][10] = b;
	th[13][10] = e;
	th[10][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[13][10] = th[10][10] = b;
	th[14][10] = d;
	th[9][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[14][10] = th[9][10] = th[13][9] = b;
	th[15][10] = th[14][9] = d;
	th[8][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[8][10] = b;
	th[7][10] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[7][10] = b;
	th[6][9] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[6][9] = b;
	th[5][8] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[5][8] = b;
	th[4][7] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[4][7] = b;
	th[3][6] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[3][6] = b;
	th[3][5] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[3][5] = b;
	th[4][4] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[4][4] = b;
	th[5][3] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[5][3] = b;
	th[6][2] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[6][2] = b;
	th[7][1] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[7][1] = b;
	th[8][1] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[8][1] = th[15][1] = th[14][2]= b;
	th[9][1] = a;
	th[13][2] = e;
	th[14][1] = c;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[9][1] = th[14][1] = b;
	th[13][1] = e;
	th[10][1] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[10][1] = b;
	th[13][1] = d;
	th[11][1] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[11][1] = b;
	th[13][1] = e;
	th[12][1] = a;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[12][1] = th[13][2] = b;
	th[13][1] = a;
	th[14][1] = e;
	th[14][2] = c;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[13][1] = b;
	th[14][1] = a;
	th[15][1] = e;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
	th[14][1] = b;
	th[15][1] = c;
	//Sleep(100);
	//system("cls");
	Tout(th, H, W);
}

void Tout(char th[20][41], int h, int w) {
	for(int i = 0; i < 20; i++) {
		for (int j = 0; j < 40; j++) {
			cout << th[i][j];
		}

		cout << endl;
	}
}
