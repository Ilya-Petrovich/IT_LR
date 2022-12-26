#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string a[12]{
	"   _[]_   ", //0
	"   |oq|   ", //1
	"   |~~|   ", //2
	"  (|<>|)  ", //3
	"   \\--/   ", //4
	"   _><_   ", //5
	"  -\\. /-  ", //6 
	" / |. | \\ ", //7
	"/  |. |  \\", //8
	"   |__|   ", //9
	"    ||    ", //10
	"   _||_   " //11
};

void pechat(string a[]) {
	for (int i = 0; i < 12; i++) {
		cout << a[i] << endl;
	}
}

void stage1(string a[]) {
	a[6] = " --\\. /-- ";
	a[7] = "/  |. |  \\";
	a[8] = "   |. |   ";
	pechat(a);
}

void stage2(string a[]) {
	a[6] = "  -\\. /---";
	a[7] = " / |. |   ";
	a[8] = "/  |. |   ";
	pechat(a);
}

void stage3(string a[]) {
	a[5] = "   _><_  /";
	a[6] = " --\\. /-- ";
	a[7] = "/  |. |   ";
	a[8] = "   |. |   ";
	pechat(a);
}

void stage4(string a[]) {
	a[4] = "   \\--/  /";
	a[5] = "   _><_ / ";
	a[6] = "  -\\. /-  ";
	a[7] = " / |. |   ";
	a[8] = "/  |. |   ";
	pechat(a);
}

void stage5(string a[]) {
	a[4] = "   \\--/  *";
	a[6] = " --\\. /-  ";
	a[7] = "/  |. |   ";
	a[8] = "   |. |   ";
	pechat(a);
}

void stage6(string a[]) {
	a[4] = "   \\--/  /";
	a[6] = "---\\. /-  ";
	a[7] = "   |. |   ";
	pechat(a);
}

void stage7(string a[]) {
	a[4] = "   \\--/  *";
	a[5] = "\\  _><_ / ";
	a[6] = " --\\. /-  ";
	pechat(a);
}

void stage8(string a[]) {
	a[4] = "\\  \\--/  /";
	a[5] = " \\ _><_ / ";
	a[6] = "  -\\. /-  ";
	pechat(a);
}

void stage9(string a[]) {
	a[4] = "*  \\--/  *";
	pechat(a);
}

void stage10(string a[]) {
	a[4] = "   \\--/   ";
	a[5] = "*  _><_  *";
	a[6] = " --\\. /-- ";
	pechat(a);
}

void stage11(string a[]) {
	a[5] = "   _><_   ";
	a[6] = "*--\\. /--*";
	pechat(a);
}

void stage12(string a[]) {
	a[6] = " --\\. /-- ";
	a[7] = "*  |. |  *";
	pechat(a);
}

void stage13(string a[]) {
	a[6] = "  -\\. /-  ";
	a[7] = " / |. | \\ ";
	a[8] = "*  |. |  *";
	pechat(a);
}

void stage14(string a[]) {
	a[8] = "/  |. |  \\";
	pechat(a);
}

int main() {
	pechat(a);
	for (int i = 1; i <= 2; i++) {
		stage1(a);
		stage2(a);
		stage3(a);
		stage4(a);
		stage5(a);
		stage6(a);
		stage7(a);
		stage8(a);
		stage9(a);
		stage10(a);
		stage11(a);
		stage12(a);
		stage13(a);
		stage14(a);
	}
}