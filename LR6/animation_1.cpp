#include <unistd.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int count = 0;

void print(vector<string> sticman);
void dance(vector<string> sticman)
{
	print(sticman);
	for (int i = 0; i < 2; i++)
		
	{	
		sticman[6] = " --| *|-- ";
		sticman[7] = "/  |  |  \\";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[6] = "  -| *|---";
		sticman[7] = " / |  |   ";
		sticman[8] = "/   \\/    ";
		print(sticman);

		
		sticman[5] = "    ||   /";
		sticman[6] = " --| *|-- ";
		sticman[7] = "/  |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/  /";
		sticman[5] = "    ||  / ";
		sticman[6] = "  -| *|-  ";
		sticman[7] = " / |  |   ";
		sticman[8] = "/   \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/  *";
		sticman[5] = "    ||  / ";
		sticman[6] = " --| *|-  ";
		sticman[7] = "/  |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/  /";
		sticman[5] = "    ||  / ";
		sticman[6] = "---| *|-  ";
		sticman[7] = "   |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/  *";
		sticman[5] = "\\   ||  / ";
		sticman[6] = " --| *|-  ";
		sticman[7] = "   |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "\\  \\__/  /";
		sticman[5] = " \\  ||  / ";
		sticman[6] = "  -| *|- ";
		sticman[7] = "   |  |  ";
		sticman[8] = "    \\/   ";
		print(sticman);

		
		sticman[4] = "*  \\__/  *";
		sticman[5] = " \\  ||  / ";
		sticman[6] = "  -| *|-  ";
		sticman[7] = "   |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/   ";
		sticman[5] = "*   ||   *";
		sticman[6] = " --| *|-- ";
		sticman[7] = "   |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/   ";
		sticman[5] = "    ||    ";
		sticman[6] = "*--| *|--*";
		sticman[7] = "   |  |   ";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/   ";
		sticman[5] = "    ||    ";
		sticman[6] = " --| *|-- ";
		sticman[7] = "*  |  |  *";
		sticman[8] = "    \\/    ";
		print(sticman);

		
		sticman[4] = "   \\__/   ";
		sticman[5] = "    ||    ";
		sticman[6] = "  -| *|-  ";
		sticman[7] = " / |  | \\ ";
		sticman[8] = "*   \\/   *";
		print(sticman);

		
		sticman[8] = "/   \\/   \\";
		print(sticman);
	}
}

int main()
{ // 1
	vector<string> sticman =
	{
	"    /\\    ",//0
	"   |oo|   ",//1
	"  (|..|)  ",//2
	"   |--|   ",//3
	"   \\__/   ",//4
	"    ||    ",//5
	"  -| *|-  ",//6
	" / |  | \\ ",//7
	"/   \\/   \\",//8
	"    /\\    ",//9
	"    ||    ",//10
	"   _||_   "//11
	};
	
	dance(sticman);

	return 0;
}
void print(vector<string> person)
{
	for (auto c : person)
		cout << c << endl;
	count+= 1;
}

