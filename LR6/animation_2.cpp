#include <unistd.h>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void menu(unsigned short& a);
void del_one_frame();
void head(); void leg();
void dance(); void run(); void jump();
void magic(std::string move_left, std::string move_right);
void throw_ball();

int main() {
    unsigned short choice = 0;
    del_one_frame();
    while (choice != 5) {
        switch (choice) {
        case 1: { dance(); break; }
        case 2: { run(); break; }
        case 3: { jump(); break; }
        case 4: { throw_ball(); break; }
        }
        menu(choice);
    }
    return 0;
}

void menu(unsigned short& a) {
    std::cout << "Choose animation:" << std::endl;
    std::cout << "Dance: \t\t\t1" << std::endl;
    std::cout << "Run: \t\t\t2" << std::endl;
    std::cout << "Sit down and jump: \t3" << std::endl;
    std::cout << "Throw a ball: \t\t4" << std::endl << std::endl;
    std::cout << "Enter 5 for exit." << std::endl;
    std::cin >> a;
}
void del_one_frame() { system("cls");
}
void head() {
    std::cout << "*    /\\                                *\n";
    std::cout << "*   |oo|                               *\n";
    std::cout << "*  (|..|)                              *\n";
    std::cout << "*   |--|                               *\n";
}
void leg() {
    std::cout << "*    /\\                                *\n";
    std::cout << "*    ||                                *\n";
    std::cout << "*   _||_                               *\n";
}
void dance() {
    for (int k = 0; k <= 28; k++) {
        del_one_frame();
        std::cout << std::string(40, '*') << '\n';
        for (int i = 0; i < 6; i++) { std::cout << "*                                      *\n"; }
        head();
        switch (k % 14) {
        case 0: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||                                *\n";
            std::cout << "*  -| *|-                              *\n";
            std::cout << "* / |  | \\                             *\n";
            std::cout << "*/   \\/   \\                            *\n"; break; }
        case 1: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||                                *\n";
            std::cout << "* --| *|--                             *\n";
            std::cout << "*/  |  |  \\                            *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 2: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||                                *\n";
            std::cout << "*  -| *|---                            *\n";
            std::cout << "* / |  |                               *\n";
            std::cout << "*/   \\/                                *\n"; break; }
        case 3: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||   /                            *\n";
            std::cout << "* --| *|--                             *\n";
            std::cout << "*/  |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 4: {
            std::cout << "*   \\__/  /                            *\n";
            std::cout << "*    ||  /                             *\n";
            std::cout << "*  -| *|-                              *\n";
            std::cout << "* / |  |                               *\n";
            std::cout << "*/   \\/                                *\n"; break; }
        case 5: {
            std::cout << "*   \\__/  *                            *\n";
            std::cout << "*    ||  /                             *\n";
            std::cout << "* --| *|-                              *\n";
            std::cout << "*/  |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 6: {
            std::cout << "*   \\__/  /                            *\n";
            std::cout << "*    ||  /                             *\n";
            std::cout << "*---| *|-                              *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 7: {
            std::cout << "*   \\__/  *                            *\n";
            std::cout << "*\\   ||  /                             *\n";
            std::cout << "* --| *|-                              *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 8: {
            std::cout << "*\\  \\__/  /                            *\n";
            std::cout << "* \\  ||  /                             *\n";
            std::cout << "*  -| *|-                              *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 9: {
            std::cout << "**  \\__/  *                            *\n";
            std::cout << "* \\  ||  /                             *\n";
            std::cout << "*  -| *|-                              *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 10: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "**   ||   *                            *\n";
            std::cout << "* --| *|--                             *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 11: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||                                *\n";
            std::cout << "**--| *|--*                            *\n";
            std::cout << "*   |  |                               *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 12: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||                                *\n";
            std::cout << "* --| *|--                             *\n";
            std::cout << "**  |  |  *                            *\n";
            std::cout << "*    \\/                                *\n"; break; }
        case 13: {
            std::cout << "*   \\__/                               *\n";
            std::cout << "*    ||                                *\n";
            std::cout << "*  -| *|-                              *\n";
            std::cout << "* / |  | \\                             *\n";
            std::cout << "**   \\/   *                            *\n"; break; }
        }
        leg();
        std::cout << std::string(40, '*') << '\n';
        Sleep(300);
        del_one_frame();
    }
}
void run() {
    for (int i = 0, j = 28; i <= 28; i++, j--) {
        std::string move_right = std::string(i, ' ');
        std::string move_left = std::string(j, ' ');
        int k = 0;
        if (i == 0) { k = 1; }
        for (; k < 3; k++) {
            magic(move_right, move_left);
            switch (k) {
            case 0: {
                std::cout << "*" << move_right << "   / |   " << move_left << " *\n";
                std::cout << "*" << move_right << " _/  |_   " << move_left << "*\n";
                std::cout << std::string(40, '*') << '\n';
                Sleep(150); del_one_frame(); 
                break;
            }
            case 1: {
                std::cout << "*" << move_right << "    ||    " << move_left << "*\n";
                std::cout << "*" << move_right << "   _||_   " << move_left << "*\n";
                std::cout << std::string(40, '*') << '\n';
                Sleep(150); del_one_frame(); 
                break;
            }
            case 2: {
                std::cout << "*" << move_right << "    | \\   " << move_left << "*\n";
                std::cout << "*" << move_right << "   _|  \\_   " << move_left << "\b\b*\n";
                std::cout << std::string(40, '*') << '\n';
                Sleep(150); del_one_frame(); 
                break;
            }
            }
        }
    }

    for (int i = 1, j = 27; i <= 28; i++, j--) {
        std::string move_right = std::string(j, ' ');
        std::string move_left = std::string(i, ' ');
        int k = 0;
        if (j == 0) {
            magic(move_right, move_left);
            std::cout << "*" << move_right << "    ||    " << move_left << "*\n";
            std::cout << "*" << move_right << "   _||_   " << move_left << "*\n";
            std::cout << std::string(40, '*') << '\n';
            Sleep(150); 
            del_one_frame(); break;
        }
        for (; k < 3; k++) {
            magic(move_right, move_left);
            switch (k) {
            case 0: {
                std::cout << "*" << move_right << "   / |   " << move_left << " *\n";
                std::cout << "*" << move_right << " _/  |_   " << move_left << "*\n";
                std::cout << std::string(40, '*') << '\n';
                Sleep(150);
                del_one_frame();
                break;
            }
            case 1: {
                std::cout << "*" << move_right << "    ||    " << move_left << "*\n";
                std::cout << "*" << move_right << "   _||_   " << move_left << "*\n";
                std::cout << std::string(40, '*') << '\n';
                Sleep(150);
                del_one_frame();
                break;
            }
            case 2: {
                std::cout << "*" << move_right << "    | \\   " << move_left << "*\n";
                std::cout << "*" << move_right << "   _|  \\_   " << move_left << "\b\b*\n";
                std::cout << std::string(40, '*') << '\n';
                Sleep(150);
                del_one_frame();
                break;
            }
            }
        }
    }
}
void magic(std::string move_left, std::string move_right) {
    std::cout << std::string(40, '*') << '\n';
    for (int i = 0; i < 6; i++) { std::cout << "*                                      *\n"; }
    std::cout << "*" << move_left << "    /\\    " << move_right << "*\n";
    std::cout << "*" << move_left << "   |oo|   " << move_right << "*\n";
    std::cout << "*" << move_left << "  (|..|)  " << move_right << "*\n";
    std::cout << "*" << move_left << "   |--|   " << move_right << "*\n";
    std::cout << "*" << move_left << "   \\__/   " << move_right << "*\n";
    std::cout << "*" << move_left << "    ||    " << move_right << "*\n";
    std::cout << "*" << move_left << "  -| *|-  " << move_right << "*\n";
    std::cout << "*" << move_left << " / |  | \\ " << move_right << "*\n";
    std::cout << "*" << move_left << "/   \\/   \\" << move_right << "*\n";
    std::cout << "*" << move_left << "    /\\    " << move_right << "*\n";
}
void jump() { 
    string filled = "***************************************";
    string bordered = "*                                     *";
    string m[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
    bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled, },
        p[12] = {
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
            "   _||_   " },
            o[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
            bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled },
            j1[12] = {
                "          ",
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
                "   _\\/_   ", },
                f[12] = {
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
                    "    ||    " };
    for (int r = 0; r < 6; r++) {
        if (r == 0 or r == 5) {
            for (int i = 0; i < 20; i++) {
                if (o[i] != m[i]) o[i] = m[i];
            }
            for (int i = 0; i < 12; i++) {
                for (int j = 0; j < 10; j++) {
                    if (p[i][j] != ' ') o[i + 7][j + 1] = p[i][j];
                }
            }
            for (int i = 0; i < 20; i++) cout << o[i] << endl;
            Sleep(t);
            system("cls");
        }
        if (r == 1 or r == 4) {
            for (int i = 0; i < 20; i++) {
                if (o[i] != m[i]) o[i] = m[i];

            }
            for (int i = 0; i < 12; i++) {
                for (int j = 0; j < 10; j++) {
                    if (j1[i][j] != ' ') o[i + 7][j + 1] = j1[i][j];
                }
            }
            for (int i = 0; i < 20; i++) {
                cout << o[i] << endl;
            }
            Sleep(t);
            system("cls");
        }
        if (r == 2) {
            for (int u = 0; u < 5; u++) {
                for (int i = 0; i < 20; i++) {
                    if (o[i] != m[i]) o[i] = m[i];
                }
                for (int i = 0; i < 12; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (f[i][j] != ' ') o[i + 7 - u][j + 1] = f[i][j];
                    }
                }
                for (int i = 0; i < 20; i++) {
                    cout << o[i] << endl;
                }
                Sleep(t);
                system("cls");
            }
        }
        if (r == 3) {
            for (int u = 3; u > -1; u--) {
                for (int i = 0; i < 20; i++) {
                    if (o[i] != m[i]) {
                        o[i] = m[i];
                    }
                }
                for (int i = 0; i < 12; i++) {
                    for (int j = 0; j < 10; j++) {
                        if (f[i][j] != ' ') {
                            o[i + 7 - u][j + 1] = f[i][j];
                        }
                    }
                }
                for (int i = 0; i < 20; i++) {
                    cout << o[i] << endl;
                }
                Sleep(t);
                system("cls");
            }
        }
    }

}
void throw_ball() {
    std::string mass[] = {
        /*0*/                    std::string(40, '*') + '\n',
        /*1*/                    '*' + std::string(38, ' ') + "*\n",
        /*2*/                    '*' + std::string(38, ' ') + "*\n",
        /*3*/                    '*' + std::string(38, ' ') + "*\n",
        /*4*/                    '*' + std::string(38, ' ') + "*\n",
        /*5*/                    '*' + std::string(38, ' ') + "*\n",
        /*6*/                    '*' + std::string(38, ' ') + "*\n",
        /*7*/                     "*    /\\                                *\n",
        /*8*/                     "*   |oo|                               *\n",
        /*9*/                     "*  (|..|)                              *\n",
        /*10*/                    "*   |--|                               *\n",
        /*11*/                    "*   \\__/                               *\n",
        /*12*/                    "*    ||                                *\n",
        /*13*/                    "*  -| *|-                              *\n",
        /*14*/                    "* / |  | \\                             *\n",
        /*15*/                    "*/  |  |  \\                            *\n",
        /*16*/                    "*    \\/                                *\n",
        /*17*/                    "*    ||                                *\n",
        /*18*/                    "*   _||_                               *\n",
        /*19*/                    std::string(40, '*') + '\n'
    };
    for (int k = 0; k < 26; k++) {
        switch (k % 26) {
        case 0: { break; }
        case 1: {
            mass[14] = "* / |  | \\o                            *\n";
            mass[15] = "*/  |  |  -                            *\n";
            break;
        }
        case 2: {
            mass[13] = "*  -| *|- o                            *\n";
            mass[14] = "* / |  | \\-                            *\n";
            mass[15] = "*/  |  |                               *\n";
            break;
        }
        case 3: {
            mass[12] = "*    ||   o                            *\n";
            mass[13] = "*  -| *|---                            *\n";
            mass[14] = "* / |  |                               *\n";
            break;
        }
        case 4: {
            mass[11] = "*   \\__/  o                            *\n";
            mass[12] = "*    ||                                *\n";
            mass[13] = "*  -| *|--/                            *\n";
            break;
        }
        case 5: {
            mass[10] = "*   |--|  o                            *\n";
            mass[11] = "*   \\__/                               *\n";
            mass[13] = "*  -| *|---                            *\n";
            break;
        }
        case 6: {
            mass[9] = "*  (|..|) o                            *\n";
            mass[10] = "*   |--|                               *\n";
            mass[13] = "*  -| *|--                             *\n";
            mass[14] = "* / |  |  \\                            *\n";
            break;
        }
        case 7: {
            mass[8] = "*   |oo|  o                            *\n";
            mass[9] = "*  (|..|)                              *\n";
            mass[13] = "*  -| *|-                              *\n";
            mass[14] = "* / |  | \\                             *\n";
            mass[15] = "*/  |  |  \\                            *\n";
            break;
        }
        case 8: {
            mass[7] = "*    /\\   o                            *\n";
            mass[8] = "*   |oo|                               *\n";
            break;
        }
        case 9: {
            mass[6] = "*        o                             *\n";
            mass[7] = "*    /\\                                *\n";
            break;
        }
        case 10: {
            mass[5] = "*       o                              *\n";
            mass[6] = '*' + std::string(38, ' ') + "*\n";
            break;
        }
        case 11: {
            mass[4] = "*      o                               *\n";
            mass[5] = '*' + std::string(38, ' ') + "*\n";
            break;
        }
        case 12: {
            mass[3] = "*     o                                *\n";
            mass[4] = '*' + std::string(38, ' ') + "*\n";
            break;
        }
        case 13: {
            mass[3] = "*    o                                 *\n";
            break;
        }
        case 14: {
            mass[3] = '*' + std::string(38, ' ') + "*\n";
            mass[4] = "*   o                                  *\n";
            break;
        }
        case 15: {
            mass[4] = '*' + std::string(38, ' ') + "*\n";
            mass[5] = "*  o                                   *\n";
            break;
        }
        case 16: {
            mass[5] = '*' + std::string(38, ' ') + "*\n";
            mass[6] = "* o                                    *\n";
            break;
        }
        case 17: {
            mass[6] = '*' + std::string(38, ' ') + "*\n";
            mass[7] = "*o   /\\                                *\n";
            break;
        }
        case 18: {
            mass[7] = "*    /\\                                *\n";
            mass[8] = "*o  |oo|                               *\n";
            break;
        }
        case 19: {
            mass[8] = "*   |oo|                               *\n";
            mass[9] = "*o (|..|)                              *\n";
            mass[13] = "* --| *|-                              *\n";
            mass[14] = "*/  |  | \\                             *\n";
            mass[15] = "*   |  |  \\                            *\n";
            break;
        }
        case 20: {
            mass[9] = "*  (|..|)                              *\n";
            mass[10] = "*o  |--|                               *\n";
            mass[13] = "*---| *|-                              *\n";
            mass[14] = "*   |  | \\                             *\n";
            mass[15] = "*   |  |  \\                            *\n";
            break;
        }
        case 21: {
            mass[10] = "*   |--|                               *\n";
            mass[11] = "*o  \\__/                               *\n";
            mass[13] = "*\\--| *|-                              *\n";
            break;
        }
        case 22: {
            mass[11] = "*   \\__/                               *\n";
            mass[12] = "*o   ||                                *\n";
            mass[13] = "*---| *|-                              *\n";
            break;
        }
        case 23: {
            mass[12] = "*    ||                                *\n";
            mass[13] = "*o -| *|-                              *\n";
            mass[14] = "*-/ |  | \\                             *\n";
            break;
        }
        case 24: {
            mass[13] = "*  -| *|-                              *\n";
            mass[14] = "*o/ |  | \\                             *\n";
            mass[15] = "*-  |  |  \\                            *\n";
            break;
        }
        case 25: {
            mass[13] = "*  -| *|-                              *\n";
            mass[14] = "* / |  | \\                             *\n";
            mass[15] = "*/  |  |  \\                            *\n";
            break;
        }
        }
        for (int i = 0; i < 20; i++) {
            std::cout << mass[i];
        }
    }
}
