#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
	const int size = 12;
	string animation1[size];
	animation1[0] = "   _[]_   \n";
	animation1[1] = "   |~~|   \n";
	animation1[2] = "   |oq|   \n";
	animation1[3] = "  (|<>|)  \n";
	animation1[4] = "   \\--/   \n";
	animation1[5] = "   _><_   \n";
	animation1[6] = "  -\\. /-  \n";
	animation1[7] = " / |. | \\ \n";
	animation1[8] = "/  |. |  \\\n";
	animation1[9] = "   |__|   \n";
	animation1[10] = "    ||    \n";
	animation1[11] = "   _||_   \n";
	for (int i = 0; i < size; i++) {
		cout << animation1[i];
	}
	Sleep(500);
	system("cls");

	animation1[6] = " --\\. /-- \n";
	animation1[7] = "/  |. |  \\\n";
	animation1[8] = "   |. |   \n";
	   for (int i = 0; i < size; i++) {
		cout << animation1[i];
	}
	   Sleep(500);
	system("cls");

	animation1[6] = "  -\\. /---\n";
	animation1[7] = " / |. |   \n";
	animation1[8] = "/  |. |   \n";
	for (int i = 0; i < size; i++) {
		cout << animation1[i];
	}
	Sleep(500);
	system("cls");

	animation1[5] = "   _><_  /\n";
	animation1[6] = " --\\. /-- \n";
	animation1[7] = "/  |. |   \n";
	animation1[8] = "   |. |   \n";
	for (int i = 0; i < size; i++) {
		cout << animation1[i];
	}
	Sleep(500);
	system("cls");

	animation1[4] = "   \\--/  /\n";
	animation1[5] = "   _><_ / \n";
	animation1[6] = "  -\\. /- \n";
	animation1[7] = " / |. |   \n";
	animation1[8] = "/  |. |   \n";
	for (int i = 0; i < size; i++) {
		cout << animation1[i];
	}
	Sleep(500);
	system("cls");

	animation1[4] = "   \\--/  *\n";
	animation1[5] = "   _><_ / \n";
	animation1[6] = " --\\. /- \n";
	animation1[7] = "/  |. |   \n";
	animation1[8] = "   |. |   \n";
	for (int i = 0; i < size; i++) {
		cout << animation1[i];
	}
	Sleep(500);
	system("cls");
	return 0;
}