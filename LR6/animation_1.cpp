// Анимация 6.1.cpp 

#include <iostream>
#include <unistd.h>
using namespace std;

void dans(string persan[]);
int main()
{
    string persan[12];
    persan[0] = "    /\\    ";
    persan[1] = "   |oo|   ";
    persan[2] = "  (|..|)  ";
    persan[3] = "   |--|   ";
    persan[4] = "   \\__/   ";
    persan[5] = "    ||    ";
    persan[6] = "  -| *|-  ";
    persan[7] = " / |  | \\ ";
    persan[8] = "/   \\/   \\";
    persan[9] = "    /\\    ";
    persan[10] = "    ||    ";
    persan[11] = "   _||_   ";
    dans(persan);
    return 0;
}
void dans(string persan[])
{
    for (int i = 0; i < 12; i++)
    {
        cout << persan[i] << endl;
    }

    //Sleep(700);
    //system("cls");

    for (int s = 0; s < 2; s++) {
        persan[6] = " --| *|-- ";
        persan[7] = "/  |  |  \\";
        persan[8] = "    \\/    ";

        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //3
        persan[6] = "  -| *|---";
        persan[7] = " / |  |   ";
        persan[8] = "/   \\/   ";

        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");

        //4
        persan[5] = "    ||   /";
        persan[6] = " --| *|-- ";
        persan[7] = "/  |  |   ";
        persan[8] = "    \\/   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        persan[4] = "   \\__/  /";
        persan[5] = "    ||  / ";
        persan[6] = "  -| *|-  ";
        persan[7] = " / |  |   ";
        persan[8] = "/   \\/   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        persan[4] = "   \\__/  *";
        persan[7] = "/  |  |   ";
        persan[8] = "    \\/   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        persan[4] = "   \\__/  /";
        persan[6] = "---| *|-  ";
        persan[7] = "   |  |   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //8
        persan[4] = "   \\__/  *";
        persan[5] = "\\   ||  / ";
        persan[6] = " --| *|-  ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //9
        persan[4] = "\\  \\__/  /";
        persan[5] = " \\  ||  / ";
        persan[6] = "  -| *|-  ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //10
        persan[4] = "*  \\__/  *";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //11
        persan[4] = "   \\__/   ";
        persan[5] = " *  ||  * ";
        persan[6] = " --| *|-- ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //12
        persan[5] = "    ||    ";
        persan[6] = "*--| *|--*";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //13
        persan[6] = " --| *|-- ";
        persan[7] = "*  |  |  *";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
        //14
        persan[6] = "  -| *|-  ";
        persan[7] = " / |  | \\ ";
        persan[8] = "*   \\/  *";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");

        persan[8] = "/   \\/   \\";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        //Sleep(700);
        //system("cls");
    }
}
