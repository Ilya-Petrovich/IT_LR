#include <iostream>
#include <unistd.h>

using namespace std;

//void sleep() {
//	Sleep(1000);
	//system("cls");
//}

void print(string character[12]) {
	for (int i = 0; i < 12; i++) {
		cout << character[i] << endl;
	}
}

void change_character(string person[12], int state) {
	switch (state) {
	case 1:
		person[6] = " --\\. /-- ";
		person[7] = "/  |. |  \\";
		person[8] = "   |. |   ";
		break;
	case 2:
		person[6] = "  -\\. /---";
		person[7] = " / |. |   ";
		person[8] = "/  |. |   ";
		break;
	case 3:
		person[5] = "   _><_  /";
		person[6] = " --\\. /-- ";
		person[7] = "/  |. |   ";
		person[8] = "   |. |   ";
		break;
	case 4:
		person[4] = "   \\--/  /";
		person[5] = "   _><_ / ";
		person[6] = "  -\\. /-  ";
		person[7] = " / |. |   ";
		person[8] = "/  |. |   ";
		break;
	case 5:
		person[4] = "   \\--/  *";
		person[6] = " --\\. /-  ";
		person[7] = "/  |. |   ";
		person[8] = "   |. |   ";
		break;
	case 6:
		person[4] = "   \\--/  /";
		person[6] = "---\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		break;
	case 7:
		person[4] = "   \\--/  *";
		person[5] = "\\  _><_ / ";
		person[6] = " --\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		break;
	case 8:
		person[4] = "\\  \\--/  /";
		person[5] = " \\ _><_ / ";
		person[6] = "  -\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		break;
	case 9:
		person[4] = "*  \\--/  *";
		person[5] = " \\ _><_ / ";
		person[6] = "  -\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		break;
	case 10:
		person[4] = "   \\--/   ";
		person[5] = "*  _><_  *";
		person[6] = " --\\. /-- ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		break;
	case 11:
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = "*--\\. /--*";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		break;
	case 12:
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = " --\\. /-- ";
		person[7] = "*  |. |  *";
		person[8] = "   |. |   ";
		break;
	case 13:
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = "  -\\. /-  ";
		person[7] = " / |. | \\ ";
		person[8] = "*  |. |  *";
		break;
	case 14:
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = "  -\\. /-  ";
		person[7] = " / |. | \\ ";
		person[8] = "/  |. |  \\";
		break;
	}
}



int main() {
	int c = 1;
	string character[12]{
		"   _[]_   ",//0
		"   |~~|   ",//1
		"   |oq|   ",//2
		"  (|<>|)  ",//3
	  R"(   \--/   )",//4
		"   _><_   ",//5
	  R"(  -\. /-  )",//6
      R"( / |. | \ )",//7
	  R"(/  |. |  \)",//8
		"   |__|   ",//9
		"    ||    ",//10
		"   _||_   " };//11
	print(character);
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= 14; j++) {
			change_character(character, j);
			print(character);
			//sleep();
		}
	}
	//change_character(character, 14);
	//print(character);
	//sleep();
	return 0;
}
