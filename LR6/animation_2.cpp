#include <iostream>
#include <unistd.h>

using namespace std;

const int h = 12, w = 11, sleeptime = 500 * 1000, hc = 20, wc = 40;

char cons[hc][wc]
{
    {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
};
char person[h][w]
{
    {' ',' ',' ','_','[',']','_',' ',' ',' '},
    {' ',' ',' ','|','~','~','|',' ',' ',' '},
    {' ',' ',' ','|','o','q','|',' ',' ',' '},
    {' ',' ','(','|','<','>','|',')',' ',' '},
    {' ',' ',' ','\\','-','-','/',' ',' ',' '},
    {' ',' ',' ','_','>','<','_',' ',' ',' '},
    {' ',' ','-','\\','.',' ','/','-',' ',' '},
    {' ','/',' ','|','.',' ','|',' ','\\',' '},
    {'/',' ',' ','|','.',' ','|',' ',' ','\\'},
    {' ',' ',' ','|','_','_','|',' ',' ',' '},
    {' ',' ',' ',' ','|','|',' ',' ',' ',' '},
    {' ',' ',' ','_','|','|','_',' ',' ',' '},
};

void console_dance();
void zeroing_console();

void output_dance() {
    console_dance();
    // usleep(sleeptime);
    // system("cls");
}

void pos2(char person[h][w]) {
    person[6][1] = '-';
    person[6][8] = '-';
    person[7][1] = ' ';
    person[7][8] = ' ';
    person[7][0] = '/';
    person[7][9] = '\\';
    person[8][0] = ' ';
    person[8][9] = ' ';
}

void pos3(char person[h][w]) {
    person[6][1] = ' ';
    person[6][9] = '-';
    person[7][1] = '/';
    person[7][0] = ' ';
    person[7][9] = ' ';
    person[8][0] = '/';
}

void pos4(char person[h][w]) {
    person[6][1] = '-';
    person[6][9] = ' ';
    person[5][9] = '/';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}

void pos5(char person[h][w]) {
    person[4][9] = '/';
    person[5][9] = ' ';
    person[5][8] = '/';
    person[6][1] = ' ';
    person[6][8] = ' ';
    person[7][0] = ' ';
    person[7][1] = '/';
    person[8][0] = '/';
}
void pos6(char person[h][w]) {
    person[6][1] = '-';
    person[4][9] = '*';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}

void pos7(char person[h][w]) {
    person[4][9] = '/';
    person[6][0] = '-';
    person[7][0] = ' ';
}

void pos8(char person[h][w]) {
    person[4][9] = '*';
    person[5][0] = '\\';
    person[6][0] = ' ';
}

void pos9(char person[h][w]) {
    person[4][0] = '\\';
    person[4][9] = '/';
    person[5][1] = '\\';
    person[5][0] = ' ';
    person[6][1] = ' ';
}

void pos10(char person[h][w]) {
    person[4][0] = '*';
    person[4][9] = '*';
}

void pos11(char person[h][w]) {
    person[4][0] = ' ';
    person[4][9] = ' ';
    person[5][0] = '*';
    person[5][9] = '*';
    person[5][1] = ' ';
    person[5][8] = ' ';
    person[6][1] = '-';
    person[6][8] = '-';
}

void pos12(char person[h][w]) {
    person[5][0] = ' ';
    person[5][9] = ' ';
    person[6][0] = '*';
    person[6][9] = '*';
}

void pos13(char person[h][w]) {
    person[6][0] = ' ';
    person[6][9] = ' ';
    person[7][0] = '*';
    person[7][9] = '*';
}

void pos14(char person[h][w]) {
    person[6][1] = ' ';
    person[6][8] = ' ';
    person[7][1] = '/';
    person[7][8] = '\\';
    person[7][0] = ' ';
    person[7][9] = ' ';
    person[8][0] = '*';
    person[8][9] = '*';
}

void pos15(char person[h][w]) {
    person[8][0] = '/';
    person[8][9] = '\\';
}

void dance() {
    for (int i = 0; i < 2; i++) {
        output_dance();
        pos2(person);
        output_dance();
        pos3(person);
        output_dance();
        pos4(person);
        output_dance();
        pos5(person);
        output_dance();
        pos6(person);
        output_dance();
        pos7(person);
        output_dance();
        pos8(person);
        output_dance();
        pos9(person);
        output_dance();
        pos10(person);
        output_dance();
        pos11(person);
        output_dance();
        pos12(person);
        output_dance();
        pos13(person);
        output_dance();
        pos14(person);
        output_dance();
        pos15(person);
    }
    output_dance();

}

void run_pos2() {
    person[10][5] = ' ';
    person[10][6] = '\\';
    person[11][5] = ' ';
    person[11][6] = ' ';
    person[11][7] = '\\';
    person[11][8] = '_';
}

void run_pos3() {
    person[10][3] = '/';
    person[10][4] = ' ';
    person[10][5] = '|';
    person[10][6] = ' ';
    person[11][1] = '_';
    person[11][2] = '/';
    person[11][3] = ' ';
    person[11][4] = ' ';
    person[11][5] = '|';
    person[11][6] = '_';
    person[11][7] = ' ';
    person[11][8] = ' ';
}

void run_pos1() {
    person[10][3] = ' ';
    person[10][4] = '|';
    person[10][5] = '|';
    person[10][6] = ' ';
    person[11][1] = ' ';
    person[11][2] = ' ';
    person[11][3] = '_';
    person[11][4] = '|';
    person[11][5] = '|';
    person[11][6] = '_';
    person[11][7] = ' ';
    person[11][8] = ' ';
}

void run() {
    for (int k = 0; k < wc - w - 1; k++) {
        run_pos1();
        for (int i = 7; i < hc - 1; i++) {
            for (int j = 1 + k; j < w + k; j++) {
                cons[i][j] = person[i - 7][j - 1 - k];
            }
        }

        for (int i = 0; i < hc; i++) {
            for (int j = 0; j < wc; j++) {
                cout << cons[i][j];
            }
            cout << endl;
        }

        // usleep(sleeptime);
        // system("cls");
        zeroing_console();

        run_pos2();

        for (int i = 7; i < hc - 1; i++) {
            for (int j = 1 + k; j < w + k; j++) {
                cons[i][j] = person[i - 7][j - 1 - k];
            }
        }

        for (int i = 0; i < hc; i++) {
            for (int j = 0; j < wc; j++) {
                cout << cons[i][j];
            }
            cout << endl;
        }

        // usleep(sleeptime);
        // system("cls");
        zeroing_console();

        run_pos3();

        for (int i = 7; i < hc - 1; i++) {
            for (int j = 2 + k; j < w + k + 1; j++) {
                cons[i][j] = person[i - 7][j - 2 - k];
            }
        }

        for (int i = 0; i < hc; i++) {
            for (int j = 0; j < wc; j++) {
                cout << cons[i][j];
            }
            cout << endl;
        }

        // usleep(sleeptime);
        // system("cls");
        zeroing_console();

    }

    for (int k = wc - w - 1; k > 0; k--) {
        run_pos1();
        for (int i = 7; i < hc - 1; i++) {
            for (int j = 1 + k; j < w + k; j++) {
                cons[i][j] = person[i - 7][j - 1 - k];
            }
        }

        for (int i = 0; i < hc; i++) {
            for (int j = 0; j < wc; j++) {
                cout << cons[i][j];
            }
            cout << endl;
        }

        // usleep(sleeptime);
        // system("cls");
        zeroing_console();

        run_pos3();

        for (int i = 7; i < hc - 1; i++) {
            for (int j = 1 + k; j < w + k; j++) {
                cons[i][j] = person[i - 7][j - 1 - k];
            }
        }

        for (int i = 0; i < hc; i++) {
            for (int j = 0; j < wc; j++) {
                cout << cons[i][j];
            }
            cout << endl;
        }

        // usleep(sleeptime);
        // system("cls");
        zeroing_console();

        run_pos1();
        run_pos2();

        for (int i = 7; i < hc - 1; i++) {
            for (int j = k; j < w + k - 1; j++) {
                cons[i][j] = person[i - 7][j - k];
            }
        }

        for (int i = 0; i < hc; i++) {
            for (int j = 0; j < wc; j++) {
                cout << cons[i][j];
            }
            cout << endl;
        }

        // usleep(sleeptime);
        // system("cls");
        zeroing_console();

    }

    run_pos1();
    for (int i = 7; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 7][j - 1];
        }
    }

    for (int i = 0; i < hc; i++) {
        for (int j = 0; j < wc; j++) {
            cout << cons[i][j];
        }
        cout << endl;
    }

    // usleep(sleeptime);
    // system("cls");
    zeroing_console();
}

void console_dance() {
    for (int i = 7; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 7][j - 1];
        }
    }
    for (int i = 0; i < hc; i++) {
        for (int j = 0; j < wc; j++) {
            cout << cons[i][j];
        }
        cout << endl;
    }
}

void zeroing_console() {
    char cons_zero[hc][wc] =
    {
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
    };
    for (int i = 0; i < hc; i++) {
        for (int j = 0; j < wc; j++) {
            cons[i][j] = cons_zero[i][j];
        }
    }
}

void console_output() {
    for (int i = 0; i < hc; i++) {
        for (int j = 0; j < wc; j++) {
            cout << cons[i][j];
        }
        cout << endl;
    }

    // usleep(sleeptime);
    // system("cls");
    zeroing_console();
}

void jump_pos1() {
    person[10][4] = '\\';
    person[10][5] = '/';
    person[10][3] = '_';
    person[10][6] = '_';
    person[11][3] = ' ';
    person[11][4] = ' ';
    person[11][5] = ' ';
    person[11][6] = ' ';
}

void jump_pos2() {
    person[10][3] = ' ';
    person[10][6] = ' ';
    person[10][4] = '|';
    person[10][5] = '|';
    person[11][3] = ' ';
    person[11][6] = ' ';
    person[11][4] = '|';
    person[11][5] = '|';
}

void jump_pos3() {
    person[10][3] = ' ';
    person[10][6] = ' ';
    person[10][4] = '|';
    person[10][5] = '|';
    person[11][3] = '_';
    person[11][6] = '_';
    person[11][4] = '|';
    person[11][5] = '|';
}

void jump() {
    jump_pos3();
    for (int i = 7; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 7][j - 1];
        }
    }
    console_output();

    jump_pos1();
    for (int i = 8; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 8][j - 1];
        }
    }
    console_output();

    jump_pos2();
    for (int k = 0; k < 5; k++) {
        for (int i = 7 - k; i < 7 - k + h; i++) {
            for (int j = 1; j < w; j++) {
                cons[i][j] = person[i - 7 + k][j - 1];
            }
        }
        console_output();
    }

    for (int k = 3; k >= 0; k--) {
        for (int i = 7 - k; i < 7 - k + h; i++) {
            for (int j = 1; j < w; j++) {
                cons[i][j] = person[i - 7 + k][j - 1];
            }
        }
        console_output();
    }

    jump_pos1();
    for (int i = 8; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 8][j - 1];
        }
    }
    console_output();

    jump_pos3();
    for (int i = 7; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 7][j - 1];
        }
    }
    console_output();
}

void ball_pos1() {
    person[8][9] = '-';
}
void ball_pos2() {
    person[8][9] = ' ';
    person[7][9] = '-';
}
void ball_pos3() { //once again
    person[7][8] = ' ';
    person[7][9] = ' ';
    person[6][8] = '-';
    person[6][9] = '-';
}
void ball_pos4() {
    person[6][9] = '/';
}
void ball_pos5() {
    person[6][9] = ' ';
    person[7][9] = '\\';
}
void ball_pos6() {
    person[6][8] = ' ';
    person[7][8] = '\\';
    person[7][9] = ' ';
    person[8][9] = '\\';
}
void ball_pos7() {
    person[6][1] = '-';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}
void ball_pos8() { //once again
    person[6][0] = '-';
    person[7][0] = ' ';
}
void ball_pos9() {
    person[6][0] = '\\';
}
void ball_pos10() {
    person[6][0] = ' ';
    person[6][1] = ' ';
    person[7][0] = '-';
    person[7][1] = '/';
}
void ball_pos11() {
    person[7][0] = ' ';
    person[8][0] = '-';
}
void ball_pos12() {
    person[8][0] = '/';
}
void part_of_output() {
    for (int i = 7; i < hc - 1; i++) {
        for (int j = 1; j < w; j++) {
            cons[i][j] = person[i - 7][j - 1];
        }
    }
}
void ball() {
    part_of_output();
    console_output();
    ball_pos1();
    part_of_output();
    cons[14][10] = 'o';
    console_output();
    ball_pos2();
    part_of_output();
    cons[13][10] = 'o';
    console_output();
    ball_pos3();
    part_of_output();
    cons[12][10] = 'o';
    console_output();
    ball_pos4();
    part_of_output();
    cons[11][10] = 'o';
    console_output();
    ball_pos3();
    part_of_output();
    cons[10][10] = 'o';
    console_output();
    ball_pos5();
    part_of_output();
    cons[9][10] = 'o';
    console_output();
    ball_pos6();
    part_of_output();
    cons[8][10] = 'o';
    console_output();
    part_of_output();
    cons[7][10] = 'o';
    console_output();
    part_of_output();
    cons[6][9] = 'o';
    console_output();
    part_of_output();
    cons[5][8] = 'o';
    console_output();
    part_of_output();
    cons[4][7] = 'o';
    console_output();
    part_of_output();
    cons[3][6] = 'o';
    console_output();
    part_of_output();
    cons[3][5] = 'o';
    console_output();
    part_of_output();
    cons[4][4] = 'o';
    console_output();
    part_of_output();
    cons[5][3] = 'o';
    console_output();
    part_of_output();
    cons[6][2] = 'o';
    console_output();
    part_of_output();
    cons[7][1] = 'o';
    console_output();
    part_of_output();
    cons[8][1] = 'o';
    console_output();
    ball_pos7();
    part_of_output();
    cons[9][1] = 'o';
    console_output();
    ball_pos8();
    part_of_output();
    cons[10][1] = 'o';
    console_output();
    ball_pos9();
    part_of_output();
    cons[11][1] = 'o';
    console_output();
    ball_pos8();
    part_of_output();
    cons[12][1] = 'o';
    console_output();
    ball_pos10();
    part_of_output();
    cons[13][1] = 'o';
    console_output();
    ball_pos11();
    part_of_output();
    cons[14][1] = 'o';
    console_output();
    ball_pos12();
    part_of_output();
    console_output();
}

void menu()
{

    // int n;
    cout << "Choose animation:" << endl;
    cout << "Dance: \t\t\t1" << endl;
    cout << "Run: \t\t\t2" << endl;
    cout << "Sit down and jump: \t3" << endl;
    cout << "Throw a ball: \t\t4" << endl;

    cout << "Enter 5 for exit." << endl;
    // cin >> n;
    // system("cls");

    // switch(n) {
    //     case 1: dance(); menu();
    //     case 2: run(); menu();
    //     case 3: jump(); menu();
    //     case 4: ball(); menu();
    //     case 5: break;
    // }
}

int main() {
    int n;
    while (n != 5) {
        menu();
        cin >> n;
        switch(n) {
            case 1: dance(); break;
            case 2: run(); break;
            case 3: jump(); break;
            case 4: ball(); break;
            case 5: break;
        }
    }
    // cin >> n;
    // switch(n) {
    //     case 1: dance(); menu();
    //     case 2: run(); menu();
    //     case 3: jump(); menu();
    //     case 4: ball(); menu();
    //     case 5: break;
    // }
    return 0;
}
