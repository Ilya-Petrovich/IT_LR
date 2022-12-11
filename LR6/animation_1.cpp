#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
using namespace std;

void print(vector<string> person)
{
	for (auto c : person)
		cout << c << endl;
}

int main()
{
	vector <string> person = { 
		"   _[]_   ",
		"   |~~|   ",
		"   |oq|   ",
		"  (|<>|)  ",
		"   \\--/   ",
		"   _><_   ",
		"  -\\. /-  ",
		" / |. | \\ ",
		"/  |. |  \\",
		"   |__|   ",
		"    ||    ",
		"   _||_   "
	};
	print(person);
	for (int i = 0; i < 2; ++i)
	{
		person[6] = " --\\. /-- ";
		person[7] = "/  |. |  \\";
		person[8] = "   |. |   ";
		print(person);
		person[6] = "  -\\. /---";
		person[7] = " / |. |   ";
		person[8] = "/  |. |   ";
		print(person);
		person[5] = "   _><_  /";
		person[6] = " --\\. /-- ";
		person[7] = "/  |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/  /";
		person[5] = "   _><_ / ";
		person[6] = "  -\\. /-  ";
		person[7] = " / |. |   ";
		person[8] = "/  |. |   ";
		print(person);
		person[4] = "   \\--/  *";
		person[6] = " --\\. /-  ";
		person[7] = "/  |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/  /";
		person[6] = "---\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/  *";
		person[5] = "\\  _><_ / ";
		person[6] = " --\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "\\  \\--/  /";
		person[5] = " \\ _><_ / ";
		person[6] = "  -\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "*  \\--/  *";
		person[5] = " \\ _><_ / ";
		person[6] = "  -\\. /-  ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/   ";
		person[5] = "*  _><_  *";
		person[6] = " --\\. /-- ";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = "*--\\. /--*";
		person[7] = "   |. |   ";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = " --\\. /-- ";
		person[7] = "*  |. |  *";
		person[8] = "   |. |   ";
		print(person);
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = "  -\\. /-  ";
		person[7] = " / |. | \\ ";
		person[8] = "*  |. |  *";
		print(person);
		person[4] = "   \\--/   ";
		person[5] = "   _><_   ";
		person[6] = "  -\\. /-  ";
		person[7] = " / |. | \\ ";
		person[8] = "/  |. |  \\";
		print(person);
	}
	return 0;
}