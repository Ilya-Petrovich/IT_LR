#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

void animation(string* person);

int main() {
	string person[12] = { "   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/   ", "   _><_   ", "  -\\. /-  ", " / |. | \\ ", "/  |. |  \\", "   |__|   ", "    ||    ", "   _||_   " };

	animation(&person[0]); // 2
	person[6] = " --\\. /-- ";
	person[7] = "/  |. |  \\";
	person[8] = "   |. |    ";
	animation(&person[0]); // 3
	person[6] = "  -\\. /---";
	person[7] = " / |. |   ";
	person[8] = "/  |. |    ";
	animation(&person[0]); // 4
	person[5] = "   _><_  /";
	person[6] = " --\\. /-- ";
	person[7] = "/  |. |  ";
	person[8] = "   |. |    ";
	animation(&person[0]); // 5
	person[4] = "   \\--/  /";
	person[5] = "   _><_ / ";
	person[6] = "  -\\. /-  ";
	person[7] = " / |. |   ";
	person[8] = "/  |. |   ";
	animation(&person[0]); // 6
	person[4] = "   \\--/  *";
	person[5] = "   _><_ / ";
	person[6] = " --\\. /-  ";
	person[7] = "/  |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 7
	person[4] = "   \\--/  /";
	person[5] = "   _><_ / ";
	person[6] = "---\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 8
	person[4] = "   \\--/  *";
	person[5] = "\\  _><_ / ";
	person[6] = " --\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 9
	person[4] = "\\  \\--/  /";
	person[5] = " \\ _><_ / ";
	person[6] = "  -\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 10
	person[4] = "*  \\--/  *";
	person[5] = " \\ _><_ / ";
	person[6] = "  -\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 11
	person[4] = "   \\--/   ";
	person[5] = "*  _><_  *";
	person[6] = " --\\. /-- ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 12
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "*--\\. /--*";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 13
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = " --\\. /-- ";
	person[7] = "*  |. |  *";
	person[8] = "   |. |   ";
	animation(&person[0]); // 14
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "  -\\. /-  ";
	person[7] = " / |. | \\ ";
	person[8] = "*  |. |  *";
	animation(&person[0]); // 15
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "  -\\. /-  ";
	person[7] = " / |. | \\ ";
	person[8] = "/  |. |  \\";
	animation(&person[0]); // 16
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = " --\\. /-- ";
	person[7] = "/  |. |  \\";
	person[8] = "   |. |    ";
	animation(&person[0]); // 17
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "  -\\. /---";
	person[7] = " / |. |   ";
	person[8] = "/  |. |   ";
	animation(&person[0]); // 18
	person[4] = "   \\--/   ";
	person[5] = "   _><_  /";
	person[6] = " --\\. /-- ";
	person[7] = "/  |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 19
	person[4] = "   \\--/  /";
	person[5] = "   _><_ / ";
	person[6] = "  -\\. /-  ";
	person[7] = " / |. |   ";
	person[8] = "/  |. |   ";
	animation(&person[0]); // 20
	person[4] = "   \\--/  *";
	person[5] = "   _><_ / ";
	person[6] = " --\\. /-  ";
	person[7] = "/  |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 21
	person[4] = "   \\--/  /";
	person[5] = "   _><_ / ";
	person[6] = "---\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 22
	person[4] = "   \\--/  *";
	person[5] = "\\  _><_ / ";
	person[6] = " --\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 23
	person[4] = "\\  \\--/  /";
	person[5] = " \\ _><_ / ";
	person[6] = "  -\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); //24
	person[4] = "*  \\--/  *";
	person[5] = " \\ _><_ / ";
	person[6] = "  -\\. /-  ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); //25
	person[4] = "   \\--/   ";
	person[5] = "*  _><_  *";
	person[6] = " --\\. /-- ";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); //26
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "*--\\. /--*";
	person[7] = "   |. |   ";
	person[8] = "   |. |   ";
	animation(&person[0]); // 27
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = " --\\. /-- ";
	person[7] = "*  |. |  *";
	person[8] = "   |. |   ";
	animation(&person[0]); // 28
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "  -\\. /-  ";
	person[7] = " / |. | \\ ";
	person[8] = "*  |. |  *";
	animation(&person[0]); // 29
	person[4] = "   \\--/   ";
	person[5] = "   _><_   ";
	person[6] = "  -\\. /-  ";
	person[7] = " / |. | \\ ";
	person[8] = "/  |. |  \\";
	animation(&person[0]);

	return 0;
}


void animation(string* person) {
	int i = 0;
	for (i; i < 12; i++) {
		cout << *person << endl;
		person++;
	}
	//Sleep(i * 200);
	//system("cls");
}