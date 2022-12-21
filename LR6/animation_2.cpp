#include <unistd.h>
#include <iostream>

using namespace std;

void menu(unsigned short& a);
void clear();
void head(); 
void leg();
void dance();
void run();
void jump();
void moving(string move_left, string move_right);
void throw_ball();

int main() {
    unsigned short choice = 0;
    //clear();
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
    cout << "Choose animation:" << endl;
    cout << "Dance: \t\t\t1" << endl;
    cout << "Run: \t\t\t2" << endl;
    cout << "Sit down and jump: \t3" << endl;
    cout << "Throw a ball: \t\t4" << endl << endl;
    cout << "Enter 5 for exit." << endl;
    cin >> a;
}
void clear() { 
    system("cls");
}
void head() {
    cout << "*    /\\                                *\n";
    cout << "*   |oo|                               *\n";
    cout << "*  (|..|)                              *\n";
    cout << "*   |--|                               *\n";
}
void leg() {
    cout << "*    /\\                                *\n";
    cout << "*    ||                                *\n";
    cout << "*   _||_                               *\n";
}
void dance() {
    for (int k = 0; k <= 28; k++) {
        //clear();
        cout << string(40, '*') << '\n';
        for (int i = 0; i < 6; i++) { cout << "*                                      *\n"; }
        head();
        switch (k % 14) {
        case 0: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||                                *\n";
            cout << "*  -| *|-                              *\n";
            cout << "* / |  | \\                             *\n";
            cout << "*/   \\/   \\                            *\n"; break; }
        case 1: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||                                *\n";
            cout << "* --| *|--                             *\n";
            cout << "*/  |  |  \\                            *\n";
            cout << "*    \\/                                *\n"; break; }
        case 2: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||                                *\n";
            cout << "*  -| *|---                            *\n";
            cout << "* / |  |                               *\n";
            cout << "*/   \\/                                *\n"; break; }
        case 3: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||   /                            *\n";
            cout << "* --| *|--                             *\n";
            cout << "*/  |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 4: {
            cout << "*   \\__/  /                            *\n";
            cout << "*    ||  /                             *\n";
            cout << "*  -| *|-                              *\n";
            cout << "* / |  |                               *\n";
            cout << "*/   \\/                                *\n"; break; }
        case 5: {
            cout << "*   \\__/  *                            *\n";
            cout << "*    ||  /                             *\n";
            cout << "* --| *|-                              *\n";
            cout << "*/  |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 6: {
            cout << "*   \\__/  /                            *\n";
            cout << "*    ||  /                             *\n";
            cout << "*---| *|-                              *\n";
            cout << "*   |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 7: {
            cout << "*   \\__/  *                            *\n";
            cout << "*\\   ||  /                             *\n";
            cout << "* --| *|-                              *\n";
            cout << "*   |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 8: {
            cout << "*\\  \\__/  /                            *\n";
            cout << "* \\  ||  /                             *\n";
            cout << "*  -| *|-                              *\n";
            cout << "*   |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 9: {
            cout << "**  \\__/  *                            *\n";
            cout << "* \\  ||  /                             *\n";
            cout << "*  -| *|-                              *\n";
            cout << "*   |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 10: {
            cout << "*   \\__/                               *\n";
            cout << "**   ||   *                            *\n";
            cout << "* --| *|--                             *\n";
            cout << "*   |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 11: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||                                *\n";
            cout << "**--| *|--*                            *\n";
            cout << "*   |  |                               *\n";
            cout << "*    \\/                                *\n"; break; }
        case 12: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||                                *\n";
            cout << "* --| *|--                             *\n";
            cout << "**  |  |  *                            *\n";
            cout << "*    \\/                                *\n"; break; }
        case 13: {
            cout << "*   \\__/                               *\n";
            cout << "*    ||                                *\n";
            cout << "*  -| *|                              *\n";
            cout << "* / |  | \\                             *\n";
            cout << "**   \\/   *                            *\n"; break; }
        }
        leg();
        cout << string(40, '*') << '\n';
        //Sleep(300);
        //clear();
    }
}
void run() {
    for (int i = 0, j = 28; i <= 28; i++, j--) {
        string move_right = string(i, ' ');
        string move_left = string(j, ' ');
        int k = 0;
        if (i == 0) { k = 1; }
        for (; k < 3; k++) {
            moving(move_right, move_left);
            switch (k) {
            case 0: {
                cout << "*" << move_right << "   / |   " << move_left << " *\n";
                cout << "*" << move_right << " _/  |_   " << move_left << "*\n";
                cout << string(40, '*') << '\n';
                //Sleep(150);
                //clear(); 
                break;
            }
            case 1: {
                cout << "*" << move_right << "    ||    " << move_left << "*\n";
                cout << "*" << move_right << "   _||_   " << move_left << "*\n";
                cout << string(40, '*') << '\n';
                //Sleep(150); 
                //clear(); 
                break;
            }
            case 2: {
                cout << "*" << move_right << "    | \\   " << move_left << "*\n";
                cout << "*" << move_right << "   _|  \\_   " << move_left << "\b\b*\n";
                cout << string(40, '*') << '\n';
                //Sleep(150);
                //clear(); 
                break;
            }
            }
        }
    }

    for (int i = 1, j = 27; i <= 28; i++, j--) {
        string move_right = string(j, ' ');
        string move_left = string(i, ' ');
        int k = 0;
        if (j == 0) {
            moving(move_right, move_left);
            cout << "*" << move_right << "    ||    " << move_left << "*\n";
            cout << "*" << move_right << "   _||_   " << move_left << "*\n";
            cout << string(40, '*') << '\n';
            //Sleep(150); 
            //clear();
            break;
        }
        for (; k < 3; k++) {
            moving(move_right, move_left);
            switch (k) {
            case 0: {
                cout << "*" << move_right << "   / |   " << move_left << " *\n";
                cout << "*" << move_right << " _/  |_   " << move_left << "*\n";
                cout << string(40, '*') << '\n';
                //Sleep(150);
                //clear();
                break;
            }
            case 1: {
                cout << "*" << move_right << "    ||    " << move_left << "*\n";
                cout << "*" << move_right << "   _||_   " << move_left << "*\n";
                cout << string(40, '*') << '\n';
                //Sleep(150);
                //clear();
                break;
            }
            case 2: {
                cout << "*" << move_right << "    | \\   " << move_left << "*\n";
                cout << "*" << move_right << "   _|  \\_   " << move_left << "\b\b*\n";
                cout << string(40, '*') << '\n';
                //Sleep(150);
                //clear();
                break;
            }
            }
        }
    }
}
void moving(string move_left, string move_right) {
    cout << string(40, '*') << '\n';
    for (int i = 0; i < 6; i++) { cout << "*                                      *\n"; }
    cout << "*" << move_left << "    /\\    " << move_right << "*\n";
    cout << "*" << move_left << "   |oo|   " << move_right << "*\n";
    cout << "*" << move_left << "  (|..|)  " << move_right << "*\n";
    cout << "*" << move_left << "   |--|   " << move_right << "*\n";
    cout << "*" << move_left << "   \\__/   " << move_right << "*\n";
    cout << "*" << move_left << "    ||    " << move_right << "*\n";
    cout << "*" << move_left << "  -| *|-  " << move_right << "*\n";
    cout << "*" << move_left << " / |  | \\ " << move_right << "*\n";
    cout << "*" << move_left << "/   \\/   \\" << move_right << "*\n";
    cout << "*" << move_left << "    /\\    " << move_right << "*\n";
}
void jump() {
    string filled = "****************************************";
    string bordered = "*                                      *";
    string m[20] = { filled,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,bordered,
    bordered,bordered,bordered,bordered,bordered,bordered,bordered,filled, },
        p[12] = {
            "    /\\    ",
            "   |oo|   ",
            "  (|..|)  ",
            "   |--|   ",
            "   \\__/   ",
            "    ||    ",
            "  -|  |-  ",
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
                "   |oo|   ",
                "  (|..|)  ",
                "   |--|   ",
                "   \\__/   ",
                "    ||    ",
                "  -| *|-  ",
                " / |  | \\ ",
                "/   \\/   \\",
                "    /\\    ",
                "   _\\/_   ", },
                f[12] = {
                    "    /\\    ",
                    "   |oo|   ",
                    "  (|..|)  ",
                    "   |--|   ",
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
            //Sleep(150);
            //system("cls");
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
            //Sleep(150);
            //system("cls");
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
                //Sleep(150);
                //system("cls");
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
                //Sleep(150);
                //system("cls");
            }
        }
    }

}
void throw_ball() {
    string mass[] = {
        /*string0*/                    string(40, '*') + '\n',
        /*string1*/                    '*' + string(38, ' ') + "*\n",
        /*string2*/                    '*' + string(38, ' ') + "*\n",
        /*string3*/                    '*' + string(38, ' ') + "*\n",
        /*string4*/                    '*' + string(38, ' ') + "*\n",
        /*string5*/                    '*' + string(38, ' ') + "*\n",
        /*string6*/                    '*' + string(38, ' ') + "*\n",
        /*string7*/                     "*    /\\                                *\n",
        /*string8*/                     "*   |oo|                               *\n",
        /*string9*/                     "*  (|..|)                              *\n",
        /*string10*/                    "*   |--|                               *\n",
        /*string11*/                    "*   \\__/                               *\n",
        /*string12*/                    "*    ||                                *\n",
        /*string13*/                    "*  -| *|-                              *\n",
        /*string14*/                    "* / |  | \\                             *\n",
        /*string15*/                    "*/   \\/   \\                            *\n",
        /*string16*/                    "*    /\\                                *\n",
        /*string17*/                    "*    ||                                *\n",
        /*string18*/                    "*   _||_                               *\n",
        /*string19*/                    string(40, '*') + '\n'
    };
    for (int k = 0; k < 26; k++) {
        switch (k % 26) {
        case 0: { break; }
        case 1: {
            mass[14] = "* / |  | \\o                            *\n";
            mass[15] = "*/   \\/   -                            *\n";
            break;
        }
        case 2: {
            mass[13] = "*  -| *|- o                            *\n";
            mass[14] = "* / |  | \\-                            *\n";
            mass[15] = "*/   \\/                                *\n";
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
            mass[15] = "*/   \\/   \\                            *\n";
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
            mass[6] = '*' + string(38, ' ') + "*\n";
            break;
        }
        case 11: {
            mass[4] = "*      o                               *\n";
            mass[5] = '*' + string(38, ' ') + "*\n";
            break;
        }
        case 12: {
            mass[3] = "*     o                                *\n";
            mass[4] = '*' + string(38, ' ') + "*\n";
            break;
        }
        case 13: {
            mass[3] = "*    o                                 *\n";
            break;
        }
        case 14: {
            mass[3] = '*' + string(38, ' ') + "*\n";
            mass[4] = "*   o                                  *\n";
            break;
        }
        case 15: {
            mass[4] = '*' + string(38, ' ') + "*\n";
            mass[5] = "*  o                                   *\n";
            break;
        }
        case 16: {
            mass[5] = '*' + string(38, ' ') + "*\n";
            mass[6] = "* o                                    *\n";
            break;
        }
        case 17: {
            mass[6] = '*' + string(38, ' ') + "*\n";
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
            mass[15] = "*    \\/   \\                            *\n";
            break;
        }
        case 20: {
            mass[9] = "*  (|..|)                              *\n";
            mass[10] = "*o  |--|                               *\n";
            mass[13] = "*---| *|-                              *\n";
            mass[14] = "*   |  | \\                             *\n";
            mass[15] = "*    \\/   \\                            *\n";
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
            mass[15] = "*-   \\/   \\                            *\n";
            break;
        }
        case 25: {
            mass[13] = "*  -| *|-                              *\n";
            mass[14] = "* / |  | \\                             *\n";
            mass[15] = "*    \\/   \\                            *\n";
            break;
        }
        }
        for (int i = 0; i < 20; i++) {
            cout << mass[i];
        }
    }
}