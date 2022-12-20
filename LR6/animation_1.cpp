#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	const int k = 12;
	string anim[k] = {
		"    /\\    ",
		"   |oo|   ",
		"  (|..|)  ",
		"   |--|   ",
		"   \\__/   ",
		"    ||    ",
		"  -| *|-  ",
		" / |  | \\ ",
		"/   \\/   \\",
		"    /\\    ",
		"    ||    ",
		"   _||_   "
	};
	for (int a = 0; a < 2; a++)
	{
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[6] = " --| *|-- ";
		anim[7] = "/  |  |  \\";
		anim[8] = "    \\/    ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[6] = "  -| *|---";
		anim[7] = " / |  |   ";
		anim[8] = "/   \\/    ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[5] = "    ||   /";
		anim[6] = " --| *|-- ";
		anim[7] = "/  |  |   ";
		anim[8] = "    \\/    ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "   \\__/  /";
		anim[5] = "    ||  / ";
		anim[6] = "  -| *|-  ";
		anim[7] = " / |  |   ";
		anim[8] = "/   \\/    ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "   \\__/  *";
		anim[5] = "    ||  / ";
		anim[6] = " --| *|-  ";
		anim[7] = "/  |  |   ";
		anim[8] = "    \\/    ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "   \\__/  /";
		anim[5] = "    ||  / ";
		anim[6] = "---| *|-  ";
		anim[7] = "   |  |   ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "   \\__/  *";
		anim[5] = "\\   ||  / ";
		anim[6] = " --| *|-  ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "\\  \\__/  /";
		anim[5] = " \\  ||  / ";
		anim[6] = "  -| *|-  ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "*  \\__/  *";
		anim[5] = " \\  ||  / ";
		anim[6] = "  -| *|-  ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[4] = "   \\__/   ";
		anim[5] = "*   ||   *";
		anim[6] = " --| *|-- ";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[5] = "    ||    ";
		anim[6] = "*--| *|--*";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[6] = " --| *|-- ";
		anim[7] = "*  |  |  *";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[6] = "  -| *|-  ";
		anim[7] = " / |  | \\ ";
		anim[8] = "*   \\/   *";
		for (int a = 0; a < k; a++) cout << anim[a] << "\n";
		anim[7] = " / |  | \\ ";
		anim[8] = "/   \\/   \\";
	}
	for (int a = 0; a < k; a++) cout << anim[a] << "\n";
	return 0;
}