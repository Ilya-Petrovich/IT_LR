#include <iostream>
#include <unistd.h>

using namespace std;

const int h = 12, w = 10, sleeptime = 500;

void output(char person[h][w])
{
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << person[i][j];
        }
        cout << endl;
    }

    // usleep(sleeptime * 1000);
    // system("cls");
}

void pos2(char person[h][w])
{
    person[6][1] = '-';
    person[6][8] = '-';
    person[7][1] = ' ';
    person[7][8] = ' ';
    person[7][0] = '/';
    person[7][9] = '\\';
    person[8][0] = ' ';
    person[8][9] = ' ';
}

void pos3(char person[h][w])
{
    person[6][1] = ' ';
    person[6][9] = '-';
    person[7][1] = '/';
    person[7][0] = ' ';
    person[7][9] = ' ';
    person[8][0] = '/';
}

void pos4(char person[h][w])
{
    person[6][1] = '-';
    person[6][9] = ' ';
    person[5][9] = '/';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}

void pos5(char person[h][w])
{
    person[4][9] = '/';
    person[5][9] = ' ';
    person[5][8] = '/';
    person[6][1] = ' ';
    person[6][8] = ' ';
    person[7][0] = ' ';
    person[7][1] = '/';
    person[8][0] = '/';
}
void pos6(char person[h][w])
{
    person[6][1] = '-';
    person[4][9] = '*';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}

void pos7(char person[h][w])
{
    person[4][9] = '/';
    person[6][0] = '-';
    person[7][0] = ' ';
}

void pos8(char person[h][w])
{
    person[4][9] = '*';
    person[5][0] = '\\';
    person[6][0] = ' ';
}

void pos9(char person[h][w])
{
    person[4][0] = '\\';
    person[4][9] = '/';
    person[5][1] = '\\';
    person[5][0] = ' ';
    person[6][1] = ' ';
}

void pos10(char person[h][w])
{
    person[4][0] = '*';
    person[4][9] = '*';
}

void pos11(char person[h][w])
{
    person[4][0] = ' ';
    person[4][9] = ' ';
    person[5][0] = '*';
    person[5][9] = '*';
    person[5][1] = ' ';
    person[5][8] = ' ';
    person[6][1] = '-';
    person[6][8] = '-';
}

void pos12(char person[h][w])
{
    person[5][0] = ' ';
    person[5][9] = ' ';
    person[6][0] = '*';
    person[6][9] = '*';
}

void pos13(char person[h][w])
{
    person[6][0] = ' ';
    person[6][9] = ' ';
    person[7][0] = '*';
    person[7][9] = '*';
}

void pos14(char person[h][w])
{
    person[6][1] = ' ';
    person[6][8] = ' ';
    person[7][1] = '/';
    person[7][8] = '\\';
    person[7][0] = ' ';
    person[7][9] = ' ';
    person[8][0] = '*';
    person[8][9] = '*';
}

void pos15(char person[h][w])
{
    person[8][0] = '/';
    person[8][9] = '\\';
}

int main()
{
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
    for (int i = 0; i < 2; i++) {
        output(person);
        pos2(person);
        output(person);
        pos3(person);
        output(person);
        pos4(person);
        output(person);
        pos5(person);
        output(person);
        pos6(person);
        output(person);
        pos7(person);
        output(person);
        pos8(person);
        output(person);
        pos9(person);
        output(person);
        pos10(person);
        output(person);
        pos11(person);
        output(person);
        pos12(person);
        output(person);
        pos13(person);
        output(person);
        pos14(person);
        output(person);
        pos15(person);
    }
    output(person);

    return 0;
}
