#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

void main() {
	const int size = 12;
	string person1[size];
	person1[0] = "   /\\    \n";
	person1[1] = "   |oo|   \n";
	person1[2] = "  (|..|)  \n";
	person1[3] = "   |--|   \n";
	person1[4] = "   \\__/   \n";
	person1[5] = "    ||    \n";
	person1[6] = "  -| *|-  \n";
	person1[7] = " / |  | \\ \n";
	person1[8] = "/   \\/   \\ \n";
	person1[9] = "    /\\    \n";
	person1[10] = "    ||    \n";
	person1[11] = "    ||    \n";
	person1[12] = "   _||_   \n";

	for (int i = 0; i < size; i++) {
		cout << person1[i];
	}

	person1[6] = " --| *|-- \n";
	person1[7] = "/  |  |  \\ \n";
	person1[8] = "   \\/    \n";

	Sleep(500);
	system("cls");
	
}