#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <stdio.h>
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

int main()
{
    string S[]
    { 
        "   ()()   ",     //0
        "   ()()   ",     //1
        "   ()()   ",     //2
        "   |..|   ",     //3
        "  \\|  |/  ",    //4
        "  /|UU|\\  ",    //5
        "  --\\/--  ",    //6
        " /  ||  \\ ",    //7
        "/   ||   \\",    //8
        "    /\\    ",    //9
        "    ||    ",     //10
        "   _||_   ",     //11
    };
    //void (*func[6]) = { firstStage, secondStage, thirdStage, fourthStage, fifthStage, sixthStage};
	for (int i = 0; i < 2; i++) {
		current(S);
		firstStage(S);
		current(S);
		secondStage(S);
		current(S);
		thirdStage(S);
		current(S);
		fourthStage(S);
		current(S);
		fifthStage(S);
		current(S);
		sixthStage(S);
		current(S);
		seventhStage(S);
		current(S);
		eightStage(S);
		current(S);
		nineStage(S);
		current(S);
		tenStage(S);
		current(S);
		elevenStage(S);
		current(S);
		twelveStage(S);
		current(S);
		thirteenStage(S);
	}
	current(S);
	firstStage(S);
	current(S);
	return 0;
}

void current(string arr[]) {
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << endl;
	}
	//Sleep(1000);
	//system("cls");
}

void firstStage(string arr[]) {
	arr[6] = " ---\\/--- ";
	arr[7] = "/   ||   \\";
	arr[8] = "    ||     ";
}

void secondStage(string arr[]) {
	arr[6] = "  --\\/---- ";
	arr[7] = " /  ||   ";
	arr[8] = "/   ||   ";
}

void thirdStage(string arr[]) {
	arr[5] = "  /|UU|\\ /";
	arr[6] = " ---\\/--- ";
	arr[7] = "/   ||     ";
	arr[8] = "    ||     ";
}

void fourthStage(string arr[]) {
	arr[4] = "  \\|  |/ /";
	arr[5] = "  /|UU|\\/ ";
	arr[6] = "  --\\/--  ";
	arr[7] = " /  ||     ";
	arr[8] = "/   ||     ";
}

void fifthStage(string arr[]) {
	arr[4] = "  \\|  |/ *";
	arr[5] = "  /|UU|\\/ ";
	arr[6] = " ---\\/--  ";
	arr[7] = "/   ||     ";
	arr[8] = "    ||     ";
}

void sixthStage(string arr[]) {
	arr[4] = "  \\|  |/ /";
	arr[6] = "----\\/--  ";
	arr[7] = "    ||     ";
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
	arr[5] = "*\\/|UU|\\ *";
	arr[6] = " ---\\/--- ";
}

void elevenStage(string arr[]) {
	arr[5] = " \\/|UU|\\  ";
	arr[6] = "*---\\/---*";
}

void twelveStage(string arr[]) {
	arr[6] = " ---\\/--- ";
	arr[7] = "*   ||   *";
}

void thirteenStage(string arr[]) {
	arr[6] = "  --\\/--  ";
	arr[7] = " /  ||   \\ ";
	arr[8] = "*   ||    *";
}
