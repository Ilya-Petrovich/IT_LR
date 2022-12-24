#include <iostream>
#include <string>
#include <unistd.h>

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

void anim1(string a[]) {
	a[6] = " --\\. /-- ";
	a[7] = "/  |. |  \\";
	a[8] = "   |. |   ";
	pechat(a);
}

void anim2(string a[]) {
	a[6] = "  -\\. /---";
	a[7] = " / |. |   ";
	a[8] = "/  |. |   ";
	pechat(a);
}

void anim3(string a[]) {
	a[5] = "   _><_  /";
	a[6] = " --\\. /-- ";
	a[7] = "/  |. |   ";
	a[8] = "   |. |   ";
	pechat(a);
}

void anim4(string a[]) {
	a[4] = "   \\--/  /";
	a[5] = "   _><_ / ";
	a[6] = "  -\\. /-  ";
	a[7] = " / |. |   ";
	a[8] = "/  |. |   ";
	pechat(a);
}

void anim5(string a[]) {
	a[4] = "   \\--/  *";
	a[6] = " --\\. /-  ";
	a[7] = "/  |. |   ";
	a[8] = "   |. |   ";
	pechat(a);
}

void anim6(string a[]) {
	a[4] = "   \\--/  /";
	a[6] = "---\\. /-  ";
	a[7] = "   |. |   ";
	pechat(a);
}

void anim7(string a[]) {
	a[4] = "   \\--/  *";
	a[5] = "\\  _><_ / ";
	a[6] = " --\\. /-  ";
	pechat(a);
}

void anim8(string a[]) {
	a[4] = "\\  \\--/  /";
	a[5] = " \\ _><_ / ";
	a[6] = "  -\\. /-  ";
	pechat(a);
}

void anim9(string a[]) {
	a[4] = "*  \\--/  *";
	pechat(a);
}

void anim10(string a[]) {
	a[4] = "   \\--/   ";
	a[5] = "*  _><_  *";
	a[6] = " --\\. /-- ";
	pechat(a);
}

void anim11(string a[]) {
	a[5] = "   _><_   ";
	a[6] = "*--\\. /--*";
	pechat(a);
}

void anim12(string a[]) {
	a[6] = " --\\. /-- ";
	a[7] = "*  |. |  *";
	pechat(a);
}

void anim13(string a[]) {
	a[6] = "  -\\. /-  ";
	a[7] = " / |. | \\ ";
	a[8] = "*  |. |  *";
	pechat(a);
}

void anim14(string a[]) {
	a[8] = "/  |. |  \\";
	pechat(a);
}

int main() {
	pechat(a);
	for (int i = 1; i <= 2; i++) {
		anim1(a);
		anim2(a);
		anim3(a);
		anim4(a);
		anim5(a);
		anim6(a);
		anim7(a);
		anim8(a);
		anim9(a);
		anim10(a);
		anim11(a);
		anim12(a);
		anim13(a);
		anim14(a);
	}
}