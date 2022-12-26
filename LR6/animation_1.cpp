#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string a[12]{  /asdasdsadasd
	"   _[]_   ", //0
	"   |~~|   ", //1
	"   |oq|   ", //2
	"  (|<>|)  ", //3
	"   \\--/   ", //4
	"   _><_   ", //5
	"  -\\. /-  ", //6 
	" / |. | \\ ", //7
	"/  |. |  \\", //8
	"   |__|   ", //9
	"    ||    ", //10
	"   _||_   " //11
};

void pechat(string a[]) {
	for (int i = 0; i < 12; i++) {
		cout << a[i] << endl;
	}
}

void anim1(string a[]) {
	a[6] = " --\\. /-- ";
	a[7] = "/  |. |  \\";
	a[8] = "   |. |   ";
	pechat(a);
}

void anim2(string a[]) {
	a[6] = "  -\\. /---";
	a[7] = " / |. |   ";
	a[8] = "/  |. |   ";
	pechat(a);
}

void anim3(string a[]) {
	a[5] = "   _><_  /";
	a[6] = " --\\. /-- ";
	a[7] = "/  |. |   ";
	a[8] = "   |. |   ";
	pechat(a);
}

void anim4(string a[]) {
	a[4] = "   \\--/  /";
	a[5] = "   _><_ / ";
	a[6] = "  -\\. /-  ";
	a[7] = " / |. |   ";
	a[8] = "/  |. |   ";
	pechat(a);
}

void anim5(string a[]) {
	a[4] = "   \\--/  *";
	a[6] = " --\\. /-  ";
	a[7] = "/  |. |   ";
	a[8] = "   |. |   ";
	pechat(a);
}

void anim6(string a[]) {
	a[4] = "   \\--/  /";
	a[6] = "---\\. /-  ";
	a[7] = "   |. |   ";
	pechat(a);
}

void anim7(string a[]) {
	a[4] = "   \\--/  *";
	a[5] = "\\  _><_ / ";
	a[6] = " --\\. /-  ";
	pechat(a);
}

void anim8(string a[]) {
	a[4] = "\\  \\--/  /";
	a[5] = " \\ _><_ / ";
	a[6] = "  -\\. /-  ";
	pechat(a);
}

void anim9(string a[]) {
	a[4] = "*  \\--/  *";
	pechat(a);
}

void anim10(string a[]) {
	a[4] = "   \\--/   ";
	a[5] = "*  _><_  *";
	a[6] = " --\\. /-- ";
	pechat(a);
}

void anim11(string a[]) {
	a[5] = "   _><_   ";
	a[6] = "*--\\. /--*";
	pechat(a);
}

void anim12(string a[]) {
	a[6] = " --\\. /-- ";
	a[7] = "*  |. |  *";
	pechat(a);
}

void anim13(string a[]) {
	a[6] = "  -\\. /-  ";
	a[7] = " / |. | \\ ";
	a[8] = "*  |. |  *";
	pechat(a);
}

void anim14(string a[]) {
	a[8] = "/  |. |  \\";
	pechat(a);
}

int main() {
	pechat(a);
	Sleep(500);
	system("cls");
	for (int i = 1; i <= 2; i++) {
		anim1(a);
		Sleep(500);
		system("cls");
		anim2(a);
		Sleep(500);
		system("cls");
		anim3(a);
		Sleep(500);
		system("cls");
		anim4(a);
		Sleep(500);
		system("cls");
		anim5(a);
		Sleep(500);
		system("cls");
		anim6(a);
		Sleep(500);
		system("cls");
		anim7(a);
		Sleep(500);
		system("cls");
		anim8(a);
		Sleep(500);
		system("cls");
		anim9(a);
		Sleep(500);
		system("cls");
		anim10(a);
		Sleep(500);
		system("cls");
		anim11(a);
		Sleep(500);
		system("cls");
		anim12(a);
		Sleep(500);
		system("cls");
		anim13(a);
		Sleep(500);
		system("cls");
		anim14(a);
		Sleep(500);
		system("cls");
	}
}