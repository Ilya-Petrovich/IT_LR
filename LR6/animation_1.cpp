#include <iostream>
#include <windows.h> 
void head(); void legs();
void anim0(); void anim1(); void anim2(); void anim3(); void anim4();
void anim5(); void anim6(); void anim7(); void anim8(); void anim9();
void anim10(); void anim11(); void anim12(); void anim13();

int main() {
	for (int i = 0; i < 29; i++) {
		system("cls");
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
		Sleep(50);
		system("cls");
	}
}

void head() {
	std::cout << "    /\\    \n";
	std::cout << "   |oo|   \n";
	std::cout << "  (|..|)  \n";
	std::cout << "   |--|   \n";
}
void legs() {
	std::cout << "    /\\    \n";
	std::cout << "    ||    \n";
	std::cout << "   _||_   \n";
}
void anim0() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||    \n";
	std::cout << "  -| *|-  \n";
	std::cout << " / |  | \\ \n";
	std::cout << "/   \\/   \\\n";
}
void anim1() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||    \n";
	std::cout << " --| *|-- \n";
	std::cout << "/  | *|  \\\n";
	std::cout << "    \\/    \n";
}
void anim2() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||    \n";
	std::cout << "  -| *|---\n";
	std::cout << " / |  |   \n";
	std::cout << "/   \\/    \n";
}
void anim3() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||   /\n";
	std::cout << " --| *|-- \n";
	std::cout << "/  |  |   \n";
	std::cout << "    \\/     \n";
}
void anim4() {
	std::cout << "   \\__/  /\n";
	std::cout << "    ||  / \n";
	std::cout << "  -| *|-  \n";
	std::cout << " / |  |   \n";
	std::cout << "/   \\/    \n";
}
void anim5() {
	std::cout << "   \\__/  *\n";
	std::cout << "    ||  / \n";
	std::cout << " --| *|-  \n";
	std::cout << "/  |  |   \n";
	std::cout << "    \\/    \n";
}
void anim6() {
	std::cout << "   \\__/  /\n";
	std::cout << "    ||  / \n";
	std::cout << "---| *|-  \n";
	std::cout << "   |  |   \n";
	std::cout << "    \\/    \n";
}
void anim7() {
	std::cout << "   \\__/  *\n";
	std::cout << "\\   ||  / \n";
	std::cout << " --| *|-  \n";
	std::cout << "   |  |   \n";
	std::cout << "    \\/     \n";
}
void anim8() {
	std::cout << "\\  \\__/  /\n";
	std::cout << " \\  ||  / \n";
	std::cout << "  -| *|-  \n";
	std::cout << "   |  |   \n";
	std::cout << "    \\/     \n";
}
void anim9() {
	std::cout << "*  \\__/  *\n";
	std::cout << " \\  ||  / \n";
	std::cout << "  -| *|-  \n";
	std::cout << "   |  |   \n";
	std::cout << "    \\/    \n";
}
void anim10() {
	std::cout << "   \\__/   \n";
	std::cout << "*   ||   *\n";
	std::cout << " --| *|-- \n";
	std::cout << "   |  |   \n";
	std::cout << "    \\/    \n";
}
void anim11() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||    \n";
	std::cout << "*--| *|--*\n";
	std::cout << "   |  |   \n";
	std::cout << "    \\/    \n";
}
void anim12() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||    \n";
	std::cout << " --| *|-- \n";
	std::cout << "*  |  |  *\n";
	std::cout << "    \\/    \n";
}
void anim13() {
	std::cout << "   \\__/   \n";
	std::cout << "    ||    \n";
	std::cout << "  -| *|-  \n";
	std::cout << " / |  | \\ \n";
	std::cout << "*   \\/   *\n";
}

// #include <windows.h>
// #include <iostream>

// void del_one_frame();
// void head(); void legs();
// void dance();

// int main() {
//     del_one_frame();
//     dance();
//     return 0;
// }

// void del_one_frame() {system("cls");}
// void head() {
//     std::cout << "    /\\    \n";
//     std::cout << "   |oo|   \n";
//     std::cout << "  (|..|)  \n";
//     std::cout << "   |--|   \n";
// }
// void legs() {
//     std::cout << "    /\\    \n";
//     std::cout << "    ||    \n";
//     std::cout << "   _||_   \n";
// }
// void dance() {
//     for (int k = 0; k <= 28; k++) {
//         del_one_frame();
//         head();
//         switch (k%14) {
//             case 0: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||    \n"; 
//                 std::cout << "  -| *|-  \n"; 
//                 std::cout << " / |  | \\ \n"; 
//                 std::cout << "/   \\/   \\\n"; break;}
//             case 1: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||    \n";
//                 std::cout << " --| *|-- \n"; 
//                 std::cout << "/  |  |  \\\n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 2: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||    \n";
//                 std::cout << "  -| *|---\n"; 
//                 std::cout << " / |  |   \n"; 
//                 std::cout << "/   \\/    \n"; break;}
//             case 3: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||   /\n";
//                 std::cout << " --| *|-- \n"; 
//                 std::cout << "/  |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 4: { 
//                 std::cout << "   \\__/  /\n"; 
//                 std::cout << "    ||  / \n";
//                 std::cout << "  -| *|-  \n"; 
//                 std::cout << " / |  |   \n"; 
//                 std::cout << "/   \\/    \n"; break;}
//             case 5: { 
//                 std::cout << "   \\__/  *\n"; 
//                 std::cout << "    ||  / \n";
//                 std::cout << " --| *|-  \n"; 
//                 std::cout << "/  |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 6: { 
//                 std::cout << "   \\__/  /\n"; 
//                 std::cout << "    ||  / \n";
//                 std::cout << "---| *|-  \n"; 
//                 std::cout << "   |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 7: { 
//                 std::cout << "   \\__/  *\n"; 
//                 std::cout << "\\   ||  / \n";
//                 std::cout << " --| *|-  \n"; 
//                 std::cout << "   |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 8: { 
//                 std::cout << "\\  \\__/  /\n"; 
//                 std::cout << " \\  ||  / \n";
//                 std::cout << "  -| *|-  \n"; 
//                 std::cout << "   |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 9: { 
//                 std::cout << "*  \\__/  *\n"; 
//                 std::cout << " \\  ||  / \n";
//                 std::cout << "  -| *|-  \n"; 
//                 std::cout << "   |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 10: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "*   ||   *\n";
//                 std::cout << " --| *|-- \n"; 
//                 std::cout << "   |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 11: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||    \n";
//                 std::cout << "*--| *|--*\n"; 
//                 std::cout << "   |  |   \n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 12: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||    \n";
//                 std::cout << " --| *|-- \n"; 
//                 std::cout << "*  |  |  *\n"; 
//                 std::cout << "    \\/    \n"; break;}
//             case 13: { 
//                 std::cout << "   \\__/   \n"; 
//                 std::cout << "    ||    \n";
//                 std::cout << "  -| *|-  \n"; 
//                 std::cout << " / |  | \\ \n"; 
//                 std::cout << "*   \\/   *\n"; break;}
//         }
//         legs();
//         Sleep(300);
//         del_one_frame();
//     }
// }