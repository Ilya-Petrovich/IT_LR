#include <iostream>
#include <windows.h>
#include <ctime>
#include <cmath>
using namespace std;
void clearScreen(int characterLenght);
void anim1();
void anim2();
void anim3();
void anim4();
void anim5();
void anim6();
void anim7();
void anim8();
void anim9();
void anim10();
void anim11();
void anim12();
void anim13();
void anim14();
int main() {
	system("cls");
	for (int i = 0; i < 2; i++){
		anim1();
		Sleep(700);
		system("cls");
		anim2();
		Sleep(700);
		system("cls");
		anim3();
		Sleep(700);
		system("cls");
		anim4();
		Sleep(700);
		system("cls");
		anim5();
		Sleep(700);
		system("cls");
		anim6();
		Sleep(700);
		system("cls");
		anim7();
		Sleep(700);
		system("cls");
		anim8();
		Sleep(700);
		system("cls");
		anim9();
		Sleep(700);
		system("cls");
		anim10();
		Sleep(700);
		system("cls");
		anim11();
		Sleep(700);
		system("cls");
		anim12();
		Sleep(700);
		system("cls");
		anim13();
		Sleep(700);
		system("cls");
		anim14();
		Sleep(700);
		system("cls");
	}
	return 0;
}
void anim1() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', '/', ' ', '|', ' ', ' ', '|', ' ', '\\', ' '},
		{'/', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', '\\'},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim2() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', '-', '-', '|', ' ', '*', '|', '-', '-', ' '},
		{'/', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', '\\'},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim3() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', '-', '|', ' ', '*', '|', '-', '-', '-'},
		{' ', '/', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{'/', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim4() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', '/'},
		{' ', '-', '-', '|', ' ', '*', '|', '-', '-', ' '},
		{'/', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim5() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', '/'},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', '/', ' '},
		{' ', ' ', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', '/', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{'/', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim6() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', '*'},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', '/', ' '},
		{' ', '-', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{'/', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim7() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', '/'},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', '/', ' '},
		{'-', '-', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim8() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', '*'},
		{'\\', ' ', ' ', ' ', '|', '|', ' ', ' ', '/', ' '},
		{' ', '-', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim9() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{'\\', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', '/'},
		{' ', '\\', ' ', ' ', '|', '|', ' ', ' ', '/', ' '},
		{' ', ' ', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim10() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{'*', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', '*'},
		{' ', '\\', ' ', ' ', '|', '|', ' ', ' ', '/', ' '},
		{' ', ' ', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim11() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{'*', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', '*'},
		{' ', '-', '-', '|', ' ', '*', '|', '-', '-', ' '},
		{' ', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim12() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{'*', '-', '-', '|', ' ', '*', '|', '-', '-', '*'},
		{' ', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim13() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', '-', '-', '|', ' ', '*', '|', '-', '-', ' '},
		{'*', ' ', ' ', '|', ' ', ' ', '|', ' ', ' ', '*'},
		{' ', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}
void anim14() {
	char anim[12][10] = {
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '|', 'o', 'o', '|', ' ', ' ', ' '},
		{' ', ' ', '(', '|', '.', '.', '|', ')', ' ', ' '},
		{' ', ' ', ' ', '|', '-', '-', '|', ' ', ' ', ' '},
		{' ', ' ', ' ', '\\', '_', '_', '/', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', '-', '|', ' ', '*', '|', '-', ' ', ' '},
		{' ', '/', ' ', '|', ' ', ' ', '|', ' ', '\\', ' '},
		{'*', ' ', ' ', ' ', '\\', '/', ' ', ' ', ' ', '*'},
		{' ', ' ', ' ', ' ', '/', '\\', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', ' ', '|', '|', ' ', ' ', ' ', ' '},
		{' ', ' ', ' ', '_', '|', '|', '_', ' ', ' ', ' '}
	};
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 10; j++) {
			cout << anim[i][j];
		}
		cout << endl;
	}
}