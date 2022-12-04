#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>

using namespace std;

const int a = 10, b = 12;
int main()
{
    string anim[b] = {
        "   ()()   ",
        "   ()()   ",
        "   ()()   ",
        "   |..|   ",
        "  \\|  |/  ",
        "  /|UU|\\  ",
        "  --\\/--  ",
        " /  ||  \\ ",
        "/   ||   \\",
        "    /\\    ",
        "    ||    ",
        "   _||_   ",
    };

    for (int i = 0; i < 2; i++)
    {
        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");
        anim[6] = " ---\\/--- ";
        anim[7] = "/   ||   \\";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");
        anim[6] = "  --\\/----";
        anim[7] = " /  ||    ";
        anim[8] = "/   ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[5] = "  /|UU|\\ /";
        anim[6] = " ---\\/--- ";
        anim[7] = "/   ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "  \\|  |/ /";
        anim[5] = "  /|UU|\\/ ";
        anim[6] = "  --\\/--  ";
        anim[7] = " /  ||    ";
        anim[8] = "/   ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "  \\|  |/ *";
        anim[5] = "  /|UU|\\/ ";
        anim[6] = " ---\\/--  ";
        anim[7] = "/   ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "  \\|  |/ /";
        anim[5] = "  /|UU|\\/ ";
        anim[6] = "----\\/--  ";
        anim[7] = "    ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "  \\|  |/ *";
        anim[5] = "\\ /|UU|\\/";
        anim[6] = " ---\\/--  ";
        anim[7] = "    ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "\\ \\|  |/ /";
        anim[5] = " \\/|UU|\\/";
        anim[6] = "  --\\/--  ";
        anim[7] = "    ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "* \\|  |/ *";
        anim[5] = " \\/|UU|\\/";
        anim[7] = "    ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[4] = "  \\|  |/  ";
        anim[5] = "* /|UU|\\ *";
        anim[6] = " ---\\/--- ";
        anim[7] = "    ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[5] = "  /|UU|\\  ";
        anim[6] = "*---\\/---*";
        anim[7] = "    ||    ";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[6] = " ---\\/--- ";
        anim[7] = "*   ||   *";
        anim[8] = "    ||    ";

        for (int i = 0; i < b; i++) cout << anim[i] << "\n";
        //Sleep(300);
        //system("cls");

        anim[6] = "  --\\/--  ";
        anim[7] = " /  ||  \\ ";
        anim[8] = "*   ||   *";
    }
    for (int i = 0; i < b; i++) cout << anim[i] << "\n";
    return 0;
}

