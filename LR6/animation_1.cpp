#include <iostream>
#include <unistd.h> // перед отправкой заменить на unistd.h, Sleep(x) на usleep(x * 1000)

void head(); void legs();
void anim0(); void anim1(); void anim2(); void anim3(); void anim4();
void anim5(); void anim6(); void anim7(); void anim8(); void anim9();
void anim10(); void anim11(); void anim12(); void anim13();

int main() {
	for (int i = 0; i < 28; i++) {
		// system("cls");
		head();
		switch (i % 14) {
			case 0: { anim0(); break; }
			case 1: { anim1(); break; }
			case 2: { anim2(); break; }
			case 3: { anim3(); break; }
			case 4: { anim4(); break; }
			case 5: { anim5(); break; }
			case 6: { anim6(); break; }
			case 7: { anim7(); break; }
			case 8: { anim8(); break; }
			case 9: { anim9(); break; }
			case 10: { anim10(); break; }
			case 11: { anim11(); break; }
			case 12: { anim12(); break; }
			case 13: { anim13(); break; }	
		}
		legs();
		// Sleep(600);
		// system("cls");
	}
}

void head() {
	std::cout << "    /\\    " << std::endl;
	std::cout << "   |oo|   " << std::endl;
	std::cout << "  (|..|)   " << std::endl;
	std::cout << "   |--|   " << std::endl;
}
void legs() {
	std::cout << "    /\\    " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << "   _||_   " << std::endl;
}
void anim0() {
	std::cout << "   \\__/   " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << "  -| *|-  " << std::endl;
	std::cout << " / |  | \\" << std::endl;
	std::cout << "/   \\/   \\" << std::endl;
}
void anim1() {
	std::cout << "   \\__/   " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << "  -| *|--  " << std::endl;
	std::cout << " / |  |  \\" << std::endl;
	std::cout << "    \\/    " << std::endl;
}
void anim2() {
	std::cout << "   \\__/   " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << "  -| *|---" << std::endl;
	std::cout << " / |  |   " << std::endl;
	std::cout << "/   \\/     " << std::endl;
}
void anim3() {
	std::cout << "   \\__/   " << std::endl;
	std::cout << "    ||   /" << std::endl;
	std::cout << " --| *|-- " << std::endl;
	std::cout << "/  |  |   " << std::endl;
	std::cout << "    \\/     " << std::endl;
}
void anim4() {
	std::cout << "   \\__/  /" << std::endl;
	std::cout << "    ||  / " << std::endl;
	std::cout << "  -| *|-  " << std::endl;
	std::cout << " / |  |   " << std::endl;
	std::cout << "/   \\/    " << std::endl;
}
void anim5() {
	std::cout << "   \\__/   *" << std::endl;
	std::cout << "    ||   / " << std::endl;
	std::cout << " --| *|-  " << std::endl;
	std::cout << "/  |  |   " << std::endl;
	std::cout << "    \\/    " << std::endl;
}
void anim6() {
	std::cout << "   \\__/  /" << std::endl;
	std::cout << "    ||  /" << std::endl;
	std::cout << "---| *|/  " << std::endl;
	std::cout << "   |  |   " << std::endl;
	std::cout << "    \\/     " << std::endl;
}
void anim7() {
	std::cout << "   \\__/  *" << std::endl;
	std::cout << "\\   || / " << std::endl;
	std::cout << " --| *|-  " << std::endl;
	std::cout << "   |  |   " << std::endl;
	std::cout << "    \\/     " << std::endl;
}
void anim8() {
	std::cout << "\\  \\__/  /" << std::endl;
	std::cout << " \\  ||  / " << std::endl;
	std::cout << "  -| *|-  " << std::endl;
	std::cout << "   |  |   " << std::endl;
	std::cout << "    \\/     " << std::endl;
}
void anim9() {
	std::cout << "*  \\__/  *" << std::endl;
	std::cout << " \\  || /" << std::endl;
	std::cout << "  -| *|- " << std::endl;
	std::cout << "   |  |  " << std::endl;
	std::cout << "    \\/  " << std::endl;
}
void anim10() {
	std::cout << "   \\__/  " << std::endl;
	std::cout << "*   ||   *" << std::endl;
	std::cout << " --| *|--" << std::endl;
	std::cout << "   |  |  " << std::endl;
	std::cout << "    \\/  " << std::endl;
}
void anim11() {
	std::cout << "   \\__/  " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << "*--| *|--*" << std::endl;
	std::cout << "   |  |  " << std::endl;
	std::cout << "    \\/  " << std::endl;
}
void anim12() {
	std::cout << "   \\__/  " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << " --| *|-- " << std::endl;
	std::cout << "*  |  |  *" << std::endl;
	std::cout << "    \\/  " << std::endl;
}
void anim13() {
	std::cout << "   \\__/  " << std::endl;
	std::cout << "    ||    " << std::endl;
	std::cout << "  -| *|- " << std::endl;
	std::cout << " / |  | \\" << std::endl;
	std::cout << "*   \\/  *" << std::endl;
}