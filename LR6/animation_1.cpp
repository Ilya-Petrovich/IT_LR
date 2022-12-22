#include<iostream>
#include<unistd.h>
#include<string>

using namespace std;

void stAnim(string arrive[]);
void firstAnim(string arrive[]);
void secondAnim(string arrive[]);
void thirdAnim(string arrive[]);
void fourthAnim(string arrive[]);
void fifthAnim(string arrive[]);
void sixthAnim(string arrive[]);
void seventhAnim(string arrive[]);
void eighthAnim(string arrive[]);
void ninthAnim(string arrive[]);
void tenthAnim(string arrive[]);
void eleventhAnim(string arrive[]);
void twelfthAnim(string arrive[]);
void thirteenthAnim(string arrive[]);
void fourteenthAnim(string arrive[]);

void stAnim(string arrive[]) {
	for (int i = 0; i < 12; i++) {
		cout << arrive[i] << endl;
	}
	//Sleep(333);
	//system("cls");
}
void firstAnim(string arrive[]) {
	arrive[6] = " --| *|-- ";
	arrive[7] = "/  |  |  \\";
	arrive[8] = "    \\/    ";
}

void secondAnim(string arrive[]) {
	arrive[6] = "  -| *|---";
	arrive[7] = " / |  |   ";
	arrive[8] = "/   \\/    ";
}

void thirdAnim(string arrive[]) {
	arrive[5] = "    ||   /";
	arrive[6] = " --| *|-- ";
	arrive[7] = "/  |  |   ";
	arrive[8] = "    \\/    ";
}

void fourthAnim(string arrive[]) {
	arrive[4] = "   \\__/  /";
	arrive[5] = "    ||  / ";
	arrive[6] = " -| *|-   ";
	arrive[7] = " / |  |   ";
	arrive[8] = "/   \\/    ";
}

void fifthAnim(string arrive[]) {
	arrive[4] = "   \\__/  *";
	arrive[5] = "    ||  / ";
	arrive[6] = " --| *|-  ";
	arrive[7] = "/  |  |   ";
	arrive[8] = "    \\/    ";
}

void sixthAnim(string arrive[]) {
	arrive[4] = "   \\__/  /";
	arrive[5] = "    ||  / ";
	arrive[6] = "---| *|-  ";
	arrive[7] = "   |  |   ";
}

void seventhAnim(string arrive[]) {
	arrive[4] = "   \\__/  *";
	arrive[5] = "\\   ||  / ";
	arrive[6] = " --| *|-  ";
	arrive[7] = "   |  |   ";
}

void eighthAnim(string arrive[]) {
	arrive[4] = "\\  \\__/  /";
	arrive[5] = " \\  ||  / ";
	arrive[6] = "  -| *|-  ";
	arrive[7] = "   |  |   ";
}

void ninthAnim(string arrive[]) {
	arrive[4] = "*  \\__/  *";
	arrive[5] = " \\  ||  / ";
	arrive[6] = "  -| *|-  ";
	arrive[7] = "   |  |   ";
}

void tenthAnim(string arrive[]) {
	arrive[4] = "   \\__/   ";
	arrive[5] = "*   ||   *";
	arrive[6] = " --| *|-- ";
	arrive[7] = "   |  |   ";
}

void eleventhAnim(string arrive[]) {
	arrive[5] = "    ||    ";
	arrive[6] = "*--| *|--*";
}

void twelfthAnim(string arrive[]) {
	arrive[6] = " --| *|-- ";
	arrive[7] = "*  |  |  *";
}

void thirteenthAnim(string arrive[]) {
	arrive[6] = "  -| *|-  ";
	arrive[7] = " / |  | \\ ";
	arrive[8] = "*   \\/   *";
}
void fourteenthAnim(string arrive[]) {
	arrive[6] = "  -| *|-  ";
	arrive[7] = " / |  | \\ ";
	arrive[8] = "/   \\/   \\";
}

int main() {
	string A[]
	{
		"    /\\    ", // 0
		"   |oo|   ", // 1
		"  (|..|)  ", // 2
		"   |__|   ", // 3
		"   \\__/   ", // 4
		"    ||    ", // 5
		"  -| *|-  ", // 6
		" / |  | \\ ", // 7
		"/   \\/   \\", // 8
		"    /\\    ", // 9
		"    ||    ", // 10
		"   _||_   ", // 11
	};
	stAnim(A);
	firstAnim(A);
	stAnim(A);
	secondAnim(A);
	stAnim(A);
	thirdAnim(A);
	stAnim(A);
	fourthAnim(A);
	stAnim(A);
	fifthAnim(A);
	stAnim(A);
	sixthAnim(A);
	stAnim(A);
	seventhAnim(A);
	stAnim(A);
	eighthAnim(A);
	stAnim(A);
	ninthAnim(A);
	stAnim(A);
	tenthAnim(A);
	stAnim(A);
	eleventhAnim(A);
	stAnim(A);
	twelfthAnim(A);
	stAnim(A);
	thirteenthAnim(A);
	stAnim(A);
	fourteenthAnim(A);
	stAnim(A);
	firstAnim(A);
	stAnim(A);
	secondAnim(A);
	stAnim(A);
	thirdAnim(A);
	stAnim(A);
	fourthAnim(A);
	stAnim(A);
	fifthAnim(A);
	stAnim(A);
	sixthAnim(A);
	stAnim(A);
	seventhAnim(A);
	stAnim(A);
	eighthAnim(A);
	stAnim(A);
	ninthAnim(A);
	stAnim(A);
	tenthAnim(A);
	stAnim(A);
	eleventhAnim(A);
	stAnim(A);
	twelfthAnim(A);
	stAnim(A);
	thirteenthAnim(A);
	stAnim(A);
	fourteenthAnim(A);
	stAnim(A);
}