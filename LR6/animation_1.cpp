#include<iostream>
#include<vector>
#include<string>
#include<unistd.h>
using namespace std;
void print(vector<string>a);
void dance();
void dance()
{
	vector<string> a = { "   ()()   ",//0
					  "   ()()   ",//1
					  "   ()()   ",//2
					  "   |..|    ",//3
					  "  \\|  |/  ",//4
					  "  /|UU|\\  ",//5
					  "  --\\/--  ",//6
					  " /  ||  \\ ",//7
					  "/   ||   \\",//8
					  "    /\\    ",//9
					  "    ||    ",//10
					  "   _||_   " };//11
	int i = 0;
	print(a);
	
	while (i != 2)
	{
		
		a[6] = " ---\\/--- ";
		a[7] = "/   ||   \\";
		a[8] = "    ||    ";
		print(a);
		
		a[6] = "  --\\/----";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);
		
		a[5] = "  /|UU|\\ /";
		a[6] = " ---\\/--- ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);
		
		a[4] = "  \\|  |/ /";
		a[5] = "  /|UU|\\/ ";
		a[6] = "  --\\/--  ";
		a[7] = " /  ||    ";
		a[8] = "/   ||    ";
		print(a);
		
		a[4] = "  \\|  |/ *";
		a[6] = " ---\\/--  ";
		a[7] = "/   ||    ";
		a[8] = "    ||    ";
		print(a);
		
		a[4] = "  \\|  |/ /";
		a[6] = "----\\/--  ";
		a[7] = "    ||    ";
		a[8] = "    ||    ";
		print(a);
		
		a[4] = "  \\|  |/ *";
		a[5] = "\\ /|UU|\\/ ";
		a[6] = " ---\\/--  ";
		print(a);
		
		a[4] = "\\ \\|  |/ /";
		a[5] = " \\/|UU|\\/ ";
		a[6] = "  --\\/--  ";
		print(a);
		
		a[4] = "* \\|  |/ *";
		print(a);
		
		a[4] = "  \\|  |/  ";
		a[5] = "* /|UU|\\ *";
		a[6] = " ---\\/--- ";
		print(a);
		
		a[5] = "  /|UU|\\  ";
		a[6] = "*---\\/---*";
		print(a);
		
		a[6] = " ---\\/--- ";
		a[7] = "*   ||   *";
		print(a);
		
		a[6] = "  --\\/--  ";
		a[7] = " /  ||  \\ ";
		a[8] = "*   ||   *";
		print(a);
		
		a[8] = "/   ||   \\";
		print(a);
		i++;
	}
}

void print(vector<string>a)
{
	for (auto c : a)
		cout << c << endl;
}
int main()
{
	dance();
	return 0;
}