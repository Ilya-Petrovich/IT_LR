#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
using namespace std;

void print(vector<string>a)
{
	for (auto c : a)
		cout << c << endl;g
}

int main()
{
	vector <string> a = { "   _[]_   ",
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
	print(a);
	//sleep(1);
	int i = 0;
	while (i < 2)
	{
		//system("clear");
		a[6] = " --\\. /-- ";
		a[7] = "/  |. |  \\";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[6] = "  -\\. /---";
		a[7] = " / |. |   ";
		a[8] = "/  |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[5] = "   _><_  /";
		a[6] = " --\\. /-- ";
		a[7] = "/  |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/  /";
		a[5] = "   _><_ / ";
		a[6] = "  -\\. /-  ";
		a[7] = " / |. |   ";
		a[8] = "/  |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/  *";
		a[6] = " --\\. /-  ";
		a[7] = "/  |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/  /";
		a[6] = "---\\. /-  ";
		a[7] = "   |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/  *";
		a[5] = "\\  _><_ / ";
		a[6] = " --\\. /-  ";
		a[7] = "   |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "\\  \\--/  /";
		a[5] = " \\ _><_ / ";
		a[6] = "  -\\. /-  ";
		a[7] = "   |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "*  \\--/  *";
		a[5] = " \\ _><_ / ";
		a[6] = "  -\\. /-  ";
		a[7] = "   |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/   ";
		a[5] = "*  _><_  *";
		a[6] = " --\\. /-- ";
		a[7] = "   |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/   ";
		a[5] = "   _><_   ";
		a[6] = "*--\\. /--*";
		a[7] = "   |. |   ";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/   ";
		a[5] = "   _><_   ";
		a[6] = " --\\. /-- ";
		a[7] = "*  |. |  *";
		a[8] = "   |. |   ";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/   ";
		a[5] = "   _><_   ";
		a[6] = "  -\\. /-  ";
		a[7] = " / |. | \\ ";
		a[8] = "*  |. |  *";
		print(a);
		//sleep(1);
		//system("clear");
		a[4] = "   \\--/   ";
		a[5] = "   _><_   ";
		a[6] = "  -\\. /-  ";
		a[7] = " / |. | \\ ";
		a[8] = "/  |. |  \\";
		print(a);
		//sleep(1);
		i = i + 1;
	}
	return 0;
}