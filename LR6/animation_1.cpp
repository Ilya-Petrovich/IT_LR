#include <iostream>
#include <unistd.h>
using namespace std;

void inp_func(string a[], int n);
void changes(string a[], int n);
void clean();

int main() {

	string arr[] = {
	"   ()()   ",
	"   ()()   ",
	"   ()()   ",
	"   |..|   ",
	"  \\|  |/  ",
	"  /|UU|\\  ",
	"  --\\/--  ",
	" /  ||  \\ ",
	"/   ||   \\",
	"    /\\    ",
	"    ||    ",
	"   _||_   "
	};
	int n = sizeof(arr) / sizeof(arr[0]);
	inp_func(arr, n);
	clean();
	changes(arr, n);
	return 0;
}
void inp_func(string a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}

}
void changes(string a[], int n) {
	for (int i = 0; i < 2; i++) {
		a[6] = " ---\\/--- "; a[7] = "/   ||   \\"; a[8] = "    ||    ";
		inp_func(a, n); //Sleep(400); clean();
		a[6] = "  --\\/----"; a[7] = " /  ||    "; a[8] = "/   ||    ";
		inp_func(a, n); //Sleep(400); clean();
		a[5] = "  /|UU|\\  /"; a[6] = " ---\\/--- "; a[7] = a[8]; a[8] = "    ||    ";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "  \\|  |/ /"; a[5] = "  /|UU|\\/  "; a[6] = "  --\\/--  "; a[7] = " /  ||    "; a[8] = "/   ||    ";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "  \\|  |/ *"; a[6] = " ---\\/--  "; a[7] = "/   ||    "; a[8] = "    ||    ";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "  \\|  |/ /"; a[5] = "  /|UU|\\/  "; a[6] = "----\\/--"; a[7] = "    ||    ";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "  \\|  |/ * "; a[5] = "\\ /|UU|\\/"; a[6] = " ---\\/--  ";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "\\ \\|  |/ /"; a[5] = " \\/|UU|\\/"; a[6] = "  --\\/--";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "* \\|  |/ *";
		inp_func(a, n); //Sleep(400); clean();
		a[4] = "  \\|  |/"; a[5] = "* /|UU|\\ *"; a[6] = " ---\\/---";
		inp_func(a, n); //Sleep(400); clean();
		a[5] = "  /|UU|\\"; a[6] = "*---\\/---*";
		inp_func(a, n); //Sleep(400); clean();
		a[6] = " ---\\/--- "; a[7] = "*   ||   *";
		inp_func(a, n); //Sleep(400); clean();
		a[6] = "  --\\/--  "; a[8] = a[7];  a[7] = " /  ||  \\";
		inp_func(a, n); //Sleep(400); clean();
		a[8] = "/   ||   \\";
		inp_func(a, n); //Sleep(400); clean();
	}
}
void clean() {
	//system("clear");
	//system("cls");

}