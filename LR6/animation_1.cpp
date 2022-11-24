#include<iostream>
#include<unistd.h>
#include<string>

using namespace std;
void nnn(string chel[],int x) {
	for (int i = 0; i < x; i++) cout << chel[i] << endl;
//	Sleep(700);
//	system("cls");
}
void dance(string chel[],int x) {
	int i = 0;
	while (i < 2) {
		nnn(chel, x);
		chel[6] = "  --| *|--     ";
		chel[7] = " /  |  |  \\";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[6] = "   -| *|---";
		chel[7] = "  / |  |";
		chel[8] = " /   \\/";
		nnn(chel, x);
		chel[5] = "     ||   /";
		chel[6] = "  --| *|--";
		chel[7] = " /  |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[4] = "    \\__/   /";
		chel[5] = "     ||   /";
		chel[6] = "   -| *|--";
		chel[7] = "  / |  |";
		chel[8] = " /   \\/";
		nnn(chel, x);
		chel[4] = "    \\__/   *";
		chel[5] = "     ||   /";
		chel[6] = "  --| *|-";
		chel[7] = " /  |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[4] = "    \\__/  /";
		chel[5] = "     ||  /";
		chel[6] = " ---| *|-";
		chel[7] = "    |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[4] = "    \\__/  *";
		chel[5] = " \\   ||  /";
		chel[6] = "  --| *|-";
		chel[7] = "    |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[4] = " \\  \\__/  /";
		chel[5] = "  \\  ||  /";
		chel[6] = "   -| *|-";
		chel[7] = "    |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[4] = " *  \\__/  *";
		chel[5] = "  \\  ||  /";
		chel[6] = "   -| *|-";
		chel[7] = "    |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[4] = "    \\__/";
		chel[5] = " *   ||   *";
		chel[6] = "  --| *|--";
		chel[7] = "    |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[5] = "     ||";
		chel[6] = " *--| *|--*";
		chel[7] = "    |  |";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[6] = "  --| *|--";
		chel[7] = " *  |  |  *";
		chel[8] = "     \\/";
		nnn(chel, x);
		chel[6] = "   -| *|-";
		chel[7] = "  / |  | \\";
		chel[8] = " *   \\/   *";
		nnn(chel, x);
		chel[6] = "   -| *|-";
		chel[7] = "  / |  | \\";
		chel[8] = " /   \\/   \\";
		nnn(chel, x);
		i++;
	}
}
int main() {
	const int x = 12;
	string chel[x] = {"     /\\     ","    |oo|      ","   (|..|)        ","    |--|      ","    \\__/               ","     ||         ","   -| *|-        ","  / |  | \\        "," /   \\/   \\        ","     /\\        ","     ||","    _||_"};
	dance(chel,x);
	return 0;
}