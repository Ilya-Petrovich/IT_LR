﻿#include <iostream>
#include <windows.h.>
using namespace std;

void dans(string persan[]);
int main()
{
    string persan[12];
    persan[0] = "   _[]_   ";
    persan[1] = "   |~~|   ";
    persan[2] = "   |oq|   ";
    persan[3] = "  (|<>|)  ";
    persan[4] = "   \\--/   ";
    persan[5] = "   _><_   ";
    persan[6] = "  -\\. /-  ";
    persan[7] = " / |. | \\ ";
    persan[8] = "/  |. |  \\";
    persan[9] = "   |__|   ";
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

    Sleep(700);
    system("cls");

    for (int s = 0; s < 2; s++) {
        persan[6] = " --\\. /-- ";
        persan[7] = "/  |. |  \\";
        persan[8] = "   |. |   ";

        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //3
        persan[6] = "  -\\. /---";
        persan[7] = " / |. |   ";
        persan[8] = "/  |. |   ";

        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");

        //4
        persan[5] = "   _><_  /";
        persan[6] = " --\\. /-- ";
        persan[7] = "/  |. |   ";
        persan[8] = "   |. |   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        persan[4] = "   \\--/  /";
        persan[5] = "   _><_ / ";
        persan[6] = "  -\\. /-  ";
        persan[7] = " / |. |   ";
        persan[8] = "/  |. |   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        persan[4] = "   \\--/  *";
        persan[6] = " --\\. /-  ";
        persan[7] = "/  |. |   ";
        persan[8] = "   |. |   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        persan[4] = "   \\--/  /";
        persan[6] = "---\\. /-  ";
        persan[7] = "   |. |   ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //8
        persan[4] = "   \\--/  *";
        persan[5] = "\\  _><_ / ";
        persan[6] = " --\\. /-  ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        persan[4] = "\\  \\--/  /";
        persan[5] = " \\ _><_ / ";
        persan[6] = "  -\\. /-  ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //10
        persan[4] = "*  \\--/  *";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //11
        persan[4] = "   \\--/   ";
        persan[5] = " * _><_ * ";
        persan[6] = " --\\. /-- ";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //12
        persan[5] = "   _><_   ";
        persan[6] = "*--\\. /--*";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //13
        persan[6] = " --\\. /-- ";
        persan[7] = "*  |. |  *";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
        //14
        persan[6] = "  -\\. /-  ";
        persan[7] = " / |. | \\ ";
        persan[8] = "*  |. |  *";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");

        persan[8] = "/  |. |  \\";
        for (int i = 0; i < 12; i++)
        {
            cout << persan[i] << endl;
        }
        Sleep(700);
        system("cls");
    }
}
