#include <iostream>
#include <unistd.h>

void del();
void head(); void legs();
void anim();

int main() {
	del();
	anim();
	return 0;
}

void del() {
	system("cls");
}

void head() {
	std::cout << " /\\ \n";
	std::cout << " |oo| \n";
	std::cout << " (|..|) \n";
	std::cout << " |--| \n";
}			  
void legs() { 
	std::cout << " /\\ \n";
	std::cout << " || \n";
	std::cout << " _||_ \n";
}			  
void anim() {
	for (int k = 0; k <= 28; k++) {
		//del();
		head();
		switch (k % 14) {
		case 0: {
			std::cout << " \\__/ \n";
			std::cout << " || \n";
			std::cout << " -| *|- \n";
			std::cout << " / | | \\ \n";
			std::cout << "/ \\/ \\\n"; break; }
		case 1: {	  
			std::cout << " \\__/ \n";
			std::cout << " || \n";
			std::cout << " —| *|— \n";
			std::cout << "/ | | \\\n";
			std::cout << " \\/ \n"; break; }
		case 2: {	  
			std::cout << " \\__/ \n";
			std::cout << " || \n";
			std::cout << " -| *|---\n";
			std::cout << " / | | \n";
			std::cout << "/ \\/ \n"; break; }
		case 3: {	  
			std::cout << " \\__/ \n";
			std::cout << " || /\n";
			std::cout << " —| *|— \n";
			std::cout << "/ | | \n";
			std::cout << " \\/ \n"; break; }
		case 4: {	  
			std::cout << " \\__/ /\n";
			std::cout << " || / \n";
			std::cout << " -| *|- \n";
			std::cout << " / | | \n";
			std::cout << "/ \\/ \n"; break; }
		case 5: {	  
			std::cout << " \\__/ *\n";
			std::cout << " || / \n";
			std::cout << " —| *|- \n";
			std::cout << "/ | | \n";
			std::cout << " \\/ \n"; break; }
		case 6: {	  
			std::cout << " \\__/ /\n";
			std::cout << " || / \n";
			std::cout << "---| *|- \n";
			std::cout << " | | \n";
			std::cout << " \\/ \n"; break; }
		case 7: {	  
			std::cout << " \\__/ *\n";
			std::cout << "\\ || / \n";
			std::cout << " —| *|- \n";
			std::cout << " | | \n";
			std::cout << " \\/ \n"; break; }
		case 8: {	  
			std::cout << "\\ \\__/ /\n";
			std::cout << " \\ || / \n";
			std::cout << " -| *|- \n";
			std::cout << " | | \n";
			std::cout << " \\/ \n"; break; }
		case 9: {	  
			std::cout << "* \\__/ *\n";
			std::cout << " \\ || / \n";
			std::cout << " -| *|- \n";
			std::cout << " | | \n";
			std::cout << " \\/ \n"; break; }
		case 10: {	  
			std::cout << " \\__/ \n";
			std::cout << "* || *\n";
			std::cout << " —| *|— \n";
			std::cout << " | | \n";
			std::cout << " \\/ \n"; break; }
		case 11: {	  
			std::cout << " \\__/ \n";
			std::cout << " || \n";
			std::cout << "*--| *|--*\n";
			std::cout << " | | \n";
			std::cout << " \\/ \n"; break; }
		case 12: {	  
			std::cout << " \\__/ \n";
			std::cout << " || \n";
			std::cout << " —| *|— \n";
			std::cout << "* | | *\n";
			std::cout << " \\/ \n"; break; }
		case 13: {	  
			std::cout << " \\__/ \n";
			std::cout << " || \n";
			std::cout << " -| *|- \n";
			std::cout << " / | | \\ \n";
			std::cout << "* \\/ *\n"; break; }
		}
		legs();
		// Sleep(300);
		// del();
	}
}