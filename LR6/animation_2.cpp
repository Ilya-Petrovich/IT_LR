#include <unistd.h>
#include <cstdlib>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

void print(vector<string> person);
void menu();
void dance(vector<string> person);
void run(vector<string> person);
void jump(vector<string> person);
void ballThrow(vector<string> person);

int main()
{
    int choice;
    vector<string> person =
    {
    "****************************************",//0
    "*                                      *",//1
    "*                                      *",//2
    "*                                      *",//3
    "*                                      *",//4
    "*                                      *",//5
    "*                                      *",//6
    "*    /\\                                *",//7
    "*   |oo|                               *",//8
    "*  (|..|)                              *",//9
    "*   |--|                               *",//10
    "*   \\__/                               *",//11
    "*    ||                                *",//12
    "*  -|  |-                              *",//13
    "* / |  | \\                             *",//14
    "*/   \\/   \\                            *",//15
    "*    /\\                                *",//16
    "*    ||                                *",//17
    "*   _||_                               *",//18
    "****************************************",//19
    };
    while (true)
    {
    cout << "Choose animation:" << endl;
    cout << "Dance: \t\t\t1" << endl;
    cout << "Run: \t\t\t2" << endl;
    cout << "Sit down and jump: \t3" << endl;
    cout << "Throw a ball: \t\t4" << endl << endl;
    cout << "Enter 5 for exit." << endl;
    cin >> choice;
    switch(choice)
    {
        case 1: print(person); dance(person); break;
        case 2: print(person); run(person); break;
        case 3: print(person); jump(person); break;
        case 4: print(person); ballThrow(person); break;
        case 5: return 0; break;
    }
    }
}
void ballThrow(vector<string> person)
{
    int ballThrowDelay = 250*1000;
    //usleep(ballThrowDelay);//system("clear");
    person[7] = "*    /\\                                *";
    person[8] = "*   |oo|                               *";
    person[9] = "*  (|..|)                              *";
    person[10] = "*   |--|                               *";
    person[11] = "*   \\__/                               *";
    person[12] = "*    ||                                *";
    person[13] = "*  -|  |-                              *";
    person[14] = "* / |  | \\o                            *";
    person[15] = "*/   \\/   -                            *";
    person[16] = "*    /\\                                *";
    person[17] = "*    ||                                *";
    person[18] = "*   _||_                               *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[13] = "*  -|  |- o                            *";
    person[14] = "* / |  | \\-                            *";
    person[15] = "*/   \\/                                *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[12] = "*    ||   o                            *";
    person[13] = "*  -|  |---                            *";
    person[14] = "* / |  |                               *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[11] = "*   \\__/  o                            *";
    person[12] = "*    ||                                *";
    person[13] = "*  -|  |--/                            *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[10] = "*   |--|  o                            *";
    person[11] = "*   \\__/                               *";
    person[13] = "*  -|  |---                            *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[9] = "*  (|..|) o                            *";
    person[10] = "*   |--|                               *";
    person[13] = "*  -|  |--                             *";
    person[14] = "* / |  |  \\                            *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[8] = "*   |oo|  o                            *";
    person[9] = "*  (|..|)                              *";
    person[13] = "*  -|  |-                              *";
    person[14] = "* / |  | \\                             *";
    person[15] = "*/   \\/   \\                            *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[7] = "*    /\\   o                            *";
    person[8] = "*   |oo|                               *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[6] = "*        o                             *";
    person[7] = "*    /\\                                *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[5] = "*       o                              *";
    person[6] = "*                                      *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[4] = "*      o                               *";
    person[5] = "*                                      *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[3] = "*     o                                *";
    person[4] = "*                                      *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[3] = "*    o                                 *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[3] = "*                                      *";
    person[4] = "*   o                                  *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[4] = "*                                      *";
    person[5] = "*  o                                   *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[5] = "*                                      *";
    person[6] = "* o                                    *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[6] = "*                                      *";
    person[7] = "*o   /\\                                *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[7] = "*    /\\                                *";
    person[8] = "*o  |oo|                               *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[8] = "*   |oo|                               *";
    person[9] = "*o (|..|)                              *";
    person[13] = "* --|  |-                              *";
    person[14] = "*/  |  | \\                             *";
    person[15] = "*    \\/   \\                            *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[9] = "*  (|..|)                              *";
    person[10] = "*o  |--|                               *";
    person[13] = "*---|  |-                              *";
    person[14] = "*   |  | \\                             *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[10] = "*   |--|                               *";
    person[11] = "*o  \\__/                               *";
    person[13] = "*\\--|  |-                              *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[11] = "*   \\__/                               *";
    person[12] = "*o   ||                                *";
    person[13] = "*---|  |-                              *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[12] = "*    ||                                *";
    person[13] = "*o -|  |-                              *";
    person[14] = "*-/ |  | \\                             *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[13] = "*  -|  |-                              *";
    person[14] = "*o/ |  | \\                             *";
    person[15] = "*-   \\/   \\                            *";
    print(person);//usleep(ballThrowDelay);//system("clear");
    person[14] = "* / |  | \\                             *";
    person[15] = "*/   \\/   \\                            *";
    print(person);
}

void jump(vector<string> person)
{
    int jumpDelay = 270*1000;
    //usleep(jumpDelay);//system("clear");
    person[7] = "*                                      *";
    person[8] = "*    /\\                                *";
    person[9] = "*   |oo|                               *";
    person[10] = "*  (|..|)                              *";
    person[11] = "*   |--|                               *";
    person[12] = "*   \\__/                               *";
    person[13] = "*    ||                                *";
    person[14] = "*  -|  |-                              *";
    person[15] = "* / |  | \\                             *";
    person[16] = "*/   \\/   \\                            *";
    person[17] = "*    /\\                                *";
    person[18] = "*   _\\/_                               *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[7] = "*    /\\                                *";
    person[8] = "*   |oo|                               *";
    person[9] = "*  (|..|)                              *";
    person[10] = "*   |--|                               *";
    person[11] = "*   \\__/                               *";
    person[12] = "*    ||                                *";
    person[13] = "*  -|  |-                              *";
    person[14] = "* / |  | \\                             *";
    person[15] = "*/   \\/   \\                            *";
    person[16] = "*    /\\                                *";
    person[17] = "*    ||                                *";
    person[18] = "*    ||                                *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[6] = "*    /\\                                *";
    person[7] = "*   |oo|                               *";
    person[8] = "*  (|..|)                              *";
    person[9] = "*   |--|                               *";
    person[10] = "*   \\__/                               *";
    person[11] = "*    ||                                *";
    person[12] = "*  -|  |-                              *";
    person[13] = "* / |  | \\                             *";
    person[14] = "*/   \\/   \\                            *";
    person[15] = "*    /\\                                *";
    person[16] = "*    ||                                *";
    person[17] = "*    ||                                *";
    person[18] = "*                                      *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[5] = "*    /\\                                *";
    person[6] = "*   |oo|                               *";
    person[7] = "*  (|..|)                              *";
    person[8] = "*   |--|                               *";
    person[9] = "*   \\__/                               *";
    person[10] = "*    ||                                *";
    person[11] = "*  -|  |-                              *";
    person[12] = "* / |  | \\                             *";
    person[13] = "*/   \\/   \\                            *";
    person[14] = "*    /\\                                *";
    person[15] = "*    ||                                *";
    person[16] = "*    ||                                *";
    person[17] = "*                                      *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[4] = "*    /\\                                *";
    person[5] = "*   |oo|                               *";
    person[6] = "*  (|..|)                              *";
    person[7] = "*   |--|                               *";
    person[8] = "*   \\__/                               *";
    person[9] = "*    ||                                *";
    person[10] = "*  -|  |-                              *";
    person[11] = "* / |  | \\                             *";
    person[12] = "*/   \\/   \\                            *";
    person[13] = "*    /\\                                *";
    person[14] = "*    ||                                *";
    person[15] = "*    ||                                *";
    person[16] = "*                                      *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[3] = "*    /\\                                *";
    person[4] = "*   |oo|                               *";
    person[5] = "*  (|..|)                              *";
    person[6] = "*   |--|                               *";
    person[7] = "*   \\__/                               *";
    person[8] = "*    ||                                *";
    person[9] = "*  -|  |-                              *";
    person[10] = "* / |  | \\                             *";
    person[11] = "*/   \\/   \\                            *";
    person[12] = "*    /\\                                *";
    person[13] = "*    ||                                *";
    person[14] = "*    ||                                *";
    person[15] = "*                                      *";
    print(person);//usleep(jumpDelay);//usleep(jumpDelay);//system("clear");
    person[3] = "*                                      *";
    person[4] = "*    /\\                                *";
    person[5] = "*   |oo|                               *";
    person[6] = "*  (|..|)                              *";
    person[7] = "*   |--|                               *";
    person[8] = "*   \\__/                               *";
    person[9] = "*    ||                                *";
    person[10] = "*  -|  |-                              *";
    person[11] = "* / |  | \\                             *";
    person[12] = "*/   \\/   \\                            *";
    person[13] = "*    /\\                                *";
    person[14] = "*    ||                                *";
    person[15] = "*    ||                                *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[4] = "*                                      *";
    person[5] = "*    /\\                                *";
    person[6] = "*   |oo|                               *";
    person[7] = "*  (|..|)                              *";
    person[8] = "*   |--|                               *";
    person[9] = "*   \\__/                               *";
    person[10] = "*    ||                                *";
    person[11] = "*  -|  |-                              *";
    person[12] = "* / |  | \\                             *";
    person[13] = "*/   \\/   \\                            *";
    person[14] = "*    /\\                                *";
    person[15] = "*    ||                                *";
    person[16] = "*    ||                                *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[5] = "*                                      *";
    person[6] = "*    /\\                                *";
    person[7] = "*   |oo|                               *";
    person[8] = "*  (|..|)                              *";
    person[9] = "*   |--|                               *";
    person[10] = "*   \\__/                               *";
    person[11] = "*    ||                                *";
    person[12] = "*  -|  |-                              *";
    person[13] = "* / |  | \\                             *";
    person[14] = "*/   \\/   \\                            *";
    person[15] = "*    /\\                                *";
    person[16] = "*    ||                                *";
    person[17] = "*    ||                                *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[6] = "*                                      *";
    person[7] = "*    /\\                                *";
    person[8] = "*   |oo|                               *";
    person[9] = "*  (|..|)                              *";
    person[10] = "*   |--|                               *";
    person[11] = "*   \\__/                               *";
    person[12] = "*    ||                                *";
    person[13] = "*  -|  |-                              *";
    person[14] = "* / |  | \\                             *";
    person[15] = "*/   \\/   \\                            *";
    person[16] = "*    /\\                                *";
    person[17] = "*    ||                                *";
    person[18] = "*    ||                                *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[7] = "*                                      *";
    person[8] = "*    /\\                                *";
    person[9] = "*   |oo|                               *";
    person[10] = "*  (|..|)                              *";
    person[11] = "*   |--|                               *";
    person[12] = "*   \\__/                               *";
    person[13] = "*    ||                                *";
    person[14] = "*  -|  |-                              *";
    person[15] = "* / |  | \\                             *";
    person[16] = "*/   \\/   \\                            *";
    person[17] = "*    /\\                                *";
    person[18] = "*   _\\/_                               *";
    print(person);//usleep(jumpDelay);//system("clear");
    person[7] = "*    /\\                                *";
    person[8] = "*   |oo|                               *";
    person[9] = "*  (|..|)                              *";
    person[10] = "*   |--|                               *";
    person[11] = "*   \\__/                               *";
    person[12] = "*    ||                                *";
    person[13] = "*  -|  |-                              *";
    person[14] = "* / |  | \\                             *";
    person[15] = "*/   \\/   \\                            *";
    person[16] = "*    /\\                                *";
    person[17] = "*    ||                                *";
    person[18] = "*   _||_                               *";
    print(person);//usleep(jumpDelay);
}

void run(vector<string> person)
{
    int runDelay = 165*1000;
    //usleep(runDelay);//system("clear");
    person[17] = "*    | \\                               *";
    person[18] = "*   _|  \\_                             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*     /\\                               *";
    person[8] = "*    |oo|                              *";
    person[9] = "*   (|..|)                             *";
    person[10] = "*    |--|                              *";
    person[11] = "*    \\__/                              *";
    person[12] = "*     ||                               *";
    person[13] = "*   -|  |-                             *";
    person[14] = "*  / |  | \\                            *";
    person[15] = "* /   \\/   \\                           *";
    person[16] = "*     /\\                               *";
    person[17] = "*    / |                               *";
    person[18] = "*  _/  |_                              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*     ||                               *";
    person[18] = "*    _||_                              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*     | \\                              *";
    person[18] = "*    _|  \\_                            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*      /\\                              *";
    person[8] = "*     |oo|                             *";
    person[9] = "*    (|..|)                            *";
    person[10] = "*     |--|                             *";
    person[11] = "*     \\__/                             *";
    person[12] = "*      ||                              *";
    person[13] = "*    -|  |-                            *";
    person[14] = "*   / |  | \\                           *";
    person[15] = "*  /   \\/   \\                          *";
    person[16] = "*      /\\                              *";
    person[17] = "*     / |                              *";
    person[18] = "*   _/  |_                             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*      ||                              *";
    person[18] = "*     _||_                             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*      | \\                             *";
    person[18] = "*     _|  \\_                           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*       /\\                             *";
    person[8] = "*      |oo|                            *";
    person[9] = "*     (|..|)                           *";
    person[10] = "*      |--|                            *";
    person[11] = "*      \\__/                            *";
    person[12] = "*       ||                             *";
    person[13] = "*     -|  |-                           *";
    person[14] = "*    / |  | \\                          *";
    person[15] = "*   /   \\/   \\                         *";
    person[16] = "*       /\\                             *";
    person[17] = "*      / |                             *";
    person[18] = "*    _/  |_                            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*       ||                             *";
    person[18] = "*      _||_                            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*       | \\                            *";
    person[18] = "*      _|  \\_                          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*        /\\                            *";
    person[8] = "*       |oo|                           *";
    person[9] = "*      (|..|)                          *";
    person[10] = "*       |--|                           *";
    person[11] = "*       \\__/                           *";
    person[12] = "*        ||                            *";
    person[13] = "*      -|  |-                          *";
    person[14] = "*     / |  | \\                         *";
    person[15] = "*    /   \\/   \\                        *";
    person[16] = "*        /\\                            *";
    person[17] = "*       / |                            *";
    person[18] = "*     _/  |_                           *"; 
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*        ||                            *";
    person[18] = "*       _||_                           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*        | \\                           *";
    person[18] = "*       _|  \\_                         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*         /\\                           *";
    person[8] = "*        |oo|                          *";
    person[9] = "*       (|..|)                         *";
    person[10] = "*        |--|                          *";
    person[11] = "*        \\__/                          *";
    person[12] = "*         ||                           *";
    person[13] = "*       -|  |-                         *";
    person[14] = "*      / |  | \\                        *";
    person[15] = "*     /   \\/   \\                       *";
    person[16] = "*         /\\                           *";
    person[17] = "*        / |                           *";
    person[18] = "*      _/  |_                          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*         ||                           *";
    person[18] = "*        _||_                          *";    
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*         | \\                          *";
    person[18] = "*        _|  \\_                        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*          /\\                          *";
    person[8] = "*         |oo|                         *";
    person[9] = "*        (|..|)                        *";
    person[10] = "*         |--|                         *";
    person[11] = "*         \\__/                         *";
    person[12] = "*          ||                          *";
    person[13] = "*        -|  |-                        *";
    person[14] = "*       / |  | \\                       *";
    person[15] = "*      /   \\/   \\                      *";
    person[16] = "*          /\\                          *";
    person[17] = "*         / |                          *";
    person[18] = "*       _/  |_                         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*          ||                          *";
    person[18] = "*         _||_                         *";    
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*          | \\                         *";
    person[18] = "*         _|  \\_                       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*           /\\                         *";
    person[8] = "*          |oo|                        *";
    person[9] = "*         (|..|)                       *";
    person[10] = "*          |--|                        *";
    person[11] = "*          \\__/                        *";
    person[12] = "*           ||                         *";
    person[13] = "*         -|  |-                       *";
    person[14] = "*        / |  | \\                      *";
    person[15] = "*       /   \\/   \\                     *";
    person[16] = "*           /\\                         *";
    person[17] = "*          / |                         *";
    person[18] = "*        _/  |_                        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*           ||                         *";
    person[18] = "*          _||_                        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*           | \\                        *";
    person[18] = "*          _|  \\_                      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*            /\\                        *";
    person[8] = "*           |oo|                       *";
    person[9] = "*          (|..|)                      *";
    person[10] = "*           |--|                       *";
    person[11] = "*           \\__/                       *";
    person[12] = "*            ||                        *";
    person[13] = "*          -|  |-                      *";
    person[14] = "*         / |  | \\                     *";
    person[15] = "*        /   \\/   \\                    *";
    person[16] = "*            /\\                        *";
    person[17] = "*           / |                        *";
    person[18] = "*         _/  |_                       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*            ||                        *";
    person[18] = "*           _||_                       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*            | \\                       *";
    person[18] = "*           _|  \\_                     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*             /\\                       *";
    person[8] = "*            |oo|                      *";
    person[9] = "*           (|..|)                     *";
    person[10] = "*            |--|                      *";
    person[11] = "*            \\__/                      *";
    person[12] = "*             ||                       *";
    person[13] = "*           -|  |-                     *";
    person[14] = "*          / |  | \\                    *";
    person[15] = "*         /   \\/   \\                   *";
    person[16] = "*             /\\                       *";
    person[17] = "*            / |                       *";
    person[18] = "*          _/  |_                      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*             ||                       *";
    person[18] = "*            _||_                      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*             | \\                      *";
    person[18] = "*            _|  \\_                    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*              /\\                      *";
    person[8] = "*             |oo|                     *";
    person[9] = "*            (|..|)                    *";
    person[10] = "*             |--|                     *";
    person[11] = "*             \\__/                     *";
    person[12] = "*              ||                      *";
    person[13] = "*            -|  |-                    *";
    person[14] = "*           / |  | \\                   *";
    person[15] = "*          /   \\/   \\                  *";
    person[16] = "*              /\\                      *";
    person[17] = "*             / |                      *";
    person[18] = "*           _/  |_                     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*              ||                      *";
    person[18] = "*             _||_                     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*              | \\                     *";
    person[18] = "*             _|  \\_                   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*               /\\                     *";
    person[8] = "*              |oo|                    *";
    person[9] = "*             (|..|)                   *";
    person[10] = "*              |--|                    *";
    person[11] = "*              \\__/                    *";
    person[12] = "*               ||                     *";
    person[13] = "*             -|  |-                   *";
    person[14] = "*            / |  | \\                  *";
    person[15] = "*           /   \\/   \\                 *";
    person[16] = "*               /\\                     *";
    person[17] = "*              / |                     *";
    person[18] = "*            _/  |_                    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*               ||                     *";
    person[18] = "*              _||_                    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*               | \\                    *";
    person[18] = "*              _|  \\_                  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                /\\                    *";
    person[8] = "*               |oo|                   *";
    person[9] = "*              (|..|)                  *";
    person[10] = "*               |--|                   *";
    person[11] = "*               \\__/                   *";
    person[12] = "*                ||                    *";
    person[13] = "*              -|  |-                  *";
    person[14] = "*             / |  | \\                 *";
    person[15] = "*            /   \\/   \\                *";
    person[16] = "*                /\\                    *";
    person[17] = "*               / |                    *";
    person[18] = "*             _/  |_                   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                ||                    *";
    person[18] = "*               _||_                   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                | \\                   *";
    person[18] = "*               _|  \\_                 *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                 /\\                   *";
    person[8] = "*                |oo|                  *";
    person[9] = "*               (|..|)                 *";
    person[10] = "*                |--|                  *";
    person[11] = "*                \\__/                  *";
    person[12] = "*                 ||                   *";
    person[13] = "*               -|  |-                 *";
    person[14] = "*              / |  | \\                *";
    person[15] = "*             /   \\/   \\               *";
    person[16] = "*                 /\\                   *";
    person[17] = "*                / |                   *";
    person[18] = "*              _/  |_                  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                 ||                   *";
    person[18] = "*                _||_                  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                 | \\                  *";
    person[18] = "*                _|  \\_                *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                  /\\                  *";
    person[8] = "*                 |oo|                 *";
    person[9] = "*                (|..|)                *";
    person[10] = "*                 |--|                 *";
    person[11] = "*                 \\__/                 *";
    person[12] = "*                  ||                  *";
    person[13] = "*                -|  |-                *";
    person[14] = "*               / |  | \\               *";
    person[15] = "*              /   \\/   \\              *";
    person[16] = "*                  /\\                  *";
    person[17] = "*                 / |                  *";
    person[18] = "*               _/  |_                 *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                  ||                  *";
    person[18] = "*                 _||_                 *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                  | \\                 *";
    person[18] = "*                 _|  \\_               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                   /\\                 *";
    person[8] = "*                  |oo|                *";
    person[9] = "*                 (|..|)               *";
    person[10] = "*                  |--|                *";
    person[11] = "*                  \\__/                *";
    person[12] = "*                   ||                 *";
    person[13] = "*                 -|  |-               *";
    person[14] = "*                / |  | \\              *";
    person[15] = "*               /   \\/   \\             *";
    person[16] = "*                   /\\                 *";
    person[17] = "*                  / |                 *";
    person[18] = "*                _/  |_                *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                   ||                 *";
    person[18] = "*                  _||_                *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                   | \\                *";
    person[18] = "*                  _|  \\_              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                    /\\                *";
    person[8] = "*                   |oo|               *";
    person[9] = "*                  (|..|)              *";
    person[10] = "*                   |--|               *";
    person[11] = "*                   \\__/               *";
    person[12] = "*                    ||                *";
    person[13] = "*                  -|  |-              *";
    person[14] = "*                 / |  | \\             *";
    person[15] = "*                /   \\/   \\            *";
    person[16] = "*                    /\\                *";
    person[17] = "*                   / |                *";
    person[18] = "*                 _/  |_               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                    ||                *";
    person[18] = "*                   _||_               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                    | \\               *";
    person[18] = "*                   _|  \\_             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                     /\\               *";
    person[8] = "*                    |oo|              *";
    person[9] = "*                   (|..|)             *";
    person[10] = "*                    |--|              *";
    person[11] = "*                    \\__/              *";
    person[12] = "*                     ||               *";
    person[13] = "*                   -|  |-             *";
    person[14] = "*                  / |  | \\            *";
    person[15] = "*                 /   \\/   \\           *";
    person[16] = "*                     /\\               *";
    person[17] = "*                    / |               *";
    person[18] = "*                  _/  |_              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                     ||               *";
    person[18] = "*                    _||_              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                     | \\              *";
    person[18] = "*                    _|  \\_            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                      /\\              *";
    person[8] = "*                     |oo|             *";
    person[9] = "*                    (|..|)            *";
    person[10] = "*                     |--|             *";
    person[11] = "*                     \\__/             *";
    person[12] = "*                      ||              *";
    person[13] = "*                    -|  |-            *";
    person[14] = "*                   / |  | \\           *";
    person[15] = "*                  /   \\/   \\          *";
    person[16] = "*                      /\\              *";
    person[17] = "*                     / |              *";
    person[18] = "*                   _/  |_             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                      ||              *";
    person[18] = "*                     _||_             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                      | \\             *";
    person[18] = "*                     _|  \\_           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                       /\\             *";
    person[8] = "*                      |oo|            *";
    person[9] = "*                     (|..|)           *";
    person[10] = "*                      |--|            *";
    person[11] = "*                      \\__/            *";
    person[12] = "*                       ||             *";
    person[13] = "*                     -|  |-           *";
    person[14] = "*                    / |  | \\          *";
    person[15] = "*                   /   \\/   \\         *";
    person[16] = "*                       /\\             *";
    person[17] = "*                      / |             *";
    person[18] = "*                    _/  |_            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                       ||             *";
    person[18] = "*                      _||_            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                       | \\            *";
    person[18] = "*                      _|  \\_          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                        /\\            *";
    person[8] = "*                       |oo|           *";
    person[9] = "*                      (|..|)          *";
    person[10] = "*                       |--|           *";
    person[11] = "*                       \\__/           *";
    person[12] = "*                        ||            *";
    person[13] = "*                      -|  |-          *";
    person[14] = "*                     / |  | \\         *";
    person[15] = "*                    /   \\/   \\        *";
    person[16] = "*                        /\\            *";
    person[17] = "*                       / |            *";
    person[18] = "*                     _/  |_           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                        ||            *";
    person[18] = "*                       _||_           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                        | \\           *";
    person[18] = "*                       _|  \\_         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                         /\\           *";
    person[8] = "*                        |oo|          *";
    person[9] = "*                       (|..|)         *";
    person[10] = "*                        |--|          *";
    person[11] = "*                        \\__/          *";
    person[12] = "*                         ||           *";
    person[13] = "*                       -|  |-         *";
    person[14] = "*                      / |  | \\        *";
    person[15] = "*                     /   \\/   \\       *";
    person[16] = "*                         /\\           *";
    person[17] = "*                        / |           *";
    person[18] = "*                      _/  |_          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                         ||           *";
    person[18] = "*                        _||_          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                         | \\          *";
    person[18] = "*                        _|  \\_        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                          /\\          *";
    person[8] = "*                         |oo|         *";
    person[9] = "*                        (|..|)        *";
    person[10] = "*                         |--|         *";
    person[11] = "*                         \\__/         *";
    person[12] = "*                          ||          *";
    person[13] = "*                        -|  |-        *";
    person[14] = "*                       / |  | \\       *";
    person[15] = "*                      /   \\/   \\      *";
    person[16] = "*                          /\\          *";
    person[17] = "*                         / |          *";
    person[18] = "*                       _/  |_         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                          ||          *";
    person[18] = "*                         _||_         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                          | \\         *";
    person[18] = "*                         _|  \\_       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                           /\\         *";
    person[8] = "*                          |oo|        *";
    person[9] = "*                         (|..|)       *";
    person[10] = "*                          |--|        *";
    person[11] = "*                          \\__/        *";
    person[12] = "*                           ||         *";
    person[13] = "*                         -|  |-       *";
    person[14] = "*                        / |  | \\      *";
    person[15] = "*                       /   \\/   \\     *";
    person[16] = "*                           /\\         *";
    person[17] = "*                          / |         *";
    person[18] = "*                        _/  |_        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                           ||         *";
    person[18] = "*                          _||_        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                           | \\        *";
    person[18] = "*                          _|  \\_      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                            /\\        *";
    person[8] = "*                           |oo|       *";
    person[9] = "*                          (|..|)      *";
    person[10] = "*                           |--|       *";
    person[11] = "*                           \\__/       *";
    person[12] = "*                            ||        *";
    person[13] = "*                          -|  |-      *";
    person[14] = "*                         / |  | \\     *";
    person[15] = "*                        /   \\/   \\    *";
    person[16] = "*                            /\\        *";
    person[17] = "*                           / |        *";
    person[18] = "*                         _/  |_       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                            ||        *";
    person[18] = "*                           _||_       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                            | \\       *";
    person[18] = "*                           _|  \\_     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                             /\\       *";
    person[8] = "*                            |oo|      *";
    person[9] = "*                           (|..|)     *";
    person[10] = "*                            |--|      *";
    person[11] = "*                            \\__/      *";
    person[12] = "*                             ||       *";
    person[13] = "*                           -|  |-     *";
    person[14] = "*                          / |  | \\    *";
    person[15] = "*                         /   \\/   \\   *";
    person[16] = "*                             /\\       *";
    person[17] = "*                            / |       *";
    person[18] = "*                          _/  |_      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                             ||       *";
    person[18] = "*                            _||_      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                             | \\      *";
    person[18] = "*                            _|  \\_    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                              /\\      *";
    person[8] = "*                             |oo|     *";
    person[9] = "*                            (|..|)    *";
    person[10] = "*                             |--|     *";
    person[11] = "*                             \\__/     *";
    person[12] = "*                              ||      *";
    person[13] = "*                            -|  |-    *";
    person[14] = "*                           / |  | \\   *";
    person[15] = "*                          /   \\/   \\  *";
    person[16] = "*                              /\\      *";
    person[17] = "*                             / |      *";
    person[18] = "*                           _/  |_     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                              ||      *";
    person[18] = "*                             _||_     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                              | \\     *";
    person[18] = "*                             _|  \\_   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                               /\\     *";
    person[8] = "*                              |oo|    *";
    person[9] = "*                             (|..|)   *";
    person[10] = "*                              |--|    *";
    person[11] = "*                              \\__/    *";
    person[12] = "*                               ||     *";
    person[13] = "*                             -|  |-   *";
    person[14] = "*                            / |  | \\  *";
    person[15] = "*                           /   \\/   \\ *";
    person[16] = "*                               /\\     *";
    person[17] = "*                              / |     *";
    person[18] = "*                            _/  |_    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                               ||     *";
    person[18] = "*                              _||_    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                               | \\    *";
    person[18] = "*                              _|  \\_  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                                /\\    *";
    person[8] = "*                               |oo|   *";
    person[9] = "*                              (|..|)  *";
    person[10] = "*                               |--|   *";
    person[11] = "*                               \\__/   *";
    person[12] = "*                                ||    *";
    person[13] = "*                              -|  |-  *";
    person[14] = "*                             / |  | \\ *";
    person[15] = "*                            /   \\/   \\*";
    person[16] = "*                                /\\    *";
    person[17] = "*                               / |    *";
    person[18] = "*                             _/  |_   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                                ||    *";
    person[18] = "*                               _||_   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                                | \\   *";
    person[18] = "*                               _|  \\_ *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                               /\\     *";
    person[8] = "*                              |oo|    *";
    person[9] = "*                             (|..|)   *";
    person[10] = "*                              |--|    *";
    person[11] = "*                              \\__/    *";
    person[12] = "*                               ||     *";
    person[13] = "*                             -|  |-   *";
    person[14] = "*                            / |  | \\  *";
    person[15] = "*                           /   \\/   \\ *";
    person[16] = "*                               /\\     *";
    person[17] = "*                              / |     *";
    person[18] = "*                            _/  |_    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                               ||     *";
    person[18] = "*                              _||_    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                               | \\    *";
    person[18] = "*                              _|  \\_  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                              /\\      *";
    person[8] = "*                             |oo|     *";
    person[9] = "*                            (|..|)    *";
    person[10] = "*                             |--|     *";
    person[11] = "*                             \\__/     *";
    person[12] = "*                              ||      *";
    person[13] = "*                            -|  |-    *";
    person[14] = "*                           / |  | \\   *";
    person[15] = "*                          /   \\/   \\  *";
    person[16] = "*                              /\\      *";
    person[17] = "*                             / |      *";
    person[18] = "*                           _/  |_     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                              ||      *";
    person[18] = "*                             _||_     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                              | \\     *";
    person[18] = "*                             _|  \\_   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                             /\\       *";
    person[8] = "*                            |oo|      *";
    person[9] = "*                           (|..|)     *";
    person[10] = "*                            |--|      *";
    person[11] = "*                            \\__/      *";
    person[12] = "*                             ||       *";
    person[13] = "*                           -|  |-     *";
    person[14] = "*                          / |  | \\    *";
    person[15] = "*                         /   \\/   \\   *";
    person[16] = "*                             /\\       *";
    person[17] = "*                            / |       *";
    person[18] = "*                          _/  |_      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                             ||       *";
    person[18] = "*                            _||_      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                             | \\      *";
    person[18] = "*                            _|  \\_    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                            /\\        *";
    person[8] = "*                           |oo|       *";
    person[9] = "*                          (|..|)      *";
    person[10] = "*                           |--|       *";
    person[11] = "*                           \\__/       *";
    person[12] = "*                            ||        *";
    person[13] = "*                          -|  |-      *";
    person[14] = "*                         / |  | \\     *";
    person[15] = "*                        /   \\/   \\    *";
    person[16] = "*                            /\\        *";
    person[17] = "*                           / |        *";
    person[18] = "*                         _/  |_       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                            ||        *";
    person[18] = "*                           _||_       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                            | \\       *";
    person[18] = "*                           _|  \\_     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                           /\\         *";
    person[8] = "*                          |oo|        *";
    person[9] = "*                         (|..|)       *";
    person[10] = "*                          |--|        *";
    person[11] = "*                          \\__/        *";
    person[12] = "*                           ||         *";
    person[13] = "*                         -|  |-       *";
    person[14] = "*                        / |  | \\      *";
    person[15] = "*                       /   \\/   \\     *";
    person[16] = "*                           /\\         *";
    person[17] = "*                          / |         *";
    person[18] = "*                        _/  |_        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                           ||         *";
    person[18] = "*                          _||_        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                           | \\        *";
    person[18] = "*                          _|  \\_      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                          /\\          *";
    person[8] = "*                         |oo|         *";
    person[9] = "*                        (|..|)        *";
    person[10] = "*                         |--|         *";
    person[11] = "*                         \\__/         *";
    person[12] = "*                          ||          *";
    person[13] = "*                        -|  |-        *";
    person[14] = "*                       / |  | \\       *";
    person[15] = "*                      /   \\/   \\      *";
    person[16] = "*                          /\\          *";
    person[17] = "*                         / |          *";
    person[18] = "*                       _/  |_         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                          ||          *";
    person[18] = "*                         _||_         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                          | \\         *";
    person[18] = "*                         _|  \\_       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                         /\\           *";
    person[8] = "*                        |oo|          *";
    person[9] = "*                       (|..|)         *";
    person[10] = "*                        |--|          *";
    person[11] = "*                        \\__/          *";
    person[12] = "*                         ||           *";
    person[13] = "*                       -|  |-         *";
    person[14] = "*                      / |  | \\        *";
    person[15] = "*                     /   \\/   \\       *";
    person[16] = "*                         /\\           *";
    person[17] = "*                        / |           *";
    person[18] = "*                      _/  |_          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                         ||           *";
    person[18] = "*                        _||_          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                         | \\          *";
    person[18] = "*                        _|  \\_        *";

    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                        /\\            *";
    person[8] = "*                       |oo|           *";
    person[9] = "*                      (|..|)          *";
    person[10] = "*                       |--|           *";
    person[11] = "*                       \\__/           *";
    person[12] = "*                        ||            *";
    person[13] = "*                      -|  |-          *";
    person[14] = "*                     / |  | \\         *";
    person[15] = "*                    /   \\/   \\        *";
    person[16] = "*                        /\\            *";
    person[17] = "*                       / |            *";
    person[18] = "*                     _/  |_           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                        ||            *";
    person[18] = "*                       _||_           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                        | \\           *";
    person[18] = "*                       _|  \\_         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                       /\\             *";
    person[8] = "*                      |oo|            *";
    person[9] = "*                     (|..|)           *";
    person[10] = "*                      |--|            *";
    person[11] = "*                      \\__/            *";
    person[12] = "*                       ||             *";
    person[13] = "*                     -|  |-           *";
    person[14] = "*                    / |  | \\          *";
    person[15] = "*                   /   \\/   \\         *";
    person[16] = "*                       /\\             *";
    person[17] = "*                      / |             *";
    person[18] = "*                    _/  |_            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                       ||             *";
    person[18] = "*                      _||_            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                       | \\            *";
    person[18] = "*                      _|  \\_          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                      /\\              *";
    person[8] = "*                     |oo|             *";
    person[9] = "*                    (|..|)            *";
    person[10] = "*                     |--|             *";
    person[11] = "*                     \\__/             *";
    person[12] = "*                      ||              *";
    person[13] = "*                    -|  |-            *";
    person[14] = "*                   / |  | \\           *";
    person[15] = "*                  /   \\/   \\          *";
    person[16] = "*                      /\\              *";
    person[17] = "*                     / |              *";
    person[18] = "*                   _/  |_             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                      ||              *";
    person[18] = "*                     _||_             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                      | \\             *";
    person[18] = "*                     _|  \\_           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                     /\\               *";
    person[8] = "*                    |oo|              *";
    person[9] = "*                   (|..|)             *";
    person[10] = "*                    |--|              *";
    person[11] = "*                    \\__/              *";
    person[12] = "*                     ||               *";
    person[13] = "*                   -|  |-             *";
    person[14] = "*                  / |  | \\            *";
    person[15] = "*                 /   \\/   \\           *";
    person[16] = "*                     /\\               *";
    person[17] = "*                    / |               *";
    person[18] = "*                  _/  |_              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                     ||               *";
    person[18] = "*                    _||_              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                     | \\              *";
    person[18] = "*                    _|  \\_            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                    /\\                *";
    person[8] = "*                   |oo|               *";
    person[9] = "*                  (|..|)              *";
    person[10] = "*                   |--|               *";
    person[11] = "*                   \\__/               *";
    person[12] = "*                    ||                *";
    person[13] = "*                  -|  |-              *";
    person[14] = "*                 / |  | \\             *";
    person[15] = "*                /   \\/   \\            *";
    person[16] = "*                    /\\                *";
    person[17] = "*                   / |                *";
    person[18] = "*                 _/  |_               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                    ||                *";
    person[18] = "*                   _||_               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                    | \\               *";
    person[18] = "*                   _|  \\_             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                   /\\                 *";
    person[8] = "*                  |oo|                *";
    person[9] = "*                 (|..|)               *";
    person[10] = "*                  |--|                *";
    person[11] = "*                  \\__/                *";
    person[12] = "*                   ||                 *";
    person[13] = "*                 -|  |-               *";
    person[14] = "*                / |  | \\              *";
    person[15] = "*               /   \\/   \\             *";
    person[16] = "*                   /\\                 *";
    person[17] = "*                  / |                 *";
    person[18] = "*                _/  |_                *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                   ||                 *";
    person[18] = "*                  _||_                *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                   | \\                *";
    person[18] = "*                  _|  \\_              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                  /\\                  *";
    person[8] = "*                 |oo|                 *";
    person[9] = "*                (|..|)                *";
    person[10] = "*                 |--|                 *";
    person[11] = "*                 \\__/                 *";
    person[12] = "*                  ||                  *";
    person[13] = "*                -|  |-                *";
    person[14] = "*               / |  | \\               *";
    person[15] = "*              /   \\/   \\              *";
    person[16] = "*                  /\\                  *";
    person[17] = "*                 / |                  *";
    person[18] = "*               _/  |_                 *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                  ||                  *";
    person[18] = "*                 _||_                 *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                  | \\                 *";
    person[18] = "*                 _|  \\_               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                 /\\                   *";
    person[8] = "*                |oo|                  *";
    person[9] = "*               (|..|)                 *";
    person[10] = "*                |--|                  *";
    person[11] = "*                \\__/                  *";
    person[12] = "*                 ||                   *";
    person[13] = "*               -|  |-                 *";
    person[14] = "*              / |  | \\                *";
    person[15] = "*             /   \\/   \\               *";
    person[16] = "*                 /\\                   *";
    person[17] = "*                / |                   *";
    person[18] = "*              _/  |_                  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                 ||                   *";
    person[18] = "*                _||_                  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                 | \\                  *";
    person[18] = "*                _|  \\_                *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*                /\\                    *";
    person[8] = "*               |oo|                   *";
    person[9] = "*              (|..|)                  *";
    person[10] = "*               |--|                   *";
    person[11] = "*               \\__/                   *";
    person[12] = "*                ||                    *";
    person[13] = "*              -|  |-                  *";
    person[14] = "*             / |  | \\                 *";
    person[15] = "*            /   \\/   \\                *";
    person[16] = "*                /\\                    *";
    person[17] = "*               / |                    *";
    person[18] = "*             _/  |_                   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                ||                    *";
    person[18] = "*               _||_                   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*                | \\                   *";
    person[18] = "*               _|  \\_                 *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*               /\\                     *";
    person[8] = "*              |oo|                    *";
    person[9] = "*             (|..|)                   *";
    person[10] = "*              |--|                    *";
    person[11] = "*              \\__/                    *";
    person[12] = "*               ||                     *";
    person[13] = "*             -|  |-                   *";
    person[14] = "*            / |  | \\                  *";
    person[15] = "*           /   \\/   \\                 *";
    person[16] = "*               /\\                     *";
    person[17] = "*              / |                     *";
    person[18] = "*            _/  |_                    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*               ||                     *";
    person[18] = "*              _||_                    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*               | \\                    *";
    person[18] = "*              _|  \\_                  *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*              /\\                      *";
    person[8] = "*             |oo|                     *";
    person[9] = "*            (|..|)                    *";
    person[10] = "*             |--|                     *";
    person[11] = "*             \\__/                     *";
    person[12] = "*              ||                      *";
    person[13] = "*            -|  |-                    *";
    person[14] = "*           / |  | \\                   *";
    person[15] = "*          /   \\/   \\                  *";
    person[16] = "*              /\\                      *";
    person[17] = "*             / |                      *";
    person[18] = "*           _/  |_                     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*              ||                      *";
    person[18] = "*             _||_                     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*              | \\                     *";
    person[18] = "*             _|  \\_                   *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*             /\\                       *";
    person[8] = "*            |oo|                      *";
    person[9] = "*           (|..|)                     *";
    person[10] = "*            |--|                      *";
    person[11] = "*            \\__/                      *";
    person[12] = "*             ||                       *";
    person[13] = "*           -|  |-                     *";
    person[14] = "*          / |  | \\                    *";
    person[15] = "*         /   \\/   \\                   *";
    person[16] = "*             /\\                       *";
    person[17] = "*            / |                       *";
    person[18] = "*          _/  |_                      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*             ||                       *";
    person[18] = "*            _||_                      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*             | \\                      *";
    person[18] = "*            _|  \\_                    *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*            /\\                        *";
    person[8] = "*           |oo|                       *";
    person[9] = "*          (|..|)                      *";
    person[10] = "*           |--|                       *";
    person[11] = "*           \\__/                       *";
    person[12] = "*            ||                        *";
    person[13] = "*          -|  |-                      *";
    person[14] = "*         / |  | \\                     *";
    person[15] = "*        /   \\/   \\                    *";
    person[16] = "*            /\\                        *";
    person[17] = "*           / |                        *";
    person[18] = "*         _/  |_                       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*            ||                        *";
    person[18] = "*           _||_                       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*            | \\                       *";
    person[18] = "*           _|  \\_                     *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*           /\\                         *";
    person[8] = "*          |oo|                        *";
    person[9] = "*         (|..|)                       *";
    person[10] = "*          |--|                        *";
    person[11] = "*          \\__/                        *";
    person[12] = "*           ||                         *";
    person[13] = "*         -|  |-                       *";
    person[14] = "*        / |  | \\                      *";
    person[15] = "*       /   \\/   \\                     *";
    person[16] = "*           /\\                         *";
    person[17] = "*          / |                         *";
    person[18] = "*        _/  |_                        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*           ||                         *";
    person[18] = "*          _||_                        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*           | \\                        *";
    person[18] = "*          _|  \\_                      *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*          /\\                          *";
    person[8] = "*         |oo|                         *";
    person[9] = "*        (|..|)                        *";
    person[10] = "*         |--|                         *";
    person[11] = "*         \\__/                         *";
    person[12] = "*          ||                          *";
    person[13] = "*        -|  |-                        *";
    person[14] = "*       / |  | \\                       *";
    person[15] = "*      /   \\/   \\                      *";
    person[16] = "*          /\\                          *";
    person[17] = "*         / |                          *";
    person[18] = "*       _/  |_                         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*          ||                          *";
    person[18] = "*         _||_                         *";    
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*          | \\                         *";
    person[18] = "*         _|  \\_                       *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*         /\\                           *";
    person[8] = "*        |oo|                          *";
    person[9] = "*       (|..|)                         *";
    person[10] = "*        |--|                          *";
    person[11] = "*        \\__/                          *";
    person[12] = "*         ||                           *";
    person[13] = "*       -|  |-                         *";
    person[14] = "*      / |  | \\                        *";
    person[15] = "*     /   \\/   \\                       *";
    person[16] = "*         /\\                           *";
    person[17] = "*        / |                           *";
    person[18] = "*      _/  |_                          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*         ||                           *";
    person[18] = "*        _||_                          *";    
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*         | \\                          *";
    person[18] = "*        _|  \\_                        *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*        /\\                            *";
    person[8] = "*       |oo|                           *";
    person[9] = "*      (|..|)                          *";
    person[10] = "*       |--|                           *";
    person[11] = "*       \\__/                           *";
    person[12] = "*        ||                            *";
    person[13] = "*      -|  |-                          *";
    person[14] = "*     / |  | \\                         *";
    person[15] = "*    /   \\/   \\                        *";
    person[16] = "*        /\\                            *";
    person[17] = "*       / |                            *";
    person[18] = "*     _/  |_                           *"; 
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*        ||                            *";
    person[18] = "*       _||_                           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*        | \\                           *";
    person[18] = "*       _|  \\_                         *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*       /\\                             *";
    person[8] = "*      |oo|                            *";
    person[9] = "*     (|..|)                           *";
    person[10] = "*      |--|                            *";
    person[11] = "*      \\__/                            *";
    person[12] = "*       ||                             *";
    person[13] = "*     -|  |-                           *";
    person[14] = "*    / |  | \\                          *";
    person[15] = "*   /   \\/   \\                         *";
    person[16] = "*       /\\                             *";
    person[17] = "*      / |                             *";
    person[18] = "*    _/  |_                            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*       ||                             *";
    person[18] = "*      _||_                            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*       | \\                            *";
    person[18] = "*      _|  \\_                          *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*      /\\                              *";
    person[8] = "*     |oo|                             *";
    person[9] = "*    (|..|)                            *";
    person[10] = "*     |--|                             *";
    person[11] = "*     \\__/                             *";
    person[12] = "*      ||                              *";
    person[13] = "*    -|  |-                            *";
    person[14] = "*   / |  | \\                           *";
    person[15] = "*  /   \\/   \\                          *";
    person[16] = "*      /\\                              *";
    person[17] = "*     / |                              *";
    person[18] = "*   _/  |_                             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*      ||                              *";
    person[18] = "*     _||_                             *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*      | \\                             *";
    person[18] = "*     _|  \\_                           *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*     /\\                               *";
    person[8] = "*    |oo|                              *";
    person[9] = "*   (|..|)                             *";
    person[10] = "*    |--|                              *";
    person[11] = "*    \\__/                              *";
    person[12] = "*     ||                               *";
    person[13] = "*   -|  |-                             *";
    person[14] = "*  / |  | \\                            *";
    person[15] = "* /   \\/   \\                           *";
    person[16] = "*     /\\                               *";
    person[17] = "*    / |                               *";
    person[18] = "*  _/  |_                              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*     ||                               *";
    person[18] = "*    _||_                              *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*     | \\                              *";
    person[18] = "*    _|  \\_                            *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[7] = "*    /\\                                *";
    person[8] = "*   |oo|                               *";
    person[9] = "*  (|..|)                              *";
    person[10] = "*   |--|                               *";
    person[11] = "*   \\__/                               *";
    person[12] = "*    ||                                *";
    person[13] = "*  -|  |-                              *";
    person[14] = "* / |  | \\                             *";
    person[15] = "*/   \\/   \\                            *";
    person[16] = "*    /\\                                *";
    person[17] = "*   / |                                *";
    person[18] = "* _/  |_                               *";
    
    print(person);//usleep(runDelay);//system("clear");
    person[17] = "*    ||                                *";
    person[18] = "*   _||_                               *";
    print(person);//usleep(runDelay);
}
void dance(vector<string> person)
{
    int delay = 350*1000;
    for (int i = 0; i < 2; i++)
    {
        //usleep(delay);//system("clear");
        person[13] = "* --|  |--                             *";
        person[14] = "*/  |  |  \\                            *";
        person[15] = "*    \\/                                *";
        print(person);//usleep(delay);//system("clear");
        person[13] = "*  -|  |---                            *";
        person[14] = "* / |  |                               *";
        person[15] = "*/   \\/                                *";
        print(person);//usleep(delay);//system("clear");
        person[12] = "*    ||   /                            *";
        person[13] = "* --|  |--                             *";
        person[14] = "*/  |  |                               *";
        person[15] = "*    \\/                                *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "*   \\__/  /                            *";
        person[12] = "*    ||  /                             *";
        person[13] = "*  -|  |-                              *";
        person[14] = "* / |  |                               *";
        person[15] = "*/   \\/                                *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "*   \\__/  *                            *";
        person[13] = "* --|  |-                              *";
        person[14] = "*/  |  |                               *";
        person[15] = "*    \\/                                *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "*   \\__/  /                            *";
        person[13] = "*---|  |-                              *";
        person[14] = "*   |  |                               *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "*   \\__/  *                            *";
        person[12] = "*\\   ||  /                             *";
        person[13] = "* --|  |-                              *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "*\\  \\__/  /                            *";
        person[12] = "* \\  ||  /                             *";
        person[13] = "*  -|  |-                              *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "**  \\__/  *                            *";
        print(person);//usleep(delay);//system("clear");
        person[11] = "*   \\__/                               *";
        person[12] = "**   ||   *                            *";
        person[13] = "* --|  |--                             *";
        print(person);//usleep(delay);//system("clear");
        person[12] = "*    ||                                *";
        person[13] = "**--|  |--*                            *";
        print(person);//usleep(delay);//system("clear");
        person[13] = "* --|  |--                             *";
        person[14] = "**  |  |  *                            *";
        print(person);//usleep(delay);//system("clear");
        person[13] = "*  -|  |-                              *";
        person[14] = "* / |  | \\                             *";
        person[15] = "**   \\/   *                            *";
        print(person);//usleep(delay);//system("clear");
        person[15] = "*/   \\/   \\                            *";
        print(person);//usleep(delay);
    }
}
void menu()
{
    //system("clear");
    cout << "Choose animation:" << endl;
    cout << "Dance:                     1" << endl;
    cout << "Run:                       2" << endl;
    cout << "Sit down and jump:         3" << endl;
    cout << "Throw a ball:              4" << endl;
    cout << "\nEnter 5 for exit." << endl;
}
void print(vector<string> person)
{
    for (auto c : person)
        cout << c << endl;
}