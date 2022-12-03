#include <iostream>
#include <unistd.h>

using namespace std;

void position0(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_   ";
    st7 = "  -\\. /- ";
    st8 = " / |. | \\";
    st9 = "/  |. |  \\ ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position1(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_   ";
    st7 = " --\\. /-- ";
    st8 = "/  |. |  \\";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position2(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_   ";
    st7 = "  -\\. /--- ";
    st8 = " / |. |  ";
    st9 = "/  |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position3(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_  /";
    st7 = " --\\. /-- ";
    st8 = "/  |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position4(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  /";
    st6 = "   _><_ /";
    st7 = "  -\\. /-  ";
    st8 = " / |. |  ";
    st9 = "/  |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position5(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  *";
    st6 = "   _><_ /";
    st7 = " --\\. /-  ";
    st8 = "/  |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position6(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  /";
    st6 = "   _><_ /";
    st7 = "---\\. /-  ";
    st8 = "   |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position7(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  *";
    st6 = "\\  _><_ /";
    st7 = " --\\. /-  ";
    st8 = "   |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position8(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "\\  \\--/  /";
    st6 = " \\ _><_ /";
    st7 = "  -\\. /-  ";
    st8 = "   |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position9(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "*  \\--/  *";
    st6 = " \\ _><_ /";
    st7 = "  -\\. /-  ";
    st8 = "   |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position10(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "*  _><_  *";
    st7 = " --\\. /-- ";
    st8 = "   |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position11(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_   ";
    st7 = "*--\\. /--*";
    st8 = "   |. |  ";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position12(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_   ";
    st7 = " --\\. /-- ";
    st8 = "*  |. |  *";
    st9 = "   |. |    ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void position13(string &st1, string &st2, string &st3, string &st4, string &st5, string &st6, string &st7, string &st8, string &st9, string &st10, string &st11, string &st12)
{
    st1 = "   _[]_   ";
    st2 = "   |~~|   ";
    st3 = "   |oq|   ";
    st4 = "  (|<>|)  ";
    st5 = "   \\--/  ";
    st6 = "   _><_   ";
    st7 = "  -\\. /- ";
    st8 = " / |. | \\";
    st9 = "*  |. |  * ";
    st10 = "   |__|   ";
    st11 = "    ||    ";
    st12 = "   _||_   ";
}

void output(string st1, string st2, string st3, string st4, string st5, string st6, string st7, string st8, string st9, string st10, string st11, string st12)
{
    cout << st1 << endl << st2 << endl << st3 << endl << st4 << endl << st5 << endl << st6 << endl << st7 << endl << st8 << endl << st9 << endl << st10 << endl << st11 << endl << st12 << endl;
}

void dance(string st1, string st2, string st3, string st4, string st5, string st6, string st7, string st8, string st9, string st10, string st11, string st12)
{
    for (int i = 0; i <= 1; i++)
    {
        position0(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position1(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position2(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position3(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position4(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
       
        position5(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position6(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position7(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position8(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position9(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position10(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position11(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position12(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);

        position13(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
        output(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
    }
}

int main()
{
    string st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12;
    while (true)
        dance(st1, st2, st3, st4, st5, st6, st7, st8, st9, st10, st11, st12);
}