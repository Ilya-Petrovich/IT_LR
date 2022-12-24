#include <iostream>
#include <unistd.h>

using namespace std;

void current(string arr[]);
void firstStage(string arr[]);
void secondStage(string arr[]);
void thirdStage(string arr[]);
void fourthStage(string arr[]);
void fifthStage(string arr[]);
void sixthStage(string arr[]);
void seventhStage(string arr[]);
void eightStage(string arr[]);
void nineStage(string arr[]);
void tenStage(string arr[]);
void elevenStage(string arr[]);
void twelveStage(string arr[]);
void thirteenStage(string arr[]);
void finalStage(string arr[]);

int main()
{
	//system("clear");	
	string S[]
	{
			"   _[]_   ",     //0
			"   |~~|   ",     //1
			"   |oq|   ",     //2
			"  (|<>|)  ",     //3
			"   \\--/  ",    //4
			"   _><_   ",    //5
			" -\\. /-  ",    //6
			" / |. | \\ ",    //7
			"/  |. |  \\",    //8
			"   |__|   ",    //9
			"    ||    ",     //10
			"   _||_   ",     //11
	};
	void (*func[14])(string[]) = { firstStage, secondStage, thirdStage, fourthStage, fifthStage, sixthStage, seventhStage, eightStage, nineStage, tenStage, elevenStage, twelveStage, thirteenStage, finalStage };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 14; j++) {
			current(S);
			func[j](S);
			//system("clear");
			if (i == 1 && j == 13) current(S);
		}
	}
	return 0;
}

void current(string arr[]) {
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << endl;
	}
	//sleep(1);
}

void firstStage(string arr[]) {
	arr[6] = " ---\\/--- ";
	arr[7] = "/   ||   \\";
	arr[8] = "    ||    ";
}

void secondStage(string arr[]) {
	arr[6] = "  --\\/----";
	arr[7] = " /  ||    ";
	arr[8] = "/   ||    ";
}

void thirdStage(string arr[]) {
	arr[5] = "  /|UU|\\ /";
	arr[6] = " ---\\/--- ";
	arr[7] = "/   ||    ";
	arr[8] = "    ||    ";
}

void fourthStage(string arr[]) {
	arr[4] = "  \\|  |/ /";
	arr[5] = "  /|UU|\\/ ";
	arr[6] = "  --\\/--  ";
	arr[7] = " /  ||    ";
	arr[8] = "/   ||    ";
}

void fifthStage(string arr[]) {
	arr[4] = "  \\|  |/ *";
	arr[5] = "  /|UU|\\/ ";
	arr[6] = " ---\\/--  ";
	arr[7] = "/   ||    ";
	arr[8] = "    ||    ";
}

void sixthStage(string arr[]) {
	arr[4] = "  \\|  |/ /";
	arr[6] = "----\\/--  ";
	arr[7] = "    ||    ";
}

void seventhStage(string arr[]) {
	arr[4] = "  \\|  |/ *";
	arr[5] = "\\ /|UU|\\/ ";
	arr[6] = " ---\\/--  ";
}

void eightStage(string arr[]) {
	arr[4] = "\\ \\|  |/ /";
	arr[5] = " \\/|UU|\\/ ";
	arr[6] = "  --\\/--  ";
}

void nineStage(string arr[]) {
	arr[4] = "* \\|  |/ *";
}

void tenStage(string arr[]) {
	arr[4] = "  \\|  |/  ";
	arr[5] = "* /|UU|\\ *";
	arr[6] = " ---\\/--- ";
}

void elevenStage(string arr[]) {
	arr[5] = "  /|UU|\\  ";
	arr[6] = "*---\\/---*";
}

void twelveStage(string arr[]) {
	arr[6] = " ---\\/--- ";
	arr[7] = "*   ||   *";
}

void thirteenStage(string arr[]) {
	arr[6] = "  --\\/--  ";
	arr[7] = " /  ||  \\ ";
	arr[8] = "*   ||   *";
}

void finalStage(string arr[]) {
	arr[8] = "/   ||   \\";
}