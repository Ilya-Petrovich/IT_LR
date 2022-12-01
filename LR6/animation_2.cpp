#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
using namespace std;
char dance(vector <string> a);
char run(vector <string> a);
char sit(vector <string> a);
char ball(vector <string> a);
void print(vector<string>a)
{
	for (auto c : a)
		cout << c << endl;
}

int main()
{
	int choise = 6;
	vector <string> a ={"****************************************",
						"*                                      *",
						"*                                      *",
						"*                                      *",
						"*                                      *",
						"*                                      *",
						"*                                      *",
						"*   _[]_                               *",
						"*   |~~|                               *",
						"*   |oq|                               *",
						"*  (|<>|)                              *",
						"*   \\--/                               *",
						"*   _><_                               *",
						"*  -\\. /-                              *",
						"* / |. | \\                             *",
						"*/  |. |  \\                            *",
						"*   |__|                               *",
						"*    ||                                *",
						"*   _||_                               *",
						"****************************************"
	};
	while (choise != 5)
	{
		std::cout << "Choose animation:" << std::endl;
		std::cout << "Dance: \t\t\t1" << std::endl;
		std::cout << "Run: \t\t\t2" << std::endl;
		std::cout << "Sit down and jump: \t3" << std::endl;
		std::cout << "Throw a ball: \t\t4" << std::endl << std::endl;
		std::cout << "Enter 5 for exit." << std::endl;
		std::cin >> choise;
		if (choise == 1)
		{
			system("clear");
			dance(a);
		}
		else if (choise == 2)
		{
			system("clear");
			run(a);
		}
		else if (choise == 3)
		{
		    system("clear");
		    sit(a);
		}
		else if (choise == 4)
		{
		    system("clear");
		    ball(a);
		}
	}
}
char sit(vector <string> a)
{
    print(a);
	sleep(1);
	system("clear");
    a[7] = "*                                      *";
	a[8] = "*   _[]_                               *";
	a[9] = "*   |~~|                               *";
	a[10] = "*   |oq|                               *";
	a[11] = "*  (|<>|)                              *";
	a[12] = "*   \\--/                               *";
	a[13] = "*   _><_                               *";
	a[14] = "*  -\\. /-                              *";
	a[15] = "* / |. | \\                             *";
	a[16] = "*/  |. |  \\                            *";
	a[17] = "*   |__|                               *";
	a[18] = "*   _\\/_                               *";
	print(a);
	sleep(1);
	system("clear");
	a[7] = "*   _[]_                               *";
	a[8] = "*   |~~|                               *";
	a[9] = "*   |oq|                               *";
	a[10] = "*  (|<>|)                              *";
	a[11] = "*   \\--/                               *";
	a[12] = "*   _><_                               *";
	a[13] = "*  -\\. /-                              *";
    a[14] = "* / |. | \\                             *";
	a[15] = "*/  |. |  \\                            *";
    a[16] = "*   |__|                               *";
    a[17] = "*    ||                                *";
    a[18] = "*    ||                                *";
    print(a);
    sleep(1);
    system("clear");
	for (int i = 17; i > 13; i--)
	{
	    a[i-11] = "*   _[]_                               *";
	    a[i-10] = "*   |~~|                               *";
	    a[i-9] = "*   |oq|                               *";
	    a[i-8] = "*  (|<>|)                              *";
	    a[i-7] = "*   \\--/                               *";
	    a[i-6] = "*   _><_                               *";
	    a[i-5] = "*  -\\. /-                              *";
	    a[i-4] = "* / |. | \\                             *";
	    a[i-3] = "*/  |. |  \\                            *";
	    a[i-2] = "*   |__|                               *";
	    a[i-1] = "*    ||                                *";
	    a[i] = "*    ||                                *";
	    a[i+1] = "*                                      *";
	    print(a);
	    sleep(1);
	    system("clear");
	}
	for (int i = 14; i < 19; i++)
	{
	    a[i-11] = "*   _[]_                               *";
	    a[i-10] = "*   |~~|                               *";
	    a[i-9] = "*   |oq|                               *";
	    a[i-8] = "*  (|<>|)                              *";
	    a[i-7] = "*   \\--/                               *";
	    a[i-6] = "*   _><_                               *";
	    a[i-5] = "*  -\\. /-                              *";
	    a[i-4] = "* / |. | \\                             *";
	    a[i-3] = "*/  |. |  \\                            *";
	    a[i-2] = "*   |__|                               *";
	    a[i-1] = "*    ||                                *";
	    a[i] = "*    ||                                *";
	    a[i-12] = "*                                      *";
	    print(a);
	    sleep(1);
	    system("clear");
	}
	a[7] = "*                                      *";
	a[8] = "*   _[]_                               *";
	a[9] = "*   |~~|                               *";
	a[10] = "*   |oq|                               *";
	a[11] = "*  (|<>|)                              *";
	a[12] = "*   \\--/                               *";
	a[13] = "*   _><_                               *";
	a[14] = "*  -\\. /-                              *";
	a[15] = "* / |. | \\                             *";
	a[16] = "*/  |. |  \\                            *";
	a[17] = "*   |__|                               *";
	a[18] = "*   _\\/_                               *";
	print(a);
	sleep(1);
	system("clear");
	a[7] = "*   _[]_                               *";
	a[8] = "*   |~~|                               *";
	a[9] = "*   |oq|                               *";
	a[10] = "*  (|<>|)                              *";
	a[11] = "*   \\--/                               *";
	a[12] = "*   _><_                               *";
	a[13] = "*  -\\. /-                              *";
    a[14] = "* / |. | \\                             *";
	a[15] = "*/  |. |  \\                            *";
    a[16] = "*   |__|                               *";
    a[17] = "*    ||                                *";
    a[18] = "*   _||_                               *";
    print(a);
    sleep(1);
    system("clear");
    return 0;
}
char ball(vector <string> a)
{
    print(a);
	sleep(1);
	system("clear");
    a[14] = "* / |. | \\o                            *";
    a[15] = "*/  |. |  -                            *";
    print(a);
	sleep(1);
	system("clear");
	a[13] = "*  -\\. /- o                            *";
	a[14] = "* / |. | \\-                            *";
    a[15] = "*/  |. |                               *";
    print(a);
	sleep(1);
	system("clear");
	a[12] = "*   _><_  o                            *";
	a[13] = "*  -\\. /---                            *";
	a[14] = "* / |. |                               *";
    print(a);
	sleep(1);
	system("clear");
	a[11] = "*   \\--/  o                            *";
	a[12] = "*   _><_                               *";
	a[13] = "*  -\\. /--/                            *";
    print(a);
	sleep(1);
	system("clear");
	a[10] = "*  (|<>|) o                            *";
	a[11] = "*   \\--/                               *";
	a[13] = "*  -\\. /---                            *";
    print(a);
	sleep(1);
	system("clear");
	a[9] = "*   |oq|  o                            *";
	a[10] = "*  (|<>|)                              *";
	a[13] = "*  -\\. /--                             *";
	a[14] = "* / |. |  \\                            *";
    print(a);
	sleep(1);
	system("clear");
	a[8] = "*   |~~|  o                            *";
	a[9] = "*   |oq|                               *";
	a[13] = "*  -\\. /-                              *";
	a[14] = "* / |. | \\                             *";
	a[15] = "*/  |. |  \\                            *";
    print(a);
	sleep(1);
	system("clear");
	a[7] = "*   _[]_  o                            *";
	a[8] = "*   |~~|                               *";
    print(a);
	sleep(1);
	system("clear");
	a[6] = "*        o                             *";
	a[7] = "*   _[]_                               *";
    print(a);
	sleep(1);
	system("clear");
	a[5] = "*       o                              *";
	a[6] = "*                                      *";
    print(a);
	sleep(1);
	system("clear");
	a[4] = "*      o                               *";
	a[5] = "*                                      *";
    print(a);
	sleep(1);
	system("clear");
	a[3] = "*     o                                *";
	a[4] = "*                                      *";
    print(a);
	sleep(1);
	system("clear");
	a[3] = "*    o                                 *";
    print(a);
	sleep(1);
	system("clear");
	a[3] = "*                                      *";
	a[4] = "*   o                                  *";
    print(a);
	sleep(1);
	system("clear");
	a[4] = "*                                      *";
	a[5] = "*  o                                   *";
    print(a);
	sleep(1);
	system("clear");
	a[5] = "*                                      *";
	a[6] = "* o                                    *";
    print(a);
	sleep(1);
	system("clear");
	a[6] = "*                                      *";
	a[7] = "*o  _[]_                               *";
    print(a);
	sleep(1);
	system("clear");
	a[7] = "*   _[]_                               *";
	a[8] = "*o  |~~|                               *";
    print(a);
	sleep(1);
	system("clear");
	a[8] = "*   |~~|                               *";
	a[9] = "*o  |oq|                               *";
	a[13] = "* --\\. /-                              *";
	a[14] = "*/  |. | \\                             *";
	a[15] = "*   |. |  \\                            *";
    print(a);
	sleep(1);
	system("clear");
	a[9] = "*   |oq|                               *";
	a[10] = "*o (|<>|)                              *";
	a[13] = "*---\\. /-                              *";
	a[14] = "*   |. | \\                             *";
	a[15] = "*   |. |  \\                            *";
    print(a);
	sleep(1);
	system("clear");
	a[10] = "*  (|<>|)                              *";
	a[11] = "*o  \\--/                               *";
	a[13] = "*\\--\\. /-                              *";
    print(a);
	sleep(1);
	system("clear");
	a[11] = "*   \\--/                               *";
	a[12] = "*o  _><_                               *";
	a[13] = "*---\\. /-                              *";
    print(a);
	sleep(1);
	system("clear");
	a[12] = "*   _><_                               *";
	a[13] = "*o -\\. /-                              *";
	a[14] = "*-/ |. | \\                             *";
    print(a);
	sleep(1);
	system("clear");
	a[13] = "*  -\\. /-                              *";
	a[14] = "*o/ |. | \\                             *";
	a[15] = "*-  |. |  \\                            *";
    print(a);
	sleep(1);
	system("clear");
	a[14] = "* / |. | \\                             *";
	a[15] = "*/  |. |  \\                            *";
    print(a);
	sleep(1);
	system("clear");
	return 0;
}
char run(vector <string> a)
{
    int i = 0;
	print(a);
	sleep(1);
	system("clear");
	while (i < 28)
	{
	    a[7] = "*" + string(i, ' ') + "   _[]_   " + string(28 - i, ' ') + "*";
	    a[8] = "*" + string(i, ' ') + "   |~~|   " + string(28 - i, ' ') + "*";
	    a[9] = "*" + string(i, ' ') + "   |oq|   " + string(28 - i, ' ') + "*";
	    a[10] = "*" + string(i, ' ') + "  (|<>|)  " + string(28 - i, ' ') + "*";
	    a[11] = "*" + string(i, ' ') + "   \\--/   " + string(28 - i, ' ') + "*";
	    a[12] = "*" + string(i, ' ') + "   _><_   " + string(28 - i, ' ') + "*";
	    a[13] = "*" + string(i, ' ') + "  -\\. /-  " + string(28 - i, ' ') + "*";
	    a[14] = "*" + string(i, ' ') + " / |. | \\ " + string(28 - i, ' ') + "*";
	    a[15] = "*" + string(i, ' ') + "/  |. |  \\" + string(28 - i, ' ') + "*";
	    a[16] = "*" + string(i, ' ') + "   |__|   " + string(28 - i, ' ') + "*";
	    a[17] = "*" + string(i, ' ') + "    | \\   " + string(28 - i, ' ') + "*";
	    a[18] = "*" + string(i, ' ') + "   _|  \\_ " + string(28 - i, ' ') + "*";
	    print(a);
	    sleep(1);
	    system("clear");
	    i = i + 1;
	    a[7] = "*" + string(i, ' ') + "   _[]_   " + string(28 - i, ' ') + "*";
	    a[8] = "*" + string(i, ' ') + "   |~~|   " + string(28 - i, ' ') + "*";
	    a[9] = "*" + string(i, ' ') + "   |oq|   " + string(28 - i, ' ') + "*";
	    a[10] = "*" + string(i, ' ') + "  (|<>|)  " + string(28 - i, ' ') + "*";
	    a[11] = "*" + string(i, ' ') + "   \\--/   " + string(28 - i, ' ') + "*";
	    a[12] = "*" + string(i, ' ') + "   _><_   " + string(28 - i, ' ') + "*";
	    a[13] = "*" + string(i, ' ') + "  -\\. /-  " + string(28 - i, ' ') + "*";
	    a[14] = "*" + string(i, ' ') + " / |. | \\ " + string(28 - i, ' ') + "*";
	    a[15] = "*" + string(i, ' ') + "/  |. |  \\" + string(28 - i, ' ') + "*";
	    a[16] = "*" + string(i, ' ') + "   |__|   " + string(28 - i, ' ') + "*";
	    a[17] = "*" + string(i, ' ') + "   / |    " + string(28 - i, ' ') + "*";
	    a[18] = "*" + string(i, ' ') + " _/  |_   " + string(28 - i, ' ') + "*";
	    print(a);
	    sleep(1);
	    system("clear");
	    a[7] = "*" + string(i, ' ') + "   _[]_   " + string(28 - i, ' ') + "*";
	    a[8] = "*" + string(i, ' ') + "   |~~|   " + string(28 - i, ' ') + "*";
	    a[9] = "*" + string(i, ' ') + "   |oq|   " + string(28 - i, ' ') + "*";
	    a[10] = "*" + string(i, ' ') + "  (|<>|)  " + string(28 - i, ' ') + "*";
	    a[11] = "*" + string(i, ' ') + "   \\--/   " + string(28 - i, ' ') + "*";
	    a[12] = "*" + string(i, ' ') + "   _><_   " + string(28 - i, ' ') + "*";
	    a[13] = "*" + string(i, ' ') + "  -\\. /-  " + string(28 - i, ' ') + "*";
	    a[14] = "*" + string(i, ' ') + " / |. | \\ " + string(28 - i, ' ') + "*";
	    a[15] = "*" + string(i, ' ') + "/  |. |  \\" + string(28 - i, ' ') + "*";
	    a[16] = "*" + string(i, ' ') + "   |__|   " + string(28 - i, ' ') + "*";
	    a[17] = "*" + string(i, ' ') + "    ||    " + string(28 - i, ' ') + "*";
	    a[18] = "*" + string(i, ' ') + "   _||_   " + string(28 - i, ' ') + "*";
	    print(a);
	    sleep(1);
	    system("clear");
	}
	while (i > 0)
	{
	    a[7] = "*" + string(i, ' ') + "   _[]_   " + string(28 - i, ' ') + "*";
	    a[8] = "*" + string(i, ' ') + "   |~~|   " + string(28 - i, ' ') + "*";
	    a[9] = "*" + string(i, ' ') + "   |oq|   " + string(28 - i, ' ') + "*";
	    a[10] = "*" + string(i, ' ') + "  (|<>|)  " + string(28 - i, ' ') + "*";
	    a[11] = "*" + string(i, ' ') + "   \\--/   " + string(28 - i, ' ') + "*";
	    a[12] = "*" + string(i, ' ') + "   _><_   " + string(28 - i, ' ') + "*";
	    a[13] = "*" + string(i, ' ') + "  -\\. /-  " + string(28 - i, ' ') + "*";
	    a[14] = "*" + string(i, ' ') + " / |. | \\ " + string(28 - i, ' ') + "*";
	    a[15] = "*" + string(i, ' ') + "/  |. |  \\" + string(28 - i, ' ') + "*";
	    a[16] = "*" + string(i, ' ') + "   |__|   " + string(28 - i, ' ') + "*";
	    a[17] = "*" + string(i, ' ') + "    | \\   " + string(28 - i, ' ') + "*";
	    a[18] = "*" + string(i, ' ') + "   _|  \\_ " + string(28 - i, ' ') + "*";
	    print(a);
	    sleep(1);
	    system("clear");
	    i = i - 1;
	    a[7] = "*" + string(i, ' ') + "   _[]_   " + string(28 - i, ' ') + "*";
	    a[8] = "*" + string(i, ' ') + "   |~~|   " + string(28 - i, ' ') + "*";
	    a[9] = "*" + string(i, ' ') + "   |oq|   " + string(28 - i, ' ') + "*";
	    a[10] = "*" + string(i, ' ') + "  (|<>|)  " + string(28 - i, ' ') + "*";
	    a[11] = "*" + string(i, ' ') + "   \\--/   " + string(28 - i, ' ') + "*";
	    a[12] = "*" + string(i, ' ') + "   _><_   " + string(28 - i, ' ') + "*";
	    a[13] = "*" + string(i, ' ') + "  -\\. /-  " + string(28 - i, ' ') + "*";
	    a[14] = "*" + string(i, ' ') + " / |. | \\ " + string(28 - i, ' ') + "*";
	    a[15] = "*" + string(i, ' ') + "/  |. |  \\" + string(28 - i, ' ') + "*";
	    a[16] = "*" + string(i, ' ') + "   |__|   " + string(28 - i, ' ') + "*";
	    a[17] = "*" + string(i, ' ') + "   / |    " + string(28 - i, ' ') + "*";
	    a[18] = "*" + string(i, ' ') + " _/  |_   " + string(28 - i, ' ') + "*";
	    print(a);
	    sleep(1);
	    system("clear");
	    a[7] = "*" + string(i, ' ') + "   _[]_   " + string(28 - i, ' ') + "*";
	    a[8] = "*" + string(i, ' ') + "   |~~|   " + string(28 - i, ' ') + "*";
	    a[9] = "*" + string(i, ' ') + "   |oq|   " + string(28 - i, ' ') + "*";
	    a[10] = "*" + string(i, ' ') + "  (|<>|)  " + string(28 - i, ' ') + "*";
	    a[11] = "*" + string(i, ' ') + "   \\--/   " + string(28 - i, ' ') + "*";
	    a[12] = "*" + string(i, ' ') + "   _><_   " + string(28 - i, ' ') + "*";
	    a[13] = "*" + string(i, ' ') + "  -\\. /-  " + string(28 - i, ' ') + "*";
	    a[14] = "*" + string(i, ' ') + " / |. | \\ " + string(28 - i, ' ') + "*";
	    a[15] = "*" + string(i, ' ') + "/  |. |  \\" + string(28 - i, ' ') + "*";
	    a[16] = "*" + string(i, ' ') + "   |__|   " + string(28 - i, ' ') + "*";
	    a[17] = "*" + string(i, ' ') + "    ||    " + string(28 - i, ' ') + "*";
	    a[18] = "*" + string(i, ' ') + "   _||_   " + string(28 - i, ' ') + "*";
	    print(a);
	    sleep(1);
	    system("clear");
	}
	return 0;
}
char dance(vector <string> a)
{
	print(a);
	sleep(1);
	int i = 0;
	while (i < 2)
	{
		system("clear");
		a[13] = "* --\\. /--                             *";
		a[14] = "*/  |. |  \\                            *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[13] = "*  -\\. /---                            *";
		a[14] = "* / |. |                               *";
		a[15] = "*/  |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[12] = "*   _><_  /                            *";
		a[13] = "* --\\. /--                             *";
		a[14] = "*/  |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "*   \\--/  /                            *";
		a[12] = "*   _><_ /                             *";
		a[13] = "*  -\\. /-                              *";
		a[14] = "* / |. |                               *";
		a[15] = "*/  |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "*   \\--/  *                            *";
		a[13] = "* --\\. /-                              *";
		a[14] = "*/  |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "*   \\--/  /                            *";
		a[13] = "*---\\. /-                              *";
		a[14] = "*   |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "*   \\--/  *                            *";
		a[12] = "*\\  _><_ /                             *";
		a[13] = "* --\\. /-                              *";
		a[14] = "*   |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "*\\  \\--/  /                            *";
		a[12] = "* \\ _><_ /                             *";
		a[13] = "*  -\\. /-                              *";
		a[14] = "*   |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "**  \\--/  *                            *";
		a[12] = "* \\ _><_ /                             *";
		a[13] = "*  -\\. /-                              *";
		a[14] = "*   |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[11] = "*   \\--/                               *";
		a[12] = "**  _><_  *                            *";
		a[13] = "* --\\. /--                             *";
		a[14] = "*   |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[12] = "*   _><_                               *";
		a[13] = "**--\\. /--*                            *";
		a[14] = "*   |. |                               *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[13] = "* --\\. /--                             *";
		a[14] = "**  |. |  *                            *";
		a[15] = "*   |. |                               *";
		print(a);
		sleep(1);
		system("clear");
		a[13] = "*  -\\. /-                              *";
		a[14] = "* / |. | \\                             *";
		a[15] = "**  |. |  *                            *";
		print(a);
		sleep(1);
		system("clear");
		a[14] = "* / |. | \\                             *";
		a[15] = "*/  |. |  \\                            *";
		print(a);
		sleep(1);
		i = i + 1;
	}
	system("clear");
	return 0;
}