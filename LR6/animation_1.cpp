#include <iostream>
#include <windows.h>

using namespace std;

/*void n(const int s, string p[]) {
    Sleep(500);
    system("cls");//Удалить
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
}*/
void main() {
    const int s = 12;
    string p[s] = { "   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/   ", "   _><_   ", "  -\\. /-  "," / |. | \\ ", "/  |. |  \\", "   |__|   ", "    ||    ", "   _||_   " };
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = " --\\. /-- ";
    p[7] = "/  |. |  \\";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = "  -\\. /--- ";
    p[7] = " / |. |  ";
    p[8] = "/  |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[5] = "   _><_  /";
    p[6] = " --\\. /-- ";
    p[7] = "/  |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   /";
    p[5] = "   _><_  /";
    p[6] = "  -\\. /- ";
    p[7] = " / |. |  ";
    p[8] = "/  |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   *";
    p[5] = "   _><_  /";
    p[6] = " --\\. /- ";
    p[7] = "/  |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   /";
    p[5] = "   _><_  /";
    p[6] = "---\\. /- ";
    p[7] = "   |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   *";
    p[5] = "\\  _><_  /";
    p[6] = " --\\. /- ";
    p[7] = "   |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "\\  \\--/   /";
    p[5] = " \\ _><_  /";
    p[6] = "  -\\. /- ";
    p[7] = "   |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "*  \\--/   *";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   ";
    p[5] = "*  _><_   *";
    p[6] = " --\\. /--";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   ";
    p[5] = "   _><_   ";
    p[6] = "*--\\. /--*";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = " --\\. /--";
    p[7] = "*  |. |  *";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = "  -\\. /-";
    p[7] = " / |. | \\";
    p[8] = "*  |. |  *";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[8] = "/  |. |  \\";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = " --\\. /-- ";
    p[7] = "/  |. |  \\";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = "  -\\. /--- ";
    p[7] = " / |. |  ";
    p[8] = "/  |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[5] = "   _><_  /";
    p[6] = " --\\. /-- ";
    p[7] = "/  |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   /";
    p[5] = "   _><_  /";
    p[6] = "  -\\. /- ";
    p[7] = " / |. |  ";
    p[8] = "/  |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   *";
    p[5] = "   _><_  /";
    p[6] = " --\\. /- ";
    p[7] = "/  |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   /";
    p[5] = "   _><_  /";
    p[6] = "---\\. /- ";
    p[7] = "   |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   *";
    p[5] = "\\  _><_  /";
    p[6] = " --\\. /- ";
    p[7] = "   |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "\\  \\--/   /";
    p[5] = " \\ _><_  /";
    p[6] = "  -\\. /- ";
    p[7] = "   |. |  ";
    p[8] = "   |. |  ";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "*  \\--/   *";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   ";
    p[5] = "*  _><_   *";
    p[6] = " --\\. /--";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[4] = "   \\--/   ";
    p[5] = "   _><_   ";
    p[6] = "*--\\. /--*";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = " --\\. /--";
    p[7] = "*  |. |  *";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[6] = "  -\\. /-";
    p[7] = " / |. | \\";
    p[8] = "*  |. |  *";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
    p[8] = "/  |. |  \\";
    for (int i = 0; i < s; i++) {
        cout << p[i] << endl;
    }
    //n(s, p);
}