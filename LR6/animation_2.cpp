#include <iostream>
#include <cstdlib>
#include <string>
#include <unistd.h>
#include <stdio.h>
using namespace std;

void menu();
void dance();
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

void run();
void jump();
void ball();

int main()
{
	//system("clear");
	menu();
	return 0;
}

void menu(){
	int choice;
	cout << "Choose animation:" << endl;
	cout << "Dance: \t\t\t1" << endl;
	cout << "Run: \t\t\t2" << endl;
	cout << "Sit down and jump: \t3" << endl;
	cout << "Throw a ball: \t\t4" << endl << endl;
	cout << "Enter 5 for exit." << endl;
	cin >> choice;
	switch(choice){
		case 1: dance(); break;
		case 2: run(); break;
		case 3: jump(); break;
		case 4: ball(); break;
		case 5: exit(0);
	}
}

void dance(){
	//system("clear");
	string S[]
	{
		"****************************************",
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
        "*                                      *",	
		"*   ()()                               *",	
        "*   ()()                               *",	
        "*   ()()                               *",	
        "*   |..|                               *",	
        "*  \\|  |/                              *",
        "*  /|UU|\\                              *",	
        "*  --\\/--                              *",	
        "* /  ||  \\                             *",	
        "*/   ||   \\                            *",	
        "*    /\\                                *",
        "*    ||                                *",	
        "*   _||_                               *",	
		"****************************************"	
	};
	void (*func[14])(string[]) = { firstStage, secondStage, thirdStage, fourthStage, fifthStage, sixthStage, seventhStage, eightStage, nineStage, tenStage, elevenStage, twelveStage, thirteenStage, finalStage};
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 14; j ++){
			current(S);
			func[j](S);
			//system("clear");
			if(i == 1 && j == 13) current(S);	
		}
	}
	menu();
}

void current(string arr[]) {
	for (int i = 0; i < 20; i++) {
		cout << arr[i] << endl;
	}
	//sleep(1);
}

void firstStage(string arr[]) {
	arr[13] = "* ---\\/---                             *";
	arr[14] = "*/   ||   \\                            *";
	arr[15] = "*    ||                                *";
}

void secondStage(string arr[]) {
	arr[13] = "*  --\\/----                            *";
	arr[14] = "* /  ||                                *";
	arr[15] = "*/   ||                                *";
}

void thirdStage(string arr[]) {
	arr[12] = "*  /|UU|\\ /                            *";
	arr[13] = "* ---\\/---                             *";
	arr[14] = "*/   ||                                *";
	arr[15] = "*    ||                                *";
}

void fourthStage(string arr[]) {
	arr[11] = "*  \\|  |/ /                            *";
	arr[12] = "*  /|UU|\\/                             *";
	arr[13] = "*  --\\/--                              *";
	arr[14] = "* /  ||                                *";
	arr[15] = "*/   ||                                *";
}

void fifthStage(string arr[]) {
	arr[11] = "*  \\|  |/ *                            *";
	arr[12] = "*  /|UU|\\/                             *";
	arr[13] = "* ---\\/--                              *";
	arr[14] = "*/   ||                                *";
	arr[15] = "*    ||                                *";
}

void sixthStage(string arr[]) {
	arr[11] = "*  \\|  |/ /                            *";
	arr[13] = "*----\\/--                              *";
	arr[14] = "*    ||                                *";
}

void seventhStage(string arr[]) {
	arr[11] = "*  \\|  |/ *                            *";
	arr[12] = "*\\ /|UU|\\/                             *";
	arr[13] = "* ---\\/--                              *";
}

void eightStage(string arr[]) {
	arr[11] = "*\\ \\|  |/ /                            *";
	arr[12] = "* \\/|UU|\\/                             *";
	arr[13] = "*  --\\/--                              *";
}

void nineStage(string arr[]) {
	arr[11] = "** \\|  |/ *                            *";
}

void tenStage(string arr[]) {
	arr[11] = "*  \\|  |/                              *";
	arr[12] = "** /|UU|\\ *                            *";
	arr[13] = "* ---\\/---                             *";
}

void elevenStage(string arr[]) {
	arr[12] = "*  /|UU|\\                              *";
	arr[13] = "**---\\/---*                            *";
}

void twelveStage(string arr[]) {
	arr[13] = "* ---\\/---                             *";
	arr[14] = "**   ||   *                            *";
}

void thirteenStage(string arr[]) {
	arr[13] = "*  --\\/--                              *";
	arr[14] = "* /  ||  \\                             *";
	arr[15] = "**   ||   *                            *";
}

void finalStage(string arr[]) {
	arr[15] = "*/   ||   \\                            *";
}

void run(){
	string S[]
	{
		"****************************************",	
		"*                                      *",	
		"*                                      *",
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
        "*                                      *",	
		"*   ()()                               *",	
        "*   ()()                               *",	
        "*   ()()                               *",	
        "*   |..|                               *",	
        "*  \\|  |/                              *",	
        "*  /|UU|\\                              *",	
        "*  --\\/--                              *",	
        "* /  ||  \\                             *",
        "*/   ||   \\                            *",	
        "*    /\\                                *",	
        "*    ||                                *",
        "*   _||_                               *",	
		"****************************************"	
	};
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 40; j++){
			cout << S[i][j];
		}
		cout << endl;
	}	
	for(int i = 0; i < 28; i++){
		//sleep(1);
		//system("clear");
		for(int j = 0; j < 3; j++){
			//system("clear");
			cout << string(40, '*') << endl;
			for(int j = 0; j < 6; j++){
				cout << "*                                      *" << endl;;
			}
			switch(j){
				case 0: {
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   |..|   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  \\|  |/  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  /|UU|\\  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  --\\/--  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << " /  ||  \\ " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "/   ||   \\" << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "    /\\    " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "    | \\   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   _|  \\_ " << string(28 - i, ' ') << "*" << endl;
						cout << string(40, '*') << endl;
						break;
					}
				case 1: {
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   |..|   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  \\|  |/  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  /|UU|\\  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  --\\/--  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << " /  ||  \\ " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "/   ||   \\" << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "    /\\    " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   / |    " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << " _/  |_   " << string(27 - i, ' ') << "*" << endl;
						cout << string(40, '*') << endl;
						break;
					}
				case 2: {
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   |..|   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  \\|  |/  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  /|UU|\\  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  --\\/--  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << " /  ||  \\ " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "/   ||   \\" << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "    /\\    " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "    ||    " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   _||_   " << string(27 - i, ' ') << "*" << endl;
						cout << string(40, '*') << endl;
						break;
					}
			}
			//sleep(1);
		}
	}
	for(int i = 27; i >= 0; i--){
		//sleep(1);
		//system("clear");
		for(int j = 0; j < 3; j++){
			//system("clear");
			cout << string(40, '*') << endl;
			for(int j = 0; j < 6; j++){
				cout << "*                                      *" << endl;;
			}
			switch(j){
				case 0: {

						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   ()()   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   |..|   " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  \\|  |/  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  /|UU|\\  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "  --\\/--  " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << " /  ||  \\ " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "/   ||   \\" << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "    /\\    " << string(27 - i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << "   / |    " << string(27- i, ' ') << "*" << endl;
						cout << "*" << string(i + 1, ' ') << " _/  |_   " << string(27 - i, ' ') << "*" << endl;
						cout << string(40, '*') << endl;
						break;
					}
				case 1: {
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   |..|   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  \\|  |/  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  /|UU|\\  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  --\\/--  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << " /  ||  \\ " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "/   ||   \\" << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "    /\\    " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "    | \\   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   _|  \\_ " << string(28 - i, ' ') << "*" << endl;
						cout << string(40, '*') << endl;
						break;
					}
				case 2: {
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   ()()   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   |..|   " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  \\|  |/  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  /|UU|\\  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "  --\\/--  " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << " /  ||  \\ " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "/   ||   \\" << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "    /\\    " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "    ||    " << string(28 - i, ' ') << "*" << endl;
						cout << "*" << string(i, ' ') << "   _||_   " << string(28 - i, ' ') << "*" << endl;
						cout << string(40, '*') << endl;
						break;
					}
			}
		}
		//sleep(1);
	}
	menu();
}

void jump(){
	string S[]
	{
		"****************************************",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",
        	"*                                      *",
		"*   ()()                               *",	
        	"*   ()()                               *",	
       	"*   ()()                               *",	
        	"*   |..|                               *",	
       	"*  \\|  |/                              *",	
        	"*  /|UU|\\                              *",	
        	"*  --\\/--                              *",	
        	"* /  ||  \\                             *",	
        	"*/   ||   \\                            *",	
       	"*    /\\                                *",	
        	"*    ||                                *",	
        	"*   _||_                               *",	
		"****************************************"	
	};

	current(S);
	for(int i = 17; i >= 7; i--) S[i] = S[i - 1];				
	S[18] = "*   _\\/_                               *";
	current(S);								
	for(int i = 7; i < 17; i++) S[i] = S[i + 1];
	S[17] = "*    ||                                *";
	S[18] = "*    ||                                *";
	current(S);								
	for(int i = 6; i <= 17; i++) S[i] = S[i + 1];
	S[18] = "*                                      *";
	current(S);								
	for(int i = 5; i <= 16; i++) S[i] = S[i + 1];
	S[17] = "*                                      *";
	current(S);								
	for(int i = 4; i <= 15; i++) S[i] = S[i + 1];
	S[16] = "*                                      *";
	current(S);								
	for(int i = 3; i <= 14; i++) S[i] = S[i + 1];
	S[15] = "*                                      *";
	current(S);								
	for(int i = 14; i >= 3; i--) S[i] = S[i - 1];				
	S[15] = "*    ||                                *";
	current(S);								
	for(int i = 15; i >= 4; i--) S[i] = S[i - 1];
	S[16] = "*    ||                                *";
	current(S);								
	for(int i = 16; i >= 5; i--) S[i] = S[i - 1];
	S[17] = "*    ||                                *";
	current(S);								
	for(int i = 17; i >= 6; i--) S[i] = S[i - 1];
	S[18] = "*    ||                                *";
	current(S);								
	for(int i = 17; i >= 7; i--) S[i] = S[i - 1];
	S[18] = "*   _\\/_                               *";		
	current(S);
	for(int i = 7; i <= 16; i++) S[i] = S[i + 1];				
	S[17] = "*    ||                                *";
	S[18] = "*   _||_                               *";
	current(S);
	menu();
}
void ball(){
	string S[]
	{
		"****************************************",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
		"*                                      *",	
        "*                                      *",	
		"*   ()()                               *",	
        "*   ()()                               *",	
        "*   ()()                               *",	
        "*   |..|                               *",	
        "*  \\|  |/                              *",	
        "*  /|UU|\\                              *",	
        "*  --\\/--                              *",	
        "* /  ||  \\                             *",	
        "*/   ||   \\                            *",	
        "*    /\\                                *",	
        "*    ||                                *",
        "*   _||_                               *",	
		"****************************************"	
	};
	current(S);
	S[14] = "* /  ||  \\o                            *";
	S[15] = "*/   ||   -                            *";
	current(S);
	S[13] = "*  --\\/-- o                            *";
	S[14] = "* /  ||  \\-                            *";
	S[15] = "*/   ||                                *";
	current(S);
	S[12] = "*  /|UU|\\ o                            *";
	S[13] = "*  --\\/----                            *";
	S[14] = "* /  ||                                *";
	S[15] = "*/   ||                                *";
	current(S);
	S[11] = "*  \\|  |/ o                            *";
	S[12] = "*  /|UU|\\                              *";
	S[13] = "*  --\\/---/                            *";
	current(S);
	S[10] = "*   |..|  o                            *";
	S[11] = "*  \\|  |/                              *";
	S[13] = "*  --\\/----                            *";
	current(S);
	S[9] = "*   ()()  o                            *";
	S[10] = "*   |..|                               *";
	S[11] = "*  \\|  |/                              *";
	S[13] = "*  --\\/---                             *";
	S[14] = "* /  ||   \\                            *";
	current(S);
	S[8] = "*   ()()  o                            *";
	S[9] = "*   ()()                               *";
	S[13] = "*  --\\/--                              *";
	S[14] = "* /  ||  \\                             *";
	S[15] = "*/   ||   \\                            *";
	current(S);
	S[7] = "*   ()()  o                            *";
	S[8] = "*   ()()                               *";
	current(S);
	S[6] = "*        o                             *";
	S[7] = "*   ()()                               *";
	current(S);
	S[5] = "*       o                              *";
	S[6] = "*                                      *";
	current(S);
	S[4] = "*      o                               *";
	S[5] = "*                                      *";
	current(S);
	S[3] = "*     o                                *";
	S[4] = "*                                      *";
	current(S);
	S[3] = "*    o                                 *";
	current(S);
	S[3] = "*                                      *";
	S[4] = "*   o                                  *";
	current(S);
	S[4] = "*                                      *";
	S[5] = "*  o                                   *";
	current(S);
	S[5] = "*                                      *";
	S[6] = "* o                                    *";
	current(S);
	S[6] = "*                                      *";
	S[7] = "*o  ()()                               *";
	current(S);
	S[7] = "*   ()()                               *";
	S[8] = "*o  ()()                               *";
	current(S);
	S[8] = "*   ()()                               *";
	S[9] = "*o  ()()                               *";
	S[13] = "* ---\\/--                              *";
	S[14] = "*/   ||  \\                             *";
        S[15] = "*    ||   \\                            *"; 
	current(S);
	S[9] = "*   ()()                               *";
	S[10] = "*o  |..|                               *";
	S[13] = "*----\\/--                              *";
	S[14] = "*    ||  \\                             *";
	current(S);
	S[10] = "*   |..|                               *";
	S[11] = "*o \\|  |/                              *";
	S[13] = "*\\---\\/--                              *";
	current(S);
	S[11] = "*  \\|  |/                              *";
	S[12] = "*o /|UU|\\                              *";
	S[13] = "*----\\/--                              *";
	current(S);
	S[12] = "*  /|UU|\\                              *";
	S[13] = "*o --\\/--                              *";
	S[14] = "*-/  ||  \\                             *";
	current(S);
	S[13] = "*  --\\/--                              *";
	S[14] = "*o/  ||  \\                             *";
	S[15] = "*-   ||   \\                            *";
	current(S);
	S[14] = "* /  ||  \\                             *";
	S[15] = "*/   ||   \\                            *";
	current(S);
	menu();
}