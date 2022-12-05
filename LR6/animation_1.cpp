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
		system("cls");
		a[6] = " ---\\/--- ";
		a[7] = "/   ||   \\";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[6] = "  --\\/----";
		a[7] = " /  ||     ";
		a[8] = "/   ||    ";
		print(a);

		system("cls");
		a[5] = "  /|UU|\\ /";
		a[6] = " ---\\/--- ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/ ";
		a[6] = "  --\\/--  ";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);

		system("cls");
		a[4] = "  \\|  |/ *";
		a[5] = "  /|UU|\\/ ";
		a[6] = " ---\\/--  ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/ ";
		a[6] = "----\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[4] = "  \\|  |/ *";
		a[5] = "\\ /|UU|\\/ ";
		a[6] = " ---\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[4] = "\\ \\|  |/ /";
		a[5] = " \\/|UU|\\/ ";
		a[6] = " ---\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[4] = "* \\|  |/ *";
		a[5] = " \\/|UU|\\/ ";
		a[6] = " ---\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[4] = "  \\|  |/  ";
		a[5] = "* /|UU|\\ *";
		a[6] = " ---\\/--- ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);

		system("cls");
		a[5] = "  /|UU|\\  ";
		a[6] = "*---\\/---*";
		print(a);

		system("cls");
		a[6] = " ---\\/--- ";
		a[7] = "*   ||   *";
		a[8] = "    ||    ";
		print(a);

		system("cls");
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