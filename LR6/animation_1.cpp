#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
	
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