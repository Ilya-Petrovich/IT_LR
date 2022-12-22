#include <iostream>
#include <unistd.h>
using namespace std;
unsigned short menu(unsigned short& a) {
    cout << "Choose animation:" << endl;
    cout << "Dance: \t\t\t1" << endl;
    cout << "Run: \t\t\t2" << endl;
    cout << "Sit down and jump: \t3" << endl;
    cout << "Throw a ball: \t\t4" << endl << endl;
    cout << "Enter 5 for exit." << endl;
    cin >> a;
    return a;
}
void clear() { /*system("cls");*/ }
void head() {
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
}
void legs() {
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
}
void body() {
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*" << "   |__|                               *" << endl;
}
void dance() {
    for (int k = 0; k <= 28; k++) {
        clear();
        cout << string(40, '*') << endl;
        head();
        switch (k % 14) {
        case 0: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_                               *\n";
            cout << "*  -\\. /-                              *\n";
            cout << "* / |. | \\                             *\n";
            cout << "*/  |. |  \\                            *\n"; break; }
        case 1: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_                               *\n";
            cout << "* --\\. /--                             *\n";
            cout << "*/  |. |  \\                            *\n";
            cout << "*   |. |                               *\n"; break; }
        case 2: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_                               *\n";
            cout << "*  -\\. /---                            *\n";
            cout << "* / |. |                               *\n";
            cout << "*/  |. |                               *\n"; break; }
        case 3: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_  /                            *\n";
            cout << "* --\\. /--                             *\n";
            cout << "*/  |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 4: {
            cout << "*   \\--/  /                            *\n";
            cout << "*   _><_ /                             *\n";
            cout << "*  -\\. /-                              *\n";
            cout << "* / |. |                               *\n";
            cout << "*/  |. |                               *\n"; break; }
        case 5: {
            cout << "*   \\--/  *                            *\n";
            cout << "*   _><_ /                             *\n";
            cout << "* --\\. /-                              *\n";
            cout << "*/  |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 6: {
            cout << "*   \\--/  /                            *\n";
            cout << "*   _><_ /                             *\n";
            cout << "*---\\. /-                              *\n";
            cout << "*   |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 7: {
            cout << "*   \\--/  *                            *\n";
            cout << "*\\  _><_ /                             *\n";
            cout << "* --\\. /-                              *\n";
            cout << "*   |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 8: {
            cout << "*\\  \\--/  /                            *\n";
            cout << "* \\ _><_ /                             *\n";
            cout << "*  -\\. /-                              *\n";
            cout << "*   |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 9: {
            cout << "**  \\--/  *                            *\n";
            cout << "* \\ _><_ /                             *\n";
            cout << "*  -\\. /-                              *\n";
            cout << "*   |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 10: {
            cout << "*   \\--/                               *\n";
            cout << "**  _><_  *                            *\n";
            cout << "* --\\. /--                             *\n";
            cout << "*   |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 11: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_                               *\n";
            cout << "**--\\. /--*                            *\n";
            cout << "*   |. |                               *\n";
            cout << "*   |. |                               *\n"; break; }
        case 12: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_                               *\n";
            cout << "* --\\. /--                             *\n";
            cout << "**  |. |  *                            *\n";
            cout << "*   |. |                               *\n"; break; }
        case 13: {
            cout << "*   \\--/                               *\n";
            cout << "*   _><_                               *\n";
            cout << "*  -\\. /-                              *\n";
            cout << "* / |. | \\                             *\n";
            cout << "**  |. |  *                            *\n"; break; }
        }
        legs();
        cout << string(40, '*') << endl;
        //Sleep(1000);
        clear();
    }
}
void magic(string left, string right) {
    cout << string(40, '*') << '\n';
    for (int i = 0; i < 6; i++) { cout << "*                                      *\n"; }
    cout << "*" << left << "   _[]_   " << right << "*\n";
    cout << "*" << left << "   |~~|   " << right << "*\n";
    cout << "*" << left << "   |oq|   " << right << "*\n";
    cout << "*" << left << "  (|<>|)  " << right << "*\n";
    cout << "*" << left << "   \\--/   " << right << "*\n";
    cout << "*" << left << "   _><_   " << right << "*\n";
    cout << "*" << left << "  -\\. /-  " << right << "*\n";
    cout << "*" << left << " / |. | \\ " << right << "*\n";
    cout << "*" << left << "/  |. |  \\" << right << "*\n";
    cout << "*" << left << "   |__|   " << right << "*\n";
}
void run() {
    for (int i = 0, j = 28; i <= 28; i++, j--) {
        string right = string(i, ' ');
        string left = string(j, ' ');
        int k = 0;

        if (i == 0) {
            k = 1;
        }



        for (; k < 3; k++) {
            if (i == 28 and k == 2) {
                break;
            }

            magic(right, left);

            switch (k) {
            case 0:
                cout << "*" << right << "   / |    " << left << "*\n";
                cout << "*" << right << " _/  |_   " << left << "*\n";
                cout << string(40, '*') << endl;
                //Sleep(100); system("cls");
                break;

            case 1:
                cout << "*" << right << "    ||    " << left << "*\n";
                cout << "*" << right << "   _||_   " << left << "*\n";
                cout << string(40, '*') << endl;
                //Sleep(100); system("cls");
                break;
            case 2:
                cout << "*" << right << "    | \\   " << left << "*\n";
                cout << "*" << right << "   _|  \\_ " << left << "*\n";
                cout << string(40, '*') << endl;
                //Sleep(100); system("cls");
                break;
            }
        }
    }

    for (int i = 28, j = 0; j <= 28; j++, i--) {
        string right = string(i, ' ');
        string left = string(j, ' ');



        for (int k = 0; k < 3; k++) {
            //c++;
            if (j == 0 and !(k == 2)) {
                continue;
            }

            if (j == 28 and k == 2) {
                break;
            }

            magic(right, left);

            switch (k) {
            case 2:
                cout << "*" << right << "   / |    " << left << "*\n";
                cout << "*" << right << " _/  |_   " << left << "*\n";
                cout << string(40, '*') << endl;
                //Sleep(100); system("cls");
                break;

            case 1:
                cout << "*" << right << "    ||    " << left << "*\n";
                cout << "*" << right << "   _||_   " << left << "*\n";
                cout << string(40, '*') << endl;
                //Sleep(100); system("cls");
                break;
            case 0:
                cout << "*" << right << "    | \\   " << left << "*\n";
                cout << "*" << right << "   _|  \\_ " << left << "*\n";
                cout << string(40, '*') << endl;
                //Sleep(100); system("cls");
                break;
            }
        }
    }
}
void sit() {
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*   _\\/_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void firstfly() {
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*                                      *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void polet2() {
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void thirdfly() {
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();
}
void polet4() {
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
}
void jump() {
    clear();
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
    sit();
    cout << string(40, '*') << '\n';
    head();
    body();
    cout << "*    ||                                *" << endl;
    cout << "*    ||                                *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
    firstfly();
    polet2();
    thirdfly();
    polet4();
    thirdfly();
    polet2();
    firstfly();
    cout << string(40, '*') << '\n';
    head();
    body();
    cout << "*    ||                                *" << endl;
    cout << "*    ||                                *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();
    sit();
    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    cout << "*   |__|                               *" << endl;
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/;
}
void Throw_a_ball() {
    clear();
    cout << string(40, '*') << '\n';
    head();
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    head();
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\o                            *" << endl;
    cout << "*" << "/  |. |  -                            *" << endl;
    legs();
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    head();
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /- o                            *" << endl;
    cout << "*" << " / |. | \\-                            *" << endl;
    cout << "*" << "/  |. |                               *" << endl;
    legs();
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    head();
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_  o                            *" << endl;
    cout << "*" << "  -\\. /---                            *" << endl;
    cout << "*" << " / |. |                               *" << endl;
    cout << "*" << "/  |. |                               *" << endl;
    legs();
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    head();
    cout << "*" << "   \\--/  o                            *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /--/                            *" << endl;
    cout << "*" << " / |. |                               *" << endl;
    cout << "*" << "/  |. |                               *" << endl;
    legs();
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|) o                            *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /---                            *" << endl;
    cout << "*" << " / |. |                               *" << endl;
    cout << "*" << "/  |. |                               *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|  o                            *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /--                             *" << endl;
    cout << "*" << " / |. |  \\                            *" << endl;
    cout << "*" << "/  |. |                               *" << endl;
    legs();
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|  o                            *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_  o                            *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*        o                             *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*       o                              *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*      o                               *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*     o                                *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*    o                                 *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   o                                  *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*  o                                   *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "* o                                    *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*o  _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*o  |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    body();
    cout << "*    ||                                *" << endl;
    cout << "*   _||_                               *" << endl;
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*o  |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << " --\\. /-                              *" << endl;
    cout << "*" << "/  |. | \\                             *" << endl;
    cout << "*" << "   |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n'; /*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*o (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "---\\. /-                              *" << endl;
    cout << "*" << "   |. | \\                             *" << endl;
    cout << "*" << "   |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "o  \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "\\--\\. /-                              *" << endl;
    cout << "*" << "   |. | \\                             *" << endl;
    cout << "*" << "   |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "o  _><_                               *" << endl;
    cout << "*" << "---\\. /-                              *" << endl;
    cout << "*" << "   |. | \\                             *" << endl;
    cout << "*" << "   |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "o -\\. /-                              *" << endl;
    cout << "*" << "-/ |. | \\                             *" << endl;
    cout << "*" << "   |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << "o/ |. | \\                             *" << endl;
    cout << "*" << "-  |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();

    cout << string(40, '*') << '\n';
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*                                      *" << endl;
    cout << "*   _[]_                               *" << endl;
    cout << "*   |~~|                               *" << endl;
    cout << "*   |oq|                               *" << endl;
    cout << "*  (|<>|)                              *" << endl;
    cout << "*" << "   \\--/                               *" << endl;
    cout << "*" << "   _><_                               *" << endl;
    cout << "*" << "  -\\. /-                              *" << endl;
    cout << "*" << " / |. | \\                             *" << endl;
    cout << "*" << "/  |. |  \\                            *" << endl;
    legs();
    cout << string(40, '*') << '\n';/*Sleep(100)*/; clear();
}
int main() {
    unsigned short a = 0;
    clear();
    menu(a);
    while (a != 5) {
        switch (a) {
        case 1: { dance(); clear(); break; }
        case 2: { run(); clear(); break; }
        case 3: { jump(); clear(); break; }
        case 4: { Throw_a_ball(); clear(); break; }
        }
        menu(a);
    }
    return 0;
}