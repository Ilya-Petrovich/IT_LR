#include <unistd.h>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

void print(vector<string> sticman);
void dance(vector<string> sticman);

int main()
{
    vector<string> sticman =
    {
    "    /\\    ",//0
    "   |oo|   ",//1
    "  (|..|)  ",//2
    "   |--|   ",//3
    "   \\__/   ",//4
    "    ||    ",//5
    "  -| *|-  ",//6
    " / |  | \\ ",//7
    "/   \\/   \\",//8
    "    /\\    ",//9
    "    ||    ",//10
    "   _||_   ",//11
    };
    print(sticman);
    dance(sticman);
    return 0;
}
void print(vector<string> sticman)
{
    for (auto c : sticman)
        cout << c << endl;
}
void dance(vector<string> sticman)
{
    int delay = 350*1000;
    for (int i = 0; i < 2; i++)
    {
        //usleep(delay);
        //system("clear");
        sticman[6] = " --| *|-- ";
        sticman[7] = "/  |  |  \\";
        sticman[8] = "    \\/    ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[6] = "  -| *|---";
        sticman[7] = " / |  |   ";
        sticman[8] = "/   \\/    ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[5] = "    ||   /";
        sticman[6] = " --| *|-- ";
        sticman[7] = "/  |  |   ";
        sticman[8] = "    \\/    ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "   \\__/  /";
        sticman[5] = "    ||  / ";
        sticman[6] = "  -| *|-  ";
        sticman[7] = " / |  |   ";
        sticman[8] = "/   \\/    ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "   \\__/  *";
        sticman[6] = " --| *|-  ";
        sticman[7] = "/  |  |   ";
        sticman[8] = "    \\/    ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "   \\__/  /";
        sticman[6] = "---| *|-  ";
        sticman[7] = "   |  |   ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "   \\__/  *";
        sticman[5] = "\\   ||  / ";
        sticman[6] = " --| *|-  ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "\\  \\__/  /";
        sticman[5] = " \\  ||  / ";
        sticman[6] = "  -| *|-  ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "*  \\__/  *";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[4] = "   \\__/   ";
        sticman[5] = "*   ||   *";
        sticman[6] = " --| *|-- ";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[5] = "    ||    ";
        sticman[6] = "*--| *|--*";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[6] = " --| *|-- ";
        sticman[7] = "*  |  |  *";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[6] = "  -| *|-  ";
        sticman[7] = " / |  | \\ ";
        sticman[8] = "*   \\/   *";
        print(sticman);
        //usleep(delay);
        //system("clear");
        sticman[8] = "/   \\/   \\";
        print(sticman);
    }
