#include <iostream>
#include <unistd.h>

using namespace std;

void stAnim(string arr[]);
void firstAnim(string arr[]);
void secondAnim(string arr[]);
void thirdAnim(string arr[]);
void fourthAnim(string arr[]);
void fifthAnim(string arr[]);
void sixthAnim(string arr[]);
void seventhAnim(string arr[]);
void eighthAnim(string arr[]);
void ninththAnim(string arr[]);
void tenththAnim(string arr[]);
void elevenththAnim(string arr[]);
void twelfthAnim(string arr[]);
void thirteenthAnim(string arr[]);
void fourteenthAnim(string arr[]);

int main()
{
	//system("cls");	
	string A[]
	{
			"   ()()   ",     // Список начинается с 0
			"   ()()   ",     //1
			"   ()()   ",     //2
			"   |..|   ",     //3...
			"  \\|  |/  ",    
			"  /|UU|\\  ",    
			"  --\\/--  ",    
			" /  ||  \\ ",    
			"/   ||   \\",    
			"    /\\    ",    
			"    ||    ",     
			"   _||_   ",     
	};
	void (*func[14])(string[]) = { firstAnim, secondAnim, thirdAnim, fourthAnim, fifthAnim, sixthAnim, seventhAnim, eighthAnim, ninthAnim, tenthAnim, eleventhAnim, twelfthAnim, thirteenthAnim, fourteenthAnim };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 14; j++) {
			stAnim(A);
			func[j](A);
			//system("cls");
			if (i == 1 && j == 13) stAnim(A);
		}
	}
	return 0;
}

void stAnim(string arr[]) {
	for (int i = 0; i < 12; i++) {
		cout << arr[i] << endl;
	}
	//sleep(333);
}

void firstAnim(string arr[]) {
	arr[6] = " ---\\/--- ";
	arr[7] = "/   ||   \\";
	arr[8] = "    ||    ";
}

void secondAnim(string arr[]) {
	arr[6] = "  --\\/----";
	arr[7] = " /  ||    ";
	arr[8] = "/   ||    ";
}

void thirdAnim(string arr[]) {
	arr[5] = "  /|UU|\\ /";
	arr[6] = " ---\\/--- ";
	arr[7] = "/   ||    ";
	arr[8] = "    ||    ";
}

void fourthAnim(string arr[]) {
	arr[4] = "  \\|  |/ /";
	arr[5] = "  /|UU|\\/ ";
	arr[6] = "  --\\/--  ";
	arr[7] = " /  ||    ";
	arr[8] = "/   ||    ";
}

void fifthAnim(string arr[]) {
	arr[4] = "  \\|  |/ *";
	arr[5] = "  /|UU|\\/ ";
	arr[6] = " ---\\/--  ";
	arr[7] = "/   ||    ";
	arr[8] = "    ||    ";
}

void sixthAnim(string arr[]) {
	arr[4] = "  \\|  |/ /";
	arr[6] = "----\\/--  ";
	arr[7] = "    ||    ";
}

void seventhAnim(string arr[]) {
	arr[4] = "  \\|  |/ *";
	arr[5] = "\\ /|UU|\\/ ";
	arr[6] = " ---\\/--  ";
}

void eighthAnim(string arr[]) {
	arr[4] = "\\ \\|  |/ /";
	arr[5] = " \\/|UU|\\/ ";
	arr[6] = "  --\\/--  ";
}

void ninthAnim(string arr[]) {
	arr[4] = "* \\|  |/ *";
}

void tenthAnim(string arr[]) {
	arr[4] = "  \\|  |/  ";
	arr[5] = "* /|UU|\\ *";
	arr[6] = " ---\\/--- ";
}

void eleventhAnim(string arr[]) {
	arr[5] = "  /|UU|\\  ";
	arr[6] = "*---\\/---*";
}

void twelfthAnim(string arr[]) {
	arr[6] = " ---\\/--- ";
	arr[7] = "*   ||   *";
}

void thirteenthAnim(string arr[]) {
	arr[6] = "  --\\/--  ";
	arr[7] = " /  ||  \\ ";
	arr[8] = "*   ||   *";
}

void fourteenthAnim(string arr[]) {
	arr[8] = "/   ||   \\";
}