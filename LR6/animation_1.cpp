#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
using namespace std;
void print(vector<string>a);
void anim();
void print(vector<string>a) {
	for (auto c : a)
		cout << c << endl;
}
void anim() {
	vector <string> a = { "   ()()   " ,
						  "   ()()   " ,
						  "   ()()   " ,
						  "   |..|   " ,
						  "  \\|  |/  " ,
						  "  /|UU|\\  " ,
						  "  --\\/--  " ,
						  " /  ||  \\ " ,
						  "/   ||   \\" ,
						  "    /\\    " ,
						  "    ||    " ,
						  "   _||_   "
	};
	print(a);
	int i = 0;

	while (i < 2) {
		a[6] = " ---\\/--- ";
		a[7] = "/   ||   \\";
		a[8] = "    ||    ";
		print(a);

		a[6] = "  --\\/----";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);

		a[5] = "  /|UU|\\ /";
		a[6] = " ---\\/--- ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);

		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/ ";
		a[6] = "  --\\/--  ";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);

		a[4] = "  \\|  |/ *";
		a[6] = " ---\\/--  ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);

		a[4] = "  \\|  |/ /";
		a[6] = "----\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);

		a[4] = "  \\|  |/ *";
		a[5] = "\\ /|UU|\\/ ";
		a[6] = " ---\\/--  ";
		print(a);

		a[4] = "\\ \\|  |/ /";
		a[5] = " \\/|UU|\\/ ";
		a[6] = "  --\\/--  ";
		print(a);

		a[4] = "* \\|  |/ *";
		print(a);

		a[4] = "  \\|  |/  ";
		a[5] = "* /|UU|\\ *";
		a[6] = " ---\\/--- ";
		print(a);

		a[5] = "  /|UU|\\  ";
		a[6] = "*---\\/---*";
		print(a);

		a[6] = " ---\\/--- ";
		a[7] = "*   ||   *";
		print(a);

		a[6] = "  --\\/--  ";
		a[7] = " /  ||  \\ ";
		a[8] = "*   ||   *";
		print(a);

		a[8] = "/   ||   \\";
		print(a);

		i++;
	}
}

int main()
{
	anim();
	return 0;
}