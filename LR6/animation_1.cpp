#include <iostream>
#include <unistd.h>

using namespace std;

const int h = 12, w = 10, sleeptime = 500;

void draw(char person[h][w])
{
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << person[i][j];
        }
        cout << endl;
    }

    //usleep(sleeptime * 1000);
    //system("clear");
}

void setFrame2(char person[h][w])
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

void setFrame3(char person[h][w])
{
    person[6][1] = ' ';
    person[6][9] = '-';
    person[7][1] = '/';
    person[7][0] = ' ';
    person[7][9] = ' ';
    person[8][0] = '/';
}

void setFrame4(char person[h][w])
{
    person[6][1] = '-';
    person[6][9] = ' ';
    person[5][9] = '/';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}

void setFrame5(char person[h][w])
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
void setFrame6(char person[h][w])
{
    person[6][1] = '-';
    person[4][9] = '*';
    person[7][0] = '/';
    person[7][1] = ' ';
    person[8][0] = ' ';
}

void setFrame7(char person[h][w])
{
    person[4][9] = '/';
    person[6][0] = '-';
    person[7][0] = ' ';
}

void setFrame8(char person[h][w])
{
    person[4][9] = '*';
    person[5][0] = '\\';
    person[6][0] = ' ';
}

void setFrame9(char person[h][w])
{
    person[4][0] = '\\';
    person[4][9] = '/';
    person[5][1] = '\\';
    person[5][0] = ' ';
    person[6][1] = ' ';
}

void setFrame10(char person[h][w])
{
    person[4][0] = '*';
    person[4][9] = '*';
}

void setFrame11(char person[h][w])
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

void setFrame12(char person[h][w])
{
    person[5][0] = ' ';
    person[5][9] = ' ';
    person[6][0] = '*';
    person[6][9] = '*';
}

void setFrame13(char person[h][w])
{
    person[6][0] = ' ';
    person[6][9] = ' ';
    person[7][0] = '*';
    person[7][9] = '*';
}

void setFrame14(char person[h][w])
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

void setFrame15(char person[h][w])
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
        draw(person);
        setFrame2(person);
        draw(person);
        setFrame3(person);
        draw(person);
        setFrame4(person);
        draw(person);
        setFrame5(person);
        draw(person);
        setFrame6(person);
        draw(person);
        setFrame7(person);
        draw(person);
        setFrame8(person);
        draw(person);
        setFrame9(person);
        draw(person);
        setFrame10(person);
        draw(person);
        setFrame11(person);
        draw(person);
        setFrame12(person);
        draw(person);
        setFrame13(person);
        draw(person);
        setFrame14(person);
        draw(person);
        setFrame15(person);
    }
    draw(person);

    return 0;
}