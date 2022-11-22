#include<bits/stdc++.h>
#include <unistd.h>
using namespace std;

const int w = 40, h = 20;
const int sleep_time = 10;

void dance(string *firstEl);
void run(string *firstEl);
void jump(string *firstEl);
void throww(string *firstEl);
void solve(string *firstEl);

int main()
{
	string p[h] = {
		"****************************************",  //  0
		"*                                      *",  //  1
		"*                                      *",  //  2
		"*                                      *",  //  3
		"*                                      *",  //  4
		"*                                      *",  //  5
		"*                                      *",  //  6
		"*   _[]_                               *",  //  7
		"*   |~~|                               *",  //  8
		"*   |oq|                               *",  //  9
		"*  (|<>|)                              *",  //  10
		"*   \\--/                               *", //  11
		"*   _><_                               *",  //  12
		"*  -\\. /-                              *", //  13
		"* / |. | \\                             *", //  14
		"*/  |. |  \\                            *", //  15
		"*   |__|                               *",  //  16
		"*    ||                                *",  //  17
		"*   _||_                               *",  //  18
		"****************************************"   //  19
	};
	
	string *p0 = p;
	solve(p0);
	
	return 0;
}

void dance(string *firstEl)
{
	string *p = new string[h];
	for (int i = 0; i < h; i++) p[i] = *(firstEl + i);
	system("cls");
	
	for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 1
	usleep(sleep_time * 1000);
	system("cls");
	
	for(int i = 0; i < 2; i++)
	{
		p[13] = "* --\\. /--                             *";
		p[14] = "*/  |. |  \\                            *";
		p[15] = "*   |. |                               *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 2
		usleep(sleep_time * 1000);
		system("cls");
		
		p[13] = "*  -\\. /---                            *";
		p[14] = "* / |. |                               *";
		p[15] = "*/  |. |                               *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 3
		usleep(sleep_time * 1000);
		system("cls");
		
		p[12] = "*   _><_  /                            *";
		p[13] = "* --\\. /--                             *";
		p[14] = "*/  |. |                               *";
		p[15] = "*   |. |                               *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 4
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "*   \\--/  /                            *";
		p[12] = "*   _><_ /                             *";
		p[13] = "*  -\\. /-                              *";
		p[14] = "* / |. |                               *";
		p[15] = "*/  |. |                               *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 5
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "*   \\--/  *                            *";
		p[12] = "*   _><_ /                             *";
		p[13] = "* --\\. /-                              *";
		p[14] = "*/  |. |                               *";
		p[15] = "*   |. |                               *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 7
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "*   \\--/  /                            *";
		p[12] = "*   _><_ /                             *";
		p[13] = "*---\\. /-                              *";
		p[14] = "*   |. |                               *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 8
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "*   \\--/  *                            *";
		p[12] = "*\\  _><_ /                             *";
		p[13] = "* --\\. /-                              *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 9
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "*\\  \\--/  /                            *";
		p[12] = "* \\ _><_ /                             *";
		p[13] = "*  -\\. /-                              *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 10
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "**  \\--/  *                            *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 11
		usleep(sleep_time * 1000);
		system("cls");
		
		p[11] = "*   \\--/                               *";
		p[12] = "**  _><_  *                            *";
		p[13] = "* --\\. /--                             *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 12
		usleep(sleep_time * 1000);
		system("cls");
		
		p[12] = "*   _><_                               *";
		p[13] = "**--\\. /--*                            *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 13
		usleep(sleep_time * 1000);
		system("cls");
		
		p[13] = "* --\\. /--                             *";
		p[14] = "**  |. |  *                            *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 14
		usleep(sleep_time * 1000);
		system("cls");
		
		p[13] = "*  -\\. /-                              *";
		p[14] = "* / |. | \\                             *";
		p[15] = "**  |. |  *                            *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 15
		usleep(sleep_time * 1000);
		system("cls");
		
		p[15] = "*/  |. |  \\                            *";
		for(int i = 0; i < h; i++) cout << p[i] << "\n"; // 16
		usleep(sleep_time * 1000);
		system("cls");
	}
	
	delete [] p;
	
	return;
}

void run(string *firstEl)
{
	string *p = new string[h];
	for (int i = 0; i < h; i++) p[i] = *(firstEl + i);
	
	system("cls");
	int cnt = 0, step = 0;
	
	while(cnt + 10 != 40-2)
    {
		string f, s;
		if (step % 3 == 0)
		{
			f = "    ||    ";
			s = "   _||_   ";
		}
		
		else if (step % 3 == 1)
		{
			f = "    | \\   ";
			s = "   _|  \\_ ";
		}
		else if (step % 3 == 2)
		{
			f = "   / |    ";
			s = " _/  |_   ";
			cnt++;
		}
		
		cout << p[0] << "\n" << p[1] << "\n" << p[2] << "\n" << p[3] << "\n" << p[4] << "\n" << p[5] << "\n" << p[6] << "\n";
		string s1, s2;
		s1 = ""; s2 = "";
		for(int i = 0; i < cnt; i++) s1 += " ";
		for(int j = 0; j < 28-cnt; j++) s2 += " ";
		cout << "*" << s1 << "   _[]_   " << s2 << "*\n";
		cout << "*" << s1 << "   |~~|   " << s2 << "*\n";
		cout << "*" << s1 << "   |oq|   " << s2 << "*\n";
		cout << "*" << s1 << "  (|<>|)  " << s2 << "*\n";
		cout << "*" << s1 << "   \\--/   " << s2 << "*\n";
		cout << "*" << s1 << "   _><_   " << s2 << "*\n";
		cout << "*" << s1 << "  -\\. /-  " << s2 << "*\n";
		cout << "*" << s1 << " / |. | \\ " << s2 << "*\n";
		cout << "*" << s1 << "/  |. |  \\" << s2 << "*\n";
		cout << "*" << s1 << "   |__|   " << s2 << "*\n";
		cout << "*" << s1 << f << s2 << "*\n";
		cout << "*" << s1 << s << s2 << "*\n";
		cout << p[19] << "\n";
		
		step++;
		
		usleep(sleep_time * 1000);
		system("cls");
	}
	
	while(cnt != 0)
	{
		string f, s;
		if (step % 3 == 0)
		{
			f = "    ||    ";
			s = "   _||_   ";
		}
		else if (step % 3 == 2)
		{
			f = "    | \\   ";
			s = "   _|  \\_ ";
		}
		else if (step % 3 == 1)
		{
			f = "   / |    ";
			s = " _/  |_   ";
			cnt--;
		}
		
		cout << p[0] << "\n" << p[1] << "\n" << p[2] << "\n" << p[3] << "\n" << p[4] << "\n" << p[5] << "\n" << p[6] << "\n";
		string s1, s2;
		s1 = ""; s2 = "";
		for(int i = 0; i < cnt; i++) s1 += " ";
		for(int j = 0; j < 28-cnt; j++) s2 += " ";
		cout << "*" << s1 << "   _[]_   " << s2 << "*\n";
		cout << "*" << s1 << "   |~~|   " << s2 << "*\n";
		cout << "*" << s1 << "   |oq|   " << s2 << "*\n";
		cout << "*" << s1 << "  (|<>|)  " << s2 << "*\n";
		cout << "*" << s1 << "   \\--/   " << s2 << "*\n";
		cout << "*" << s1 << "   _><_   " << s2 << "*\n";
		cout << "*" << s1 << "  -\\. /-  " << s2 << "*\n";
		cout << "*" << s1 << " / |. | \\ " << s2 << "*\n";
		cout << "*" << s1 << "/  |. |  \\" << s2 << "*\n";
		cout << "*" << s1 << "   |__|   " << s2 << "*\n";
		cout << "*" << s1 << f << s2 << "*\n";
		cout << "*" << s1 << s << s2 << "*\n";
		cout << p[19] << "\n";
		
		step--;
		
		usleep(sleep_time * 1000);
		system("cls");
	}
	
	delete [] p;
	
	return;
}

void jump(string *firstEl)
{
	string *p = new string[h];
	for (int i = 0; i < h; i++) p[i] = *(firstEl + i);
	
	system("cls");
	for(int i = 0; i < h; i++) cout << p[i] << "\n";   // 1
	usleep(sleep_time * 1000);
	system("cls");
	
	for(int i = 0; i < 7; i++) cout << p[i] << "\n";    // 2
	cout << p[6] << "\n";
	for(int i = 7; i < 17; i++) cout << p[i] << "\n";
	cout << "*   _\\/_                               *\n";
	cout << p[19] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[18] = "*    ||                                *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";    // 3
	usleep(sleep_time * 1000);
	system("cls");
	
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 6 - i; j++) cout << p[j] << "\n";
		for(int j = 7; j < 19; j++) cout << p[j] << "\n";
		for(int j = 0; j <= i; j++) cout << p[1] << "\n";
		cout << p[19] << "\n";
		usleep(sleep_time * 1000);
		system("cls");
	}
	
	for(int i = 3; i > -2; i--)
	{
		for(int j = 0; j < 6 - i; j++) cout << p[j] << "\n";
		for(int j = 7; j < 19; j++) cout << p[j] << "\n";
		for(int j = 0; j <= i; j++) cout << p[1] << "\n";
		cout << p[19] << "\n";
		usleep(sleep_time * 1000);
		system("cls");
	}
	
	for(int i = 0; i < 7; i++) cout << p[i] << "\n";    
	cout << p[6] << "\n";
	for(int i = 7; i < 17; i++) cout << p[i] << "\n";
	cout << "*   _\\/_                               *\n";
	cout << p[19] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[18] = "*   _||_                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";   // 1
	usleep(sleep_time * 1000);
	system("cls");
	
	delete [] p;
	
	return;
}

void throww(string *firstEl)
{
	string *p = new string[h];
	for (int i = 0; i < h; i++) p[i] = *(firstEl + i);
	
	system("cls");
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[14] = "* / |. | \\o                            *";
	p[15] = "*/  |. |  -                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[13] = "*  -\\. /- o                            *";
	p[14] = "* / |. | \\-                            *";
	p[15] = "*/  |. |                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[12] = "*   _><_  o                            *";
	p[13] = "*  -\\. /---                            *";
	p[14] = "* / |. |                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[11] = "*   \\--/  o                            *";
	p[12] = "*   _><_                               *";
	p[13] = "*  -\\. /--/                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[10] = "*  (|<>|) o                            *";
	p[11] = "*   \\--/                               *";
	p[13] = "*  -\\. /---                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[9] = "*   |oq|  o                            *";
	p[10] = "*  (|<>|)                              *";
	p[13] = "*  -\\. /--                             *";
	p[14] = "* / |. |  \\                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[8] = "*   |~~|  o                            *";
	p[9] = "*   |oq|                               *";
	p[13] = "*  -\\. /-                              *";
	p[14] = "* / |. | \\                             *";
	p[15] = "*/  |. |  \\                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[7] = "*   _[]_  o                            *";
	p[8] = "*   |~~|                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[6] = "*        o                             *";
	p[7] = "*   _[]_                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[5] = "*       o                              *";
	p[6] = "*                                      *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[4] = "*      o                               *";
	p[5] = "*                                      *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[3] = "*     o                                *"; // pik
	p[4] = "*                                      *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[3] = "*    o                                 *"; // pik
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[3] = "*                                      *";
	p[4] = "*   o                                  *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[4] = "*                                      *";
	p[5] = "*  o                                   *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[5] = "*                                      *";
	p[6] = "* o                                    *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[6] = "*                                      *";
	p[7] = "*o  _[]_                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[7] = "*   _[]_                               *";
	p[8] = "*o  |~~|                               *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[8] = "*   |~~|                               *";
	p[9] = "*o  |oq|                               *";
	p[13] = "* --\\. /-                              *";
	p[14] = "*/  |. | \\                             *";
	p[15] = "*   |. |  \\                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[9] = "*   |oq|                               *";
	p[10] = "*o (|<>|)                              *";
	p[13] = "*---\\. /-                              *";
	p[14] = "*   |. | \\                             *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[9] = "*   |oq|                               *";
	p[10] = "*  (|<>|)                              *";
	p[11] = "*o  \\--/                               *";
	p[13] = "*\\--\\. /-                              *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[11] = "*   \\--/                               *";
	p[12] = "*o  _><_                               *";
	p[13] = "*---\\. /-                              *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[12] = "*   _><_                               *";
	p[13] = "*o -\\. /-                              *";
	p[14] = "*-/ |. | \\                             *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[13] = "*  -\\. /-                              *";
	p[14] = "*o/ |. | \\                             *";
	p[15] = "*-  |. |  \\                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	p[14] = "* / |. | \\                             *";
	p[15] = "*/  |. |  \\                            *";
	for(int i = 0; i < h; i++) cout << p[i] << "\n";
	usleep(sleep_time * 1000);
	system("cls");
	
	delete [] p;
	
	return;
}

void solve(string *firstEl)
{
	string *p = new string[h];
	for (int i = 0; i < h; i++) p[i] = *(firstEl + i);
	int n = 0;
	string *p0 = p;
	while(n != 5)
	{
		cout << "Choose animation:\n" << "Dance: \t\t 1 \n" << "Run: \t\t 2 \n" << "Sit and jump: \t 3 \n" << "Throw a ball: \t 4 \n\n" << "Enter 5 for exit.\n";
		cin >> n;
		switch(n)
		{
			case 1:
				dance(p0);
				break;
			case 2:
				run(p0);
				break;
			case 3:
				jump(p0);
				break;
			case 4:
				throww(p0);
				break;
			case 5:
				break;	
			default:
				cout << "Invalid input.\n";
				break;
		}
	}
	
	delete [] p;
	return;
}
