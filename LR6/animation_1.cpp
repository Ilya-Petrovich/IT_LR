#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main() {
	string A, B, C;
	A = "    /\\   \n";
	A += "   |oo|   \n";
	A += "  (|,,|)  \n";
	A += "   |--|   \n";
	B = "   \\__/   \n";
	B += "    ||    \n";
	B += "  -|  |-  \n";
	B += " / |  | \\\n";
	B += "/   \\/   \\\n";
	C = "    /\\   \n";
	C += "    ||    \n";
	C += "   _||_    \n";



	for (int i = 0; i <= 29; i++) {
		if (i == 1) {
			cout << A + B + C;
		}
		else if (i == 2) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += " --|  |-- \n";
			B += "/  |  |  \\\n";
			B += "    \\/    \n";
			cout << A + B + C;
		}
		else if (i == 3) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "  -|  |---\n";
			B += " / |  |   \n";
			B += "/   \\/    \n";
			cout << A + B + C;
		}
		else if (i == 4) {
			B = "   \\__/   \n";
			B += "    ||   /\n";
			B += " --|  |-- \n";
			B += "/  |  |   \n";
			B += "    \\/    \n";
			cout << A + B + C;
		}
		else if (i == 5) {
			B = "   \\__/  /\n";
			B += "    ||  / \n";
			B += "  -|  |-  \n";
			B += " / |  |   \n";
			B += "/   \\/    \n";
			cout << A + B + C;
		}
		else if (i == 6) {
			B = "   \\__/  *\n";
			B += "    ||  / \n";
			B += " --|  |-  \n";
			B += "/  |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 7) {
			B = "   \\__/  /\n";
			B += "    ||  / \n";
			B += "---|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 8) {
			B = "   \\__/  *\n";
			B += "\\   ||  / \n";
			B += " --|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 9) {
			B = "\\  \\__/  /\n";
			B += " \\  ||  / \n";
			B += "  -|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 10) {
			B =  "*  \\__/  *\n";
			B += " \\  ||  / \n";
			B += "  -|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 11) {
			B = "   \\__/   \n";
			B += "*   ||   *\n";
			B += " --|  |-- \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 12) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "*--|  |--*\n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 13) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += " --|  |-- \n";
			B += "*  |  |  *\n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 14) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "  -|  |-  \n";
			B += " / |  | \\\n";
			B += "*   \\/   *\n";
			cout << A + B + C;
		}
		else if (i == 15) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "  -|  |-  \n";
			B += " / |  | \\\n";
			B += "/   \\/   \\\n";
			cout << A + B + C;
		}


		else if (i == 16) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += " --|  |-- \n";
			B += "/  |  |  \\\n";
			B += "    \\/    \n";
			cout << A + B + C;
		}
		else if (i == 17) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "  -|  |---\n";
			B += " / |  |   \n";
			B += "/   \\/    \n";
			cout << A + B + C;
		}
		else if (i == 18) {
			B = "   \\__/   \n";
			B += "    ||   /\n";
			B += " --|  |-- \n";
			B += "/  |  |   \n";
			B += "    \\/    \n";
			cout << A + B + C;
		}
		else if (i == 19) {
			B = "   \\__/  /\n";
			B += "    ||  / \n";
			B += "  -|  |-  \n";
			B += " / |  |   \n";
			B += "/   \\/    \n";
			cout << A + B + C;
		}
		else if (i == 20) {
			B = "   \\__/  *\n";
			B += "    ||  / \n";
			B += " --|  |-  \n";
			B += "/  |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 21) {
			B = "   \\__/  /\n";
			B += "    ||  / \n";
			B += "---|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 22) {
			B = "   \\__/  *\n";
			B += "\\   ||  / \n";
			B += " --|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 23) {
			B = "\\  \\__/  /\n";
			B += " \\  ||  / \n";
			B += "  -|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 24) {
			B = "*  \\__/  *\n";
			B += " \\  ||  / \n";
			B += "  -|  |-  \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 25) {
			B = "   \\__/   \n";
			B += "*   ||   *\n";
			B += " --|  |-- \n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 26) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "*--|  |--*\n";
			B += "   |  |   \n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 27) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += " --|  |-- \n";
			B += "*  |  |  *\n";
			B += "    \\/   \n";
			cout << A + B + C;
		}
		else if (i == 28) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "  -|  |-  \n";
			B += " / |  | \\\n";
			B += "*   \\/   *\n";
			cout << A + B + C;
		}
		else if (i == 29) {
			B = "   \\__/   \n";
			B += "    ||    \n";
			B += "  -|  |-  \n";
			B += " / |  | \\\n";
			B += "/   \\/   \\\n";
			cout << A + B + C;
		}
		usleep(1000 * 1000);
		system("cls");
	}
	system("pause");
	return 0;
}