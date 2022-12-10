#include <iostream>
#include <unistd.h>
unsigned short menu(unsigned short& a) {
    std::cout << "Choose animation:" << std::endl;
    std::cout << "Dance: \t\t\t1" << std::endl;
    std::cout << "Run: \t\t\t2" << std::endl;
    std::cout << "Sit down and jump: \t3" << std::endl;
    std::cout << "Throw a ball: \t\t4" << std::endl << std::endl;
    std::cout << "Enter 5 for exit." << std::endl;
    std::cin >> a;
    return a;
}
void clear() { /*system("cls");*/ }
void head() {
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
}
void legs() {
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
}
void body() {
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*" << "   |__|                               *" << std::endl;
}
void dance() {
    for (int k = 0; k <= 28; k++) {
        clear();
        std::cout << std::string(40, '*') << std::endl;
        head();
        switch (k % 14) {
        case 0: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_                               *\n";
            std::cout << "*  -\\. /-                              *\n";
            std::cout << "* / |. | \\                             *\n";
            std::cout << "*/  |. |  \\                            *\n"; break; }
        case 1: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_                               *\n";
            std::cout << "* --\\. /--                             *\n";
            std::cout << "*/  |. |  \\                            *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 2: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_                               *\n";
            std::cout << "*  -\\. /---                            *\n";
            std::cout << "* / |. |                               *\n";
            std::cout << "*/  |. |                               *\n"; break; }
        case 3: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_  /                            *\n";
            std::cout << "* --\\. /--                             *\n";
            std::cout << "*/  |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 4: {
            std::cout << "*   \\--/  /                            *\n";
            std::cout << "*   _><_ /                             *\n";
            std::cout << "*  -\\. /-                              *\n";
            std::cout << "* / |. |                               *\n";
            std::cout << "*/  |. |                               *\n"; break; }
        case 5: {
            std::cout << "*   \\--/  *                            *\n";
            std::cout << "*   _><_ /                             *\n";
            std::cout << "* --\\. /-                              *\n";
            std::cout << "*/  |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 6: {
            std::cout << "*   \\--/  /                            *\n";
            std::cout << "*   _><_ /                             *\n";
            std::cout << "*---\\. /-                              *\n";
            std::cout << "*   |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 7: {
            std::cout << "*   \\--/  *                            *\n";
            std::cout << "*\\  _><_ /                             *\n";
            std::cout << "* --\\. /-                              *\n";
            std::cout << "*   |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 8: {
            std::cout << "*\\  \\--/  /                            *\n";
            std::cout << "* \\ _><_ /                             *\n";
            std::cout << "*  -\\. /-                              *\n";
            std::cout << "*   |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 9: {
            std::cout << "**  \\--/  *                            *\n";
            std::cout << "* \\ _><_ /                             *\n";
            std::cout << "*  -\\. /-                              *\n";
            std::cout << "*   |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 10: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "**  _><_  *                            *\n";
            std::cout << "* --\\. /--                             *\n";
            std::cout << "*   |. |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 11: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_                               *\n";
            std::cout << "**--\\. /--*                            *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 12: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_                               *\n";
            std::cout << "* --\\. /--                             *\n";
            std::cout << "**  |. |  *                            *\n";
            std::cout << "*   |. |                               *\n"; break; }
        case 13: {
            std::cout << "*   \\--/                               *\n";
            std::cout << "*   _><_                               *\n";
            std::cout << "*  -\\. /-                              *\n";
            std::cout << "* / |. | \\                             *\n";
            std::cout << "**  |. |  *                            *\n"; break; }
        }
        legs();
        std::cout << std::string(40, '*') << std::endl;
        //Sleep(1000);
        clear();
    }
}
void magic(std::string levo, std::string pravo) {
    std::cout << std::string(40, '*') << '\n';
    for (int i = 0; i < 6; i++) { std::cout << "*                                      *\n"; }
    std::cout << "*" << levo << "   _[]_   " << pravo << "*\n";
    std::cout << "*" << levo << "   |~~|   " << pravo << "*\n";
    std::cout << "*" << levo << "   |oq|   " << pravo << "*\n";
    std::cout << "*" << levo << "  (|<>|)  " << pravo << "*\n";
    std::cout << "*" << levo << "   \\--/   " << pravo << "*\n";
    std::cout << "*" << levo << "   _><_   " << pravo << "*\n";
    std::cout << "*" << levo << "  -\\. /-  " << pravo << "*\n";
    std::cout << "*" << levo << " / |. | \\ " << pravo << "*\n";
    std::cout << "*" << levo << "/  |. |  \\" << pravo << "*\n";
    std::cout << "*" << levo << "   |__|   " << pravo << "*\n";
}
void run() {
    for (int i = 0, j = 28; i <= 27; i++, j--) {
        std::string pravo = std::string(i, ' ');
        std::string levo = std::string(j, ' ');
        int k = 0;
        if (i == 0) { 
            k = 1; 
        }
        for (; k < 3; k++) {
            magic(pravo, levo);
            switch (k) {
            case 0: {
                std::cout << "*" << pravo << "   / |   " << levo << " *\n";
                std::cout << "*" << pravo << " _/  |_   " << levo << "*\n";
                std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear(); break;
            }
            case 1: {
                std::cout << "*" << pravo << "    ||    " << levo << "*\n";
                std::cout << "*" << pravo << "   _||_   " << levo << "*\n";
                std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear(); break;
            }
            case 2: {
                std::cout << "*" << pravo << "    | \\   " << levo << "*\n";
                std::cout << "*" << pravo << "   _|  \\_   " << levo << "\b\b*\n";
                std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear(); break; }
            }
        }
    }
    for (int i = 0, j = 28; i <= 28; i++, j--) {
        std::string pravo = std::string(j, ' ');
        std::string levo = std::string(i, ' ');
        int k = 0;
        for (; k < 3; k++) {
            magic(pravo, levo);
            switch (k) {
            case 0: {
                std::cout << "*" << pravo << "   / |   " << levo << " *\n";
                std::cout << "*" << pravo << " _/  |_   " << levo << "*\n";
                std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear(); break;
            }
            case 1: {
                std::cout << "*" << pravo << "    ||    " << levo << "*\n";
                std::cout << "*" << pravo << "   _||_   " << levo << "*\n";
                std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear(); break;
            }
            case 2: {
                if (i != 28) {
                    std::cout << "*" << pravo << "    | \\   " << levo << "*\n";
                    std::cout << "*" << pravo << "   _|  \\_ " << levo << "*\n";
                    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear(); break;
                }
            }
            }
        }
    }
}
void sel() {
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*   _\\/_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void polet1() {
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void polet2() {
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void polet3() {
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();
}
void polet4() {
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void jump() {
    clear();
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
    sel();
    std::cout << std::string(40, '*') << '\n';
    head();
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
    polet1();
    polet2();
    polet3();
    polet4();
    polet3();
    polet2();
    polet1();
    std::cout << std::string(40, '*') << '\n';
    head();
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();
    sel();
    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    std::cout << "*   |__|                               *" << std::endl;
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/;
}
void Throw_a_ball() {
    clear();
    std::cout << std::string(40, '*') << '\n';
    head();
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    head();
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\o                            *" << std::endl;
    std::cout << "*" << "/  |. |  -                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    head();
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /- o                            *" << std::endl;
    std::cout << "*" << " / |. | \\-                            *" << std::endl;
    std::cout << "*" << "/  |. |                               *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    head();
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_  o                            *" << std::endl;
    std::cout << "*" << "  -\\. /---                            *" << std::endl;
    std::cout << "*" << " / |. |                               *" << std::endl;
    std::cout << "*" << "/  |. |                               *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    head();
    std::cout << "*" << "   \\--/  o                            *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /--/                            *" << std::endl;
    std::cout << "*" << " / |. |                               *" << std::endl;
    std::cout << "*" << "/  |. |                               *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|) o                            *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /---                            *" << std::endl;
    std::cout << "*" << " / |. |                               *" << std::endl;
    std::cout << "*" << "/  |. |                               *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|  o                            *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /--                             *" << std::endl;
    std::cout << "*" << " / |. |   \\                           *" << std::endl;
    std::cout << "*" << "/  |. |                               *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|  o                            *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_  o                            *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*        o                             *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*       o                              *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*      o                               *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*     o                                *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*    o                                 *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   o                                  *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*  o                                   *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "* o                                    *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*o  _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*o  |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    body();
    std::cout << "*    ||                                *" << std::endl;
    std::cout << "*   _||_                               *" << std::endl;
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*o  |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << " --\\. /-                              *" << std::endl;
    std::cout << "*" << "/  |. | \\                             *" << std::endl;
    std::cout << "*" << "   |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*o (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "---\\. /-                              *" << std::endl;
    std::cout << "*" << "   |. | \\                             *" << std::endl;
    std::cout << "*" << "   |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "o  \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "\\--\\. /-                              *" << std::endl;
    std::cout << "*" << "   |. | \\                             *" << std::endl;
    std::cout << "*" << "   |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "o  _><_                               *" << std::endl;
    std::cout << "*" << "---\\. /-                              *" << std::endl;
    std::cout << "*" << "   |. | \\                             *" << std::endl;
    std::cout << "*" << "   |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "o -\\. /-                              *" << std::endl;
    std::cout << "*" << "-/ |. | \\                             *" << std::endl;
    std::cout << "*" << "   |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << "o/ |. | \\                             *" << std::endl;
    std::cout << "*" << "-  |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();

    std::cout << std::string(40, '*') << '\n';
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*                                      *" << std::endl;
    std::cout << "*   _[]_                               *" << std::endl;
    std::cout << "*   |~~|                               *" << std::endl;
    std::cout << "*   |oq|                               *" << std::endl;
    std::cout << "*  (|<>|)                              *" << std::endl;
    std::cout << "*" << "   \\--/                               *" << std::endl;
    std::cout << "*" << "   _><_                               *" << std::endl;
    std::cout << "*" << "  -\\. /-                              *" << std::endl;
    std::cout << "*" << " / |. | \\                             *" << std::endl;
    std::cout << "*" << "/  |. |  \\                            *" << std::endl;
    legs();
    std::cout << std::string(40, '*') << '\n';/*Sleep(100)*/; clear();
}
int main() {
    unsigned short a = 0;
    clear();
    menu(a);
    while (a != 5) {
        switch (a) {
        case 1: { dance(); clear(); break; }
        case 2: { run(); clear(); break; }
        case 3: { jump(); clear(); break; }
        case 4: { Throw_a_ball(); clear(); break; }
        }
        menu(a);
    }
    return 0;
}