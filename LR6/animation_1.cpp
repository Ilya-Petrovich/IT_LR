#include <unistd.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

void print(vector<string> sticman);
void box();
void dance(vector<string> sticman);
void start_state();

int main()
{ // 1
	vector<string> sticman =
	{
	"      /\\      ",//0
	"     |oo|     ",//1
	"    (|..|)    ",//2
	"     |--|     ",//3
	"     \\__/     ",//4
	"      ||      ",//5
	"    -| *|-    ",//6
	"   / |  | \\   ",//7
	"  /   \\/   \\   ",//8
	"      /\\      ",//9
	"      ||      ",//10
	"     _||_     ",//11
	};
	print(sticman);
	dance(sticman);
	start_state();
	return 0;
}
void print(vector<string> person)
{
	for (auto c : person)
		cout << c << endl;
}
void box()
{

}
void dance(vector<string> sticman)
{
	int x = 650;
	for (int i = 0; i < 2; i++)
	{	// state 1
		//Sleep(x * 1000);
		//system("cls");
		sticman[6] = "   --| *|--    ";
		sticman[7] = "  /  |  |  \\  ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 2
		//Sleep(x * 1000);
		//system("cls");
		sticman[6] = "    -| *|---  ";
		sticman[7] = "   / |  |     ";
		sticman[8] = "  /   \\/     ";
		print(sticman);

		//state 3
		//Sleep(x * 1000);
		//system("cls");
		sticman[5] = "      ||   /   ";
		sticman[6] = "   --| *|--    ";
		sticman[7] = "  /  |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 4
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/  /    ";
		sticman[5] = "      ||  /   ";
		sticman[6] = "    -| *|-    ";
		sticman[7] = "   / |  |      ";
		sticman[8] = "  /   \\/      ";
		print(sticman);

		//state 5
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/  *    ";
		sticman[5] = "      ||  /   ";
		sticman[6] = "   --| *|-    ";
		sticman[7] = "  /  |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 6
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/  /    ";
		sticman[5] = "      ||  /   ";
		sticman[6] = "  ---| *|-    ";
		sticman[7] = "     |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 7
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/  *    ";
		sticman[5] = "  \\   ||  /   ";
		sticman[6] = "   --| *|-    ";
		sticman[7] = "     |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		// state 8
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = " \\   \\__/  /    ";
		sticman[5] = "  \\   ||  /   ";
		sticman[6] = "   --| *|-    ";
		sticman[7] = "     |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		// state 9
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = " *   \\__/  *   ";
		sticman[5] = "  \\   ||  /   ";
		sticman[6] = "   --| *|-    ";
		sticman[7] = "     |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 10
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/     ";
		sticman[5] = "  *   ||   *   ";
		sticman[6] = "   --| *|--   ";
		sticman[7] = "     |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 11
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/     ";
		sticman[5] = "      ||       ";
		sticman[6] = "  *--| *|--*  ";
		sticman[7] = "     |  |      ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 12
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/     ";
		sticman[5] = "      ||       ";
		sticman[6] = "   --| *|--   ";
		sticman[7] = "  *  |  |  *   ";
		sticman[8] = "      \\/      ";
		print(sticman);

		//state 13
		//Sleep(x * 1000);
		//system("cls");
		sticman[4] = "     \\__/     ";
		sticman[5] = "      ||       ";
		sticman[6] = "    -| *|-    ";
		sticman[7] = "  /  |  |  \\   ";
		sticman[8] = " *    \\/    *  ";
		print(sticman);
        start_state();
	}
}
void start_state() {
	int x = 650;
	//Sleep(x * 1000);
	//system("cls");
	vector<string> sticman =
	{

	"      /\\      ",//0
	"     |oo|     ",//1
	"    (|..|)    ",//2
	"     |--|     ",//3
	"     \\__/     ",//4
	"      ||      ",//5
	"    -| *|-    ",//6
	"   / |  | \\   ",//7
	"  /   \\/   \\   ",//8
	"      /\\      ",//9
	"      ||      ",//10
	"     _||_     ",//11
	
	};
	print(sticman);
}