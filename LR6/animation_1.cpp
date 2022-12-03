#include <iostream>
#include <unistd.h> 
#include <string>
using namespace std;
inline void vivod(string* anim);
int main()
{
    string anim[12];
    anim[0] = "   ()()   ";
    anim[1] = "   ()()   ";
    anim[2] = "   ()()   ";
    anim[3] = "   |..|   ";
    anim[4] = "  \\|  |/ ";
    anim[5] = "  /|UU|\\ ";
    anim[6] = "  --\\/-- ";
    anim[7] = " /  ||  \\";
    anim[8] = "/   ||   \\";
    anim[9] = "    /\\    ";
    anim[10] = "    ||    ";
    anim[11] = "   _||_   ";
    vivod(&anim[0]);
    //system("cls");
    anim[6] = " ---\\/---";
    anim[7] = "/   ||   \\";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[6] = "  --\\/----";
    anim[7] = " /  ||    ";
    anim[8] = "/   ||    ";
    vivod(&anim[0]);
    //ystem("cls");
    anim[5] = "  /|UU|\\ /";
    anim[6] = " ---\\/---";
    anim[7] = "/   ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "  \\|  |/ /";
    anim[5] = "  /|UU|\\/";
    anim[6] = "  --\\/--  ";
    anim[7] = " /  ||    ";
    anim[8] = "/   ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "  \\|  |/ *";
    anim[5] = "  /|UU|\\/";
    anim[6] = " ---\\/--";
    anim[7] = "/   ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "  \\|  |/ /";
    anim[5] = "  /|UU|\\/";
    anim[6] = "----\\/--";
    anim[7] = "    ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "  \\|  |/ *";
    anim[5] = "\\ /|UU|\\/";
    anim[6] = " ---\\/--";
    anim[7] = "    ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "\\ \\|  |/ /";
    anim[5] = " \\/|UU|\\/";
    anim[6] = "  --\\/-- ";
    anim[7] = "    ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "* \\|  |/ *";
    anim[5] = " \\/|UU|\\/";
    anim[7] = "    ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[4] = "  \\|  |/ ";
    anim[5] = "* /|UU|\\ *";
    anim[6] = " ---\\/---";
    anim[7] = "    ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[5] = "  /|UU|\\ ";
    anim[6] = "*---\\/---*";
    anim[7] = "    ||    ";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[6] = " ---\\/---";
    anim[7] = "*   ||   *";
    anim[8] = "    ||    ";
    vivod(&anim[0]);
    //system("cls");
    anim[6] = "  --\\/-- ";
    anim[7] = " /  ||  \\";
    anim[8] = "*   ||   *";
    vivod(&anim[0]);
    return 0;
}

void vivod(string* anim) {
    for (int i = 0; i < 12; i++) {
        cout << *anim << endl;
        *anim++;
    }
    //Sleep(300);
    //system("cls");
}