#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void show(string person1[], const int size){
    for (int i = 0; i < size; i++) {
        cout << person1[i];
    }
    Sleep(50);
    system("cls");
}
void dance(string person1[], const int size) {
    //frame 1
    show(person1, size);
    person1[17] = "*    ||                                *\n";
    person1[18] = "*   _||_                               *\n";

    // frame 2
    person1[13] = "* --\\. /--                             *\n";
    person1[14] = "*/  |. |  \\                            *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    // frame 3
    person1[13] = "*  -\\. /---                            *\n";
    person1[14] = "* / |. |                               *\n";
    person1[15] = "*/  |. |                               *\n";
    show(person1, size);

    // frame 4
    person1[12] = "*   _><_  /                            *\n";
    person1[13] = "* --\\. /--                             *\n";
    person1[14] = "*/  |. |                               *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    // frame 5
    person1[11] = "*   \\--/  /                            *\n";
    person1[12] = "*   _><_ /                             *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. |                               *\n";
    person1[15] = "*/  |. |                               *\n";
    show(person1, size);

    // frame 6
    person1[11] = "*   \\--/  *                            *\n";
    person1[12] = "*   _><_ /                             *\n";
    person1[13] = "* --\\. /-                              *\n";
    person1[14] = "*/  |. |                               *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    // frame 7
    person1[11] = "*   \\--/  /                            *\n";
    person1[12] = "*   _><_ /                             *\n";
    person1[13] = "*---\\. /-                              *\n";
    person1[14] = "*   |. |                               *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    //frame 8
    person1[11] = "*   \\--/  *                            *\n";
    person1[12] = "*\\  _><_ /                             *\n";
    person1[13] = "* --\\. /-                              *\n";
    person1[14] = "*   |. |                               *\n";
    show(person1, size);

    //frame 9
    person1[11] = "*\\  \\--/  /                            *\n";
    person1[12] = "* \\ _><_ /                             *\n";
    person1[13] = "*  -\\. /-                              *\n";
    show(person1, size);

    //frame 10
    person1[11] = "**  \\--/  *                            *\n";
    show(person1, size);

    //frame 11
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "**  _><_  *                            *\n";
    person1[13] = "* --\\. /--                             *\n";
    show(person1, size);

    //frame 12
    person1[12] = "*   _><_                               *\n";
    person1[13] = "**--\\. /--*                            *\n";
    show(person1, size);

    //frame 13
    person1[13] = "* --\\. /--                             *\n";
    person1[14] = "**  |. |  *                            *\n";
    show(person1, size);

    //frame 14
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "**  |. |  *                            *\n";
    show(person1, size);

    //frame 15
    person1[15] = "*/  |. |  \\                            *\n";
    show(person1, size);

    // frame 16
    person1[13] = "* --\\. /--                             *\n";
    person1[14] = "*/  |. |  \\                            *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    // frame 17
    person1[13] = "*  -\\. /---                            *\n";
    person1[14] = "* / |. |                               *\n";
    person1[15] = "*/  |. |                               *\n";
    show(person1, size);

    // frame 18
    person1[12] = "*   _><_  /                            *\n";
    person1[13] = "* --\\. /--                             *\n";
    person1[14] = "*/  |. |                               *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    // frame 19
    person1[11] = "*   \\--/  /                            *\n";
    person1[12] = "*   _><_ /                             *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. |                               *\n";
    person1[15] = "*/  |. |                               *\n";
    show(person1, size);

    // frame 20
    person1[11] = "*   \\--/  *                            *\n";
    person1[12] = "*   _><_ /                             *\n";
    person1[13] = "* --\\. /-                              *\n";
    person1[14] = "*/  |. |                               *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    // frame 21
    person1[11] = "*   \\--/  /                            *\n";
    person1[12] = "*   _><_ /                             *\n";
    person1[13] = "*---\\. /-                              *\n";
    person1[14] = "*   |. |                               *\n";
    person1[15] = "*   |. |                               *\n";
    show(person1, size);

    //frame 22
    person1[11] = "*   \\--/  *                            *\n";
    person1[12] = "*\\  _><_ /                             *\n";
    person1[13] = "* --\\. /-                              *\n";
    person1[14] = "*   |. |                               *\n";
    show(person1, size);

    //frame 23
    person1[11] = "*\\  \\--/  /                            *\n";
    person1[12] = "* \\ _><_ /                             *\n";
    person1[13] = "*  -\\. /-                              *\n";
    show(person1, size);

    //frame 24
    person1[11] = "**  \\--/  *                            *\n";
    show(person1, size);

    //frame 25
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "**  _><_  *                            *\n";
    person1[13] = "* --\\. /--                             *\n";
    show(person1, size);

    //frame 26
    person1[12] = "*   _><_                               *\n";
    person1[13] = "**--\\. /--*                            *\n";
    show(person1, size);

    //frame 27
    person1[13] = "* --\\. /--                             *\n";
    person1[14] = "**  |. |  *                            *\n";
    show(person1, size);

    //frame 28
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "**  |. |  *                            *\n";
    show(person1, size);

    //frame 29
    person1[15] = "*/  |. |  \\                            *\n";
    show(person1, size);
}
void run(string person1[], const int size);
void sit_jump(string person1[], const int size);
void throw_a_ball(string person1[], const int size);

void show(string person1[], const int size);
void menu();

int main(){
    const int size = 20;
    string person1[size];
    person1[0] = "****************************************\n";
    person1[1] = "*                                      *\n";
    person1[2] = "*                                      *\n";
    person1[3] = "*                                      *\n";
    person1[4] = "*                                      *\n";
    person1[5] = "*                                      *\n";
    person1[6] = "*                                      *\n";
    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "*/  |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    person1[18] = "*   _||_                               *\n";
    person1[19] = "****************************************\n";

    int ans;
    while(true){
        menu();
        cin >> ans;
        if (ans == 1){
            system("cls");
            dance(person1,size);
        }
        else if (ans == 2){
            system("cls");
            run(person1,size);
        }
        else if (ans == 3){
            system("cls");
            sit_jump(person1, size);
        }
        else if (ans == 4){
            system("cls");
            throw_a_ball(person1, size);
            //throw_a_ball(person1,size);
        }
        else if (ans == 5) exit(0);
        else system("cls");
    }
    return 0;
}
void menu(){
    cout << "Choose animation:" << endl;
    cout << "Dance: \t\t\t1" << endl;
    cout << "Run: \t\t\t2" << endl;
    cout << "Sit down and jump: \t3" << endl;
    cout << "Throw a ball: \t\t4" << endl << endl;
    cout << "Enter 5 for exit." << endl;
}

void run(string person1[], const int size){
    char b = ' ';
    bool first_frame = true;
    string sb = "",se= "                            ";
    person1[7] = "*" + sb + "   _[]_   " + se + "*\n";
    person1[8] = "*" + sb + "   |~~|   " + se + "*\n";
    person1[9] = "*" + sb + "   |oq|   " + se + "*\n";
    person1[10] = "*" + sb + "  (|<>|)  " + se + "*\n";
    person1[11] = "*" + sb + "   \\--/   " + se + "*\n";
    person1[12] = "*" + sb + "   _><_   " + se + "*\n";
    person1[13] = "*" + sb + "  -\\. /-  " + se + "*\n";
    person1[14] = "*" + sb + " / |. | \\ " + se + "*\n";
    person1[15] = "*" + sb + "/  |. |  \\" + se + "*\n";
    person1[16] = "*" + sb + "   |__|   " + se + "*\n";
    person1[17] = "*" + sb + "    ||    " + se + "*\n";
    person1[18] = "*" + sb + "   _||_   " + se + "*\n";
    show(person1, size);
    sb = "";
    se = "";
    int t;

    for (int i=0; i < 56; i++){
        t = i;
        if (t > 28) t = i - 2 * (t % 28);
        for (int j = 0; j < t;j++){
            sb += b;
        }
        for (int j = 0; j < (28 - t);j++){
            se += b;
        }
        person1[7] = "*" + sb + "   _[]_   " + se + "*\n";
        person1[8] = "*" + sb + "   |~~|   " + se + "*\n";
        person1[9] = "*" + sb + "   |oq|   " + se + "*\n";
        person1[10] = "*" + sb + "  (|<>|)  " + se + "*\n";
        person1[11] = "*" + sb + "   \\--/   " + se + "*\n";
        person1[12] = "*" + sb + "   _><_   " + se + "*\n";
        person1[13] = "*" + sb + "  -\\. /-  " + se + "*\n";
        person1[14] = "*" + sb + " / |. | \\ " + se + "*\n";
        person1[15] = "*" + sb + "/  |. |  \\" + se + "*\n";
        person1[16] = "*" + sb + "   |__|   " + se + "*\n";

        person1[17] = "*" + sb + "   / |    " + se + "*\n";
        person1[18] = "*" + sb + " _/  |_   " + se + "*\n";
        if (first_frame == false) show(person1, size);

        person1[17] = "*" + sb + "    ||    " + se + "*\n";
        person1[18] = "*" + sb + "   _||_   " + se + "*\n";
        show(person1, size);

        person1[17] = "*" + sb + "    | \\   " + se + "*\n";
        person1[18] = "*" + sb + "   _|  \\_ " + se + "*\n";
        show(person1, size);

        sb = "";
        se = "";
        first_frame = false;
    }
}

void sit_jump(string person1[], const int size){
    show(person1,size);
    person1[7] = "*                                      *\n";
    person1[8] = "*   _[]_                               *\n";
    person1[9] = "*   |~~|                               *\n";
    person1[10] = "*   |oq|                               *\n";
    person1[11] = "*  (|<>|)                              *\n";
    person1[12] = "*   \\--/                               *\n";
    person1[13] = "*   _><_                               *\n";
    person1[14] = "*  -\\. /-                              *\n";
    person1[15] = "* / |. | \\                             *\n";
    person1[16] = "*/  |. |  \\                            *\n";
    person1[17] = "*   |__|                               *\n";
    person1[18] = "*   _\\/_                               *\n";
    show(person1,size);

    int t;
    for (int i = 0; i < 10; i++){
        t = i;
        if (t > 5) t = i - 2 * (t % 5);
        person1[6-t] = "*                                      *\n";
        person1[7-t] = "*   _[]_                               *\n";
        person1[8-t] = "*   |~~|                               *\n";
        person1[9-t] = "*   |oq|                               *\n";
        person1[10-t] = "*  (|<>|)                              *\n";
        person1[11-t] = "*   \\--/                               *\n";
        person1[12-t] = "*   _><_                               *\n";
        person1[13-t] = "*  -\\. /-                              *\n";
        person1[14-t] = "* / |. | \\                             *\n";
        person1[15-t] = "*/  |. |  \\                            *\n";
        person1[16-t] = "*   |__|                               *\n";
        person1[17-t] = "*    ||                                *\n";
        person1[18-t] = "*    ||                                *\n";
        if (person1[18-t + 1] == person1[18 - t]) person1[18 - t + 1] = "*                                      *\n";

        if (person1[7-t - 1] == person1[7 - t]) person1[7 - t - 1] = "*                                      *\n";
        show(person1,size);


    }
    person1[6] = "*                                      *\n";
    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "*/  |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    person1[18] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*                                      *\n";
    person1[8] = "*   _[]_                               *\n";
    person1[9] = "*   |~~|                               *\n";
    person1[10] = "*   |oq|                               *\n";
    person1[11] = "*  (|<>|)                              *\n";
    person1[12] = "*   \\--/                               *\n";
    person1[13] = "*   _><_                               *\n";
    person1[14] = "*  -\\. /-                              *\n";
    person1[15] = "* / |. | \\                             *\n";
    person1[16] = "*/  |. |  \\                            *\n";
    person1[17] = "*   |__|                               *\n";
    person1[18] = "*   _\\/_                               *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "*/  |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    person1[18] = "*   _||_                               *\n";
    show(person1,size);
}

void throw_a_ball(string person1[], const int size){
    show(person1,size);

    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\O                            *\n";
    person1[15] = "*/  |. |  _                            *\n";
    person1[16] = "*   |__|                               *\n";
    show(person1,size);


    person1[13] = "*  -\\. /- O                            *\n";
    person1[14] = "* / |. | \\-                            *\n";
    person1[15] = "*/  |. |                               *\n";
    show(person1,size);

    person1[12] = "*   _><_  O                            *\n";
    person1[13] = "*  -\\. /---                            *\n";
    person1[14] = "* / |. |                               *\n";
    show(person1,size);

    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/  O                            *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /--/                            *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|) O                            *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /---                            *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|  O                            *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /--                             *\n";
    person1[14] = "* / |. |  \\                            *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|  O                            *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "*/  |. |  \\                            *\n";
    show(person1,size);

    person1[7] = "*   _[]_  O                            *\n";
    person1[8] = "*   |~~|                               *\n";
    show(person1,size);

    person1[6] = "*        O                             *\n";
    person1[7] = "*   _[]_                               *\n";
    show(person1,size);

    person1[5] = "*       O                              *\n";
    person1[6] = "*                                      *\n";
    show(person1,size);

    person1[4] = "*      O                               *\n";
    person1[5] = "*                                      *\n";
    show(person1,size);


    person1[3] = "*     O                                *\n";
    person1[4] = "*                                      *\n";
    show(person1,size);

    person1[3] = "*    O                                 *\n";
    person1[4] = "*                                      *\n";
    show(person1,size);


    person1[3] = "*                                      *\n";
    person1[4] = "*   O                                  *\n";
    show(person1,size);


    person1[4] = "*                                      *\n";
    person1[5] = "*  O                                   *\n";
    show(person1,size);


    person1[5] = "*                                      *\n";
    person1[6] = "* O                                    *\n";
    show(person1,size);

    person1[6] = "*                                      *\n";
    person1[7] = "*O  _[]_                               *\n";
    show(person1,size);


    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*O  |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "*/  |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    person1[18] = "*   _||_                               *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*O  |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "* --\\. /-                              *\n";
    person1[14] = "*/  |. | \\                             *\n";
    person1[15] = "*   |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*O (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*---\\. /-                              *\n";
    person1[14] = "*   |. | \\                             *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*O  \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*\\--\\. /-                              *\n";
    person1[14] = "*   |. | \\                             *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*O  _><_                               *\n";
    person1[13] = "*---\\. /-                              *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*O -\\. /-                              *\n";
    person1[14] = "*-/ |. | \\                             *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "*O/ |. | \\                             *\n";
    person1[15] = "*_  |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);

    person1[7] = "*   _[]_                               *\n";
    person1[8] = "*   |~~|                               *\n";
    person1[9] = "*   |oq|                               *\n";
    person1[10] = "*  (|<>|)                              *\n";
    person1[11] = "*   \\--/                               *\n";
    person1[12] = "*   _><_                               *\n";
    person1[13] = "*  -\\. /-                              *\n";
    person1[14] = "* / |. | \\                             *\n";
    person1[15] = "*/  |. |  \\                            *\n";
    person1[16] = "*   |__|                               *\n";
    person1[17] = "*    ||                                *\n";
    show(person1,size);
}
