#include <unistd.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

void print(vector<string> person);
void dance(vector<string> person);

int main()
{
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
    dance(person);
    return 0;
}
void print(vector<string> person)
{
    for (auto c : person)
        cout << c << endl;
}
void dance(vector<string> person)
{
    int delay = 650*1000;
    for (int i = 0; i < 2; i++)
    {
        print(person);
        usleep(delay);
        //system("cls");
        person[13] = "* --|  |--                             *";
        person[14] = "*/  |  |  \\                            *";
        person[15] = "*    \\/                                *";
        print(person);
        usleep(delay);
        //system("cls");
        person[13] = "*  -|  |---                            *";
        person[14] = "* / |  |                               *";
        person[15] = "*/   \\/                                *";
        print(person);
        usleep(delay);
        //system("cls");
        person[12] = "*    ||   /                            *";
        person[13] = "* --|  |--                             *";
        person[14] = "*/  |  |                               *";
        person[15] = "*    \\/                                *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "*   \\__/  /                            *";
        person[12] = "*    ||  /                             *";
        person[13] = "*  -|  |-                              *";
        person[14] = "* / |  |                               *";
        person[15] = "*/   \\/                                *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "*   \\__/  *                            *";
        person[13] = "* --|  |-                              *";
        person[14] = "*/  |  |                               *";
        person[15] = "*    \\/                                *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "*   \\__/  /                            *";
        person[13] = "*---|  |-                              *";
        person[14] = "*   |  |                               *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "*   \\__/  *                            *";
        person[12] = "*\\   ||  /                             *";
        person[13] = "* --|  |-                              *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "*\\  \\__/  /                            *";
        person[12] = "* \\  ||  /                             *";
        person[13] = "*  -|  |-                              *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "**  \\__/  *                            *";
        print(person);
        usleep(delay);
        //system("cls");
        person[11] = "*   \\__/                               *";
        person[12] = "**   ||   *                            *";
        person[13] = "* --|  |--                             *";
        print(person);
        usleep(delay);
        //system("cls");
        person[12] = "*    ||                                *";
        person[13] = "**--|  |--*                            *";
        print(person);
        usleep(delay);
        //system("cls");
        person[13] = "* --|  |--                             *";
        person[14] = "**  |  |  *                            *";
        print(person);
        usleep(delay);
        //system("cls");
        person[13] = "*  -|  |-                              *";
        person[14] = "* / |  | \\                             *";
        person[15] = "**   \\/   *                            *";
        print(person);
        usleep(delay);
        //system("cls");
        person[15] = "*/   \\/   \\                            *";
        print(person);
    }
}