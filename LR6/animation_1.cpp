#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <unitstd.h>
using namespace std;

void print(vector<string>a){
	for (auto c : a) {
		cout << c << endl;
	}
}
void anim1(vector<string>b){
	b[6] = " --| *|-- ";
	b[7] = "/  |  |  \\";
	b[8][0] = ' ';
	b[8][size(b[8])-1] = ' ';
	print(b);
}
void anim2(vector<string>b) {
	b[6] = "  -| *|---";
	b[7] = " / |  |";
	b[8] = "/   \\/";
	print(b);
}
void anim3(vector<string>b) {
	b[5] = "    ||   /";
	b[6] = " --| *|--";
	b[7] = "/  |  | ";
	b[8] = "    \\/   ";
	print(b);
}
void anim4(vector<string>b) {
	b[5][8] = '/';
	b[4][9] = '/';
	b[7][8] = ' ';
	b[8][9] = ' ';
	print(b);
}
void anim5(vector<string>b) {
	b[4][9] = '*';
	b[5] = "    ||  / ";
	b[6] = " --| *|- ";
	b[7] = "/  |  | ";
	b[8] = "    \\/   ";
	print(b);
}
void anim6(vector<string>b) {
	b[4][9] = '/';
	b[5] = "    ||  / ";
	b[6] = "---| *|- ";
	b[7] = "   |  | ";
	b[8] = "    \\/   ";
	print(b);
}
void anim7(vector<string>b) {
	b[4][9] = '*';
	b[5] = "\\   ||  / ";
	b[6] = " --| *|- ";
	b[7] = "   |  | ";
	b[8] = "    \\/   ";
	print(b);
}
void anim8(vector<string>b){
	b[4] = "\\  \\__/  /";
	b[5] = " \\  ||  /";
	b[6] = "  -| *|-  ";
	b[7] = "   |  |   ";
	b[8] = "    \\/     ";
	print(b);
}
void anim9(vector<string>b) {
	b[4] = "*  \\__/  *";
	b[5] = " \\  ||  /";
	b[6] = "  -| *|-  ";
	b[7] = "   |  |   ";
	b[8] = "    \\/     ";
	print(b);
}
void anim10(vector<string>b) {
	b[4] = "   \\__/  ";
	b[5] = "*   ||   *";
	b[6] = " --| *|-- ";
	b[7] = "   |  |   ";
	b[8] = "    \\/     ";
	print(b);
}
void anim11(vector<string>b) {
	b[4] = "   \\__/  ";
	b[5] = "    ||    ";
	b[6] = "*--| *|--*";
	b[7] = "   |  |   ";
	b[8] = "    \\/     ";
	print(b);
}
void anim12(vector<string>b) {
	b[4] = "   \\__/  ";
	b[5] = "    ||    ";
	b[6] = " --| *|-- ";
	b[7] = "*  |  |  *";
	b[8] = "    \\/     ";
	print(b);
}
void anim13(vector<string>b) {
	b[4] = "   \\__/  ";
	b[5] = "    ||    ";
	b[6] = "  -| *|-  ";
	b[7] = " / |  |  \\";
	b[8] = "*   \\/    *";
	print(b);
}
int main(){
					//012345678910
vector<string> a = {"    /\\    ",//0
					"   |oo|   ",//1
					"  (|..|)  ",//2
					"   |--|   ",//3
					"   \\__/   ",//4
					"    ||     ",//5
					"  -| *|-  ",//6
					" / |  | \\ ",//7
					"/   \\/   \\",//8
					"    /\\    ",//9
					"    ||    ",//10
					"   _||_   "};//11
for (int j = 0; j < 2; ++j) {
	for (int i = 0; i < 14; i++) {
		if (i == 0)
			print(a);
		if (i == 1)
			anim1(a);
		if (i == 2)
			anim2(a);
		if (i == 3)
			anim3(a);
		if (i == 4)
			anim4(a);
		if (i == 5)
			anim5(a);
		if (i == 6)
			anim6(a);
		if (i == 7)
			anim7(a);
		if (i == 8)
			anim8(a);
		if (i == 9)
			anim9(a);
		if (i == 10)
			anim10(a);
		if (i == 11)
			anim11(a);
		if (i == 12)
			anim12(a);
		if (i == 13)
			anim13(a);
		//Sleep(5000);
		//system("cls");
	}
}
	return 0;
}
