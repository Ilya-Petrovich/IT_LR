#include <iostream>
//#include <unistd.h>

using namespace std;

//void sleep() {
//	Sleep(1000);
//	system("cls");
//}

void print(string character[12]) {
	for (int i = 0; i < 12; i++) {
		cout << character[i] << endl;
	}
}

void change_character(string character[12], int state) {
	switch (state) {
	case 1:
		character[6] = R"( --\. /-- )";//6
		character[7] = R"(/  |. |  \)";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 2:
		character[6] = R"(  -\. /---)";//6
		character[7] = R"( / |. |   )";//7
		character[8] = R"(/  |. |   )";//8
		break;
	case 3:
		character[5] = "   _><_  /",//5
			character[6] = R"(  -\. /-- )";//6
		character[7] = R"(/  |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 4:
		character[4] = R"(   \--/  /)",//4
			character[5] = "   _><_ / ",//5
			character[6] = R"(  -\. /-  )";//6
		character[7] = R"( / |. |   )";//7
		character[8] = R"(/  |. |   )";//8
		break;
	case 5:
		character[4] = R"(   \--/  *)",//4
			character[5] = "   _><_ / ",//5
			character[6] = R"( --\. /-  )";//6
		character[7] = R"(/  |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 6:
		character[4] = R"(   \--/  /)",//4
			character[5] = "   _><_ / ",//5
			character[6] = R"(---\. /-  )";//6
		character[7] = R"(   |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 7:
		character[4] = R"(   \--/  *)",//4
			character[5] = R"(\  _><_ / )",//5
			character[6] = R"( --\. /-  )";//6
		character[7] = R"(   |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 8:
		character[4] = R"(\  \--/  /)",//4
			character[5] = R"( \ _><_ / )",//5
			character[6] = R"(  -\. /-  )";//6
		character[7] = R"(   |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 9:
		character[4] = R"(*  \--/  *)",//4
			character[5] = R"( \ _><_ / )",//5
			character[6] = R"(  -\. /-  )";//6
		character[7] = R"(   |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 10:
		character[4] = R"(   \--/   )",//4
			character[5] = R"( * _><_ * )",//5
			character[6] = R"( --\. /-- )";//6
		character[7] = R"(   |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 11:
		character[4] = R"(   \--/   )",//4
			character[5] = R"(   _><_   )",//5
			character[6] = R"(*--\. /--*)";//6
		character[7] = R"(   |. |   )";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 12:
		character[4] = R"(   \--/   )",//4
			character[5] = R"(   _><_   )",//5
			character[6] = R"( --\. /-- )";//6
		character[7] = R"(*  |. |  *)";//7
		character[8] = R"(   |. |   )";//8
		break;
	case 13:
		character[4] = R"(   \--/   )",//4
			character[5] = R"(   _><_   )",//5
			character[6] = R"(  -\. /-  )";//6
		character[7] = R"( / |. | \ )";//7
		character[8] = R"(*  |. |  *)";//8
		break;
	case 14:
		character[4] = R"(   \--/   )",//4
			character[5] = R"(   _><_   )",//5
			character[6] = R"(  -\. /-  )";//6
		character[7] = R"( / |. | \ )";//7
		character[8] = R"(/  |. |  \)";//8
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
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j <= 14; j++) {
			print(character);
			change_character(character, j);
			//sleep();
		}
	}
	change_character(character, 14);
	print(character);
	//sleep();
	return 0;
}