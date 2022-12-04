#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	while (1) {
		int choice, t = 700, k = 0;
		string filled = "***************************************";
		string bordered = "*                                     *";
		string m[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
		bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled, }, p[12] = {
			"    /\\    ",
			"   |00|   ",
			"  (|..|)  ",
			"   |__|   ",
			"   \\__/   ",
			"    ||    ",
			"  -| *|-  ",
			" / |  | \\ ",
			"/   \\/   \\",
			"    /\\    ",
			"    ||    ",
			"   _||_   " }
			, o[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
			bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled };

		if (choice = 1){

		for (int i = 0; i < 14; i++) {
			if (i == 0) {
				cout << "    /\\    " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/   " << endl;
				cout << "    ||     " << endl;
				cout << "  -| *|-   " << endl;
				cout << " / |  | \\ " << endl;
				cout << "/   /\\   \\" << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 1) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << " --| *|--  " << endl;
				cout << "/  |  |  \\" << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 2) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << "  -| *|--- " << endl;
				cout << " / |  |    " << endl;
				cout << "/   /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 3) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||   / " << endl;
				cout << " --| *|--  " << endl;
				cout << "/  |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 4) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  / " << endl;
				cout << "    ||  /  " << endl;
				cout << "  -| *|-   " << endl;
				cout << " / |  |    " << endl;
				cout << "/   /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 5) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  * " << endl;
				cout << "    ||  /  " << endl;
				cout << " --| *|-   " << endl;
				cout << "/  |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 6) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  / " << endl;
				cout << "    ||  /  " << endl;
				cout << "---| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\	    " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 7) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  * " << endl;
				cout << "\\   ||  /  " << endl;
				cout << " --| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 8) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "\\  \\__/  / " << endl;
				cout << " \\  ||  /  " << endl;
				cout << "  -| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 9) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "*  \\__/  * " << endl;
				cout << " \\  ||  /  " << endl;
				cout << "  -| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 10) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "*   ||   * " << endl;
				cout << " --| *|--  " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 11) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << "*--| *|--* " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 12) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << " --| *|--  " << endl;
				cout << "*  |  |  * " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 13) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << "  -| *|-   " << endl;
				cout << " / |  | \\  " << endl;
				cout << "*   /\\   * " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}

		}
		cout << "    /\\     " << endl;
		cout << "   |00|    " << endl;
		cout << "  (|..|)   " << endl;
		cout << "   |--|    " << endl;
		cout << "   \\__/    " << endl;
		cout << "    ||     " << endl;
		cout << "  -| *|-   " << endl;
		cout << " / |  | \\  " << endl;
		cout << "/   /\\   \\ " << endl;
		cout << "    \\/     " << endl;
		cout << "    ||     " << endl;
		cout << "   _||_    " << endl;
		//Sleep(t);
		//system("cls");

		for (int i = 0; i < 14; i++) {
			if (i == 0) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << " --| *|--  " << endl;
				cout << "/  |  |  \\ " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 1) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << "  -| *|--- " << endl;
				cout << " / |  |    " << endl;
				cout << "/   /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 2) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||   / " << endl;
				cout << " --| *|--  " << endl;
				cout << "/  |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 3) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  / " << endl;
				cout << "    ||  /  " << endl;
				cout << "  -| *|-   " << endl;
				cout << " / |  |    " << endl;
				cout << "/   /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 4) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  * " << endl;
				cout << "    ||  /  " << endl;
				cout << " --| *|-   " << endl;
				cout << "/  |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 5) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  / " << endl;
				cout << "    ||  /  " << endl;
				cout << "---| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 6) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/  * " << endl;
				cout << "\\   ||  /  " << endl;
				cout << " --| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 7) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "\\  \\__/  / " << endl;
				cout << " \\  ||  /  " << endl;
				cout << "  -| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 8) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "*  \\__/  * " << endl;
				cout << " \\  ||  /  " << endl;
				cout << "  -| *|-   " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 9) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "*   ||   * " << endl;
				cout << " --| *|--  " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 10) {
				cout << "    /\\     " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/    " << endl;
				cout << "    ||     " << endl;
				cout << "*--| *|--* " << endl;
				cout << "   |  |    " << endl;
				cout << "    /\\     " << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 11) {
				cout << "    /\\    " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/   " << endl;
				cout << "    ||     " << endl;
				cout << " --| *|--  " << endl;
				cout << "*  |  |  * " << endl;
				cout << "    /\\    " << endl;
				cout << "    \\/    " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 12) {
				cout << "    /\\    " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/   " << endl;
				cout << "    ||     " << endl;
				cout << "  -| *|-   " << endl;
				cout << " / |  | \\ " << endl;
				cout << "*   /\\   *" << endl;
				cout << "    \\/    " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
			else if (i == 13) {
				cout << "    /\\    " << endl;
				cout << "   |00|    " << endl;
				cout << "  (|..|)   " << endl;
				cout << "   |--|    " << endl;
				cout << "   \\__/   " << endl;
				cout << "    ||     " << endl;
				cout << "  -| *|-   " << endl;
				cout << " / |  | \\ " << endl;
				cout << "/   /\\   \\" << endl;
				cout << "    \\/     " << endl;
				cout << "    ||     " << endl;
				cout << "   _||_    " << endl;
				//Sleep(t);
				//system("cls");
			}
		}
		}
	}
}