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
    "    /\\    ",//0
    "   |oo|   ",//1
    "  (|..|)  ",//2
    "   |--|   ",//3
    "   \\__/   ",//4
    "    ||    ",//5
    "  -|  |-  ",//6
    " / |  | \\ ",//7
    "/   \\/   \\",//8
    "    /\\    ",//9
    "    ||    ",//10
    "   _||_   ",//11
    };
    print(person);
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
    int delay = 350*1000;
    for (int i = 0; i < 2; i++)
    {
        //usleep(delay);
        //system("clear");
        person[6] = " --|  |-- ";
        person[7] = "/  |  |  \\";
        person[8] = "    \\/    ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[6] = "  -|  |---";
        person[7] = " / |  |   ";
        person[8] = "/   \\/    ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[5] = "    ||   /";
        person[6] = " --|  |-- ";
        person[7] = "/  |  |   ";
        person[8] = "    \\/    ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "   \\__/  /";
        person[5] = "    ||  / ";
        person[6] = "  -|  |-  ";
        person[7] = " / |  |   ";
        person[8] = "/   \\/    ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "   \\__/  *";
        person[6] = " --|  |-  ";
        person[7] = "/  |  |   ";
        person[8] = "    \\/    ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "   \\__/  /";
        person[6] = "---|  |-  ";
        person[7] = "   |  |   ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "   \\__/  *";
        person[5] = "\\   ||  / ";
        person[6] = " --|  |-  ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "\\  \\__/  /";
        person[5] = " \\  ||  / ";
        person[6] = "  -|  |-  ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "*  \\__/  *";
        print(person);
        //usleep(delay);
        //system("clear");
        person[4] = "   \\__/   ";
        person[5] = "*   ||   *";
        person[6] = " --|  |-- ";
        print(person);
        //usleep(delay);
        //system("clear");
        person[5] = "    ||    ";
        person[6] = "*--|  |--*";
        print(person);
        //usleep(delay);
        //system("clear");
        person[6] = " --|  |-- ";
        person[7] = "*  |  |  *";
        print(person);
        //usleep(delay);
        //system("clear");
        person[6] = "  -|  |-  ";
        person[7] = " / |  | \\ ";
        person[8] = "*   \\/   *";
        print(person);
        //usleep(delay);
        //system("clear");
        person[8] = "/   \\/   \\";
        print(person);
    }
}