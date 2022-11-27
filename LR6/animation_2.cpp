#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
string aprobel(int n){
	if (n == 28){
		return "                            ";
	
	}
	if (n == 0){
		return "";
	}
	
	if (n > 0){
	
	string sa = "";
	while (n--){
		sa += " ";
		
	}
	return sa;
	} else return "";
}

string bprobel(int n){
	string sb = "";
	while(n--){
		sb += "*                                      *\n";
	}
	return sb;
}
int main()
{
string B,A,C,D,G,F,O,M,T = "*",H = "*";
int a;
G =  "****************************************\n";
M  =  "*                                      *\n";
M +=  "*                                      *\n";
M +=  "*                                      *\n";
M +=  "*                                      *\n";
M +=  "*                                      *\n";
M +=  "*                                      *\n";
M +=  "*                                      *\n";
A =  "*    /\\                                *\n";
A += "*   |oo|                               *\n";
A += "*  (|..|)                              *\n";
A += "*   |--|                               *\n";
B  = "*   \\__/                               *\n";
B += "*    ||                                *\n";
B += "*  -| *|-                              *\n";
B += "* / |  | \\                             *\n";
B += "*/   \\/   \\                            *\n";
C =  "*    /\\                                *\n";
C += "*    ||                                *\n";
C += "*   _||_                               *\n";
D  = "*   \\__/                               *\n";
D += "*    ||                                *\n";
D += "*  -| *|-                              *\n";
D += "* / |  | \\                             *\n";
D += "*/   \\/   \\                            *\n";

while(1){
	cout << "Choose animation:" << endl << "Dance: \t\t\t1" << endl << "Run: \t\t\t2" << endl << "Sit down and jump: \t3" << endl << "Throw a ball: \t\t4" << endl << endl; 
	cout << "Enter 5 for exit." << endl;
	cin >> a;
	
	
	if (a == 5){
		return 0;
	} else if (a == 1){
		G =  "****************************************\n";
		
		A =  "*    /\\                                *\n";
		A += "*   |oo|                               *\n";
		A += "*  (|..|)                              *\n";
		A += "*   |--|                               *\n";
		B  = "*   \\__/                               *\n";
		B += "*    ||                                *\n";
		B += "*  -| *|-                              *\n";
		B += "* / |  | \\                             *\n";
		B += "*/   \\/   \\                            *\n";
		C =  "*    /\\                                *\n";
		C += "*    ||                                *\n";
		C += "*   _||_                               *\n";
		D  = "*   \\__/                               *\n";
		D += "*    ||                                *\n";
		D += "*  -| *|-                              *\n";
		D += "* / |  | \\                             *\n";
		D += "*/   \\/   \\                            *\n";
		for (int i = 0; i < 30; i++){
			if (i == 1){
				cout << G + M + A + B + C + G;
				
				
			} else if (i == 2){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "* --| *|--                             *\n";
				B += "*/  |  |  \\                            *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 3){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "*  -| *|---                            *\n";
				B += "* / |  |                               *\n";
				B += "*/   \\/                                *\n";
				cout << G + M + A + B + C + G;
			}else if (i == 4){
				B  = "*   \\__/                               *\n";
				B += "*    ||   /                            *\n";
				B += "* --| *|--                             *\n";
				B += "*/  |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 5){
				B  = "*   \\__/  /                            *\n";
				B += "*    ||  /                             *\n";
				B += "*  -| *|-                              *\n";
				B += "* / |  |                               *\n";
				B += "*/   \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 6){
				B  = "*   \\__/  *                            *\n";
				B += "*    ||  /                             *\n";
				B += "* --| *|-                              *\n";
				B += "*/  |  |                               *\n";
				B += "*    \\/                                *\n";
				cout <<G + M + A + B + C + G;
			} else if (i == 7){
				B  = "*   \\__/  /                            *\n";
				B += "*    ||  /                             *\n";
				B += "*---| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G+ M  + A + B + C + G;
			} else if (i == 8){
				B  = "*   \\__/  *                            *\n";
				B += "*\\   ||  /                             *\n";
				B += "* --| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 9){
				B  = "*\\  \\__/  /                            *\n";
				B += "* \\  ||  /                             *\n";
				B += "*  -| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			}else if (i == 10){
				B  = "**  \\__/  *                            *\n";
				B += "* \\  ||  /                             *\n";
				B += "*  -| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 11){
				B  = "*   \\__/                               *\n";
				B += "**   ||   *                            *\n";
				B += "* --| *|--                             *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 12){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "**--| *|--*                            *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 13){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "* --| *|--                             *\n";
				B += "**  |  |  *                            *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 14){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "*  -| *|-                              *\n";
				B += "* / |  | \\                             *\n";
				B += "**   \\/   *                            *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 15){
				cout << G + M + A + D + C + G;
			} else if (i == 16){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "* --| *|--                             *\n";
				B += "*/  |  |  \\                            *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 17){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "*  -| *|---                            *\n";
				B += "* / |  |                               *\n";
				B += "*/   \\/                                *\n";
				cout << G + M + A + B + C + G;
			}else if (i == 18){
				B  = "*   \\__/                               *\n";
				B += "*    ||   /                            *\n";
				B += "* --| *|--                             *\n";
				B += "*/  |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 19){
				B  = "*   \\__/  /                            *\n";
				B += "*    ||  /                             *\n";
				B += "*  -| *|-                              *\n";
				B += "* / |  |                               *\n";
				B += "*/   \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 20){
				B  = "*   \\__/  *                            *\n";
				B += "*    ||  /                             *\n";
				B += "* --| *|-                              *\n";
				B += "*/  |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 21){
				B  = "*   \\__/  /                            *\n";
				B += "*    ||  /                             *\n";
				B += "*---| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 22){
				B  = "*   \\__/  *                            *\n";
				B += "*\\   ||  /                             *\n";
				B += "* --| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 23){
				B  = "*\\  \\__/  /                            *\n";
				B += "* \\  ||  /                             *\n";
				B += "*  -| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			}else if (i == 24){
				B  = "**  \\__/  *                            *\n";
				B += "* \\  ||  /                             *\n";
				B += "*  -| *|-                              *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 25){
				B  = "*   \\__/                               *\n";
				B += "**   ||   *                            *\n";
				B += "* --| *|--                             *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 26){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "**--| *|--*                            *\n";
				B += "*   |  |                               *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 27){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "* --| *|--                             *\n";
				B += "**  |  |  *                            *\n";
				B += "*    \\/                                *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 28){
				B  = "*   \\__/                               *\n";
				B += "*    ||                                *\n";
				B += "*  -| *|-                              *\n";
				B += "* / |  | \\                             *\n";
				B += "**   \\/   *                            *\n";
				cout << G + M + A + B + C + G;
			} else if (i == 29) {
				cout << G + M + A + D + C + G;
			}
	
		}
	} else if (a == 2) {
		A  =  "*    /\\    "+ aprobel(28) +  "*\n";
		A +=  "*   |oo|   " + aprobel(28)+  "*\n";
		A +=  "*  (|..|)  " + aprobel(28)+ "*\n";
		A +=  "*   |--|   " + aprobel(28)+  "*\n";
		A += "*   \\__/   " + aprobel(28)+  "*\n";
		A +=  "*    ||    " + aprobel(28)+  "*\n";
		A +=  "*  -| *|-  " + aprobel(28)+  "*\n";
		A +=  "* / |  | \\ " + aprobel(28)+ "*\n";
		A += "*/   \\/   \\" + aprobel(28) + "*\n";
		A += "*    /\\    "+ aprobel(28) +  "*\n";
		A +=  "*    ||    " + aprobel(28)+  "*\n";
		A +=  "*   _||_   "+ aprobel(28) +  "*\n";
		cout << G + bprobel(6) + A + G;
	
			 
		for (int i = 1; i <= 28; i++){
		
			A  = "*" + aprobel(i - 1) + "    /\\    " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "   |oo|   " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "  (|..|)  " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "   |--|   " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "   \\__/   " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "    ||    " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "  -| *|-  " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + " / |  | \\ " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "/   \\/   \\" + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "    /\\    " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "    |\\    " + aprobel(29 - i) + "*\n";
			A += "*" + aprobel(i - 1) + "   _| \\_  " + aprobel(29 - i) + "*\n";
			cout << G + bprobel(6) + A + G;
			
			
			A  = "*" + aprobel(i) + "    /\\    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   |oo|   " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "  (|..|)  " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   |--|   " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   \\__/   " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "    ||    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "  -| *|-  " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + " / |  | \\ " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "/   \\/   \\" + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "    /\\    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "    /|    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "  _/ |_   " + aprobel(28 - i) + "*\n";
			cout << G + bprobel(6) + A + G;
			
			A  = "*" + aprobel(i) + "    /\\    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   |oo|   " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "  (|..|)  " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   |--|   " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   \\__/   " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "    ||    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "  -| *|-  " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + " / |  | \\ " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "/   \\/   \\" + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "    /\\    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "    ||    " + aprobel(28 - i) + "*\n";
			A += "*" + aprobel(i) + "   _||_   " + aprobel(28 - i) + "*\n";
			cout << G + bprobel(6) + A + G;
			
	    }
	   
	    for (int i = 1; i <= 28; i++){
		
			A  = "*" + aprobel(29 - i) + "    /\\    " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "   |oo|   " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "  (|..|)  " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "   |--|   " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "   \\__/   " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "    ||    " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "  -| *|-  " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + " / |  | \\ " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "/   \\/   \\" + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "    /\\    " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "    |\\    " + aprobel(i - 1) + "*\n";
			A += "*" + aprobel(29 - i) + "   _| \\_  " + aprobel(i - 1) + "*\n";
			cout << G + bprobel(6) + A + G;
			if (i != 28){
			
				A  = "*" + aprobel(28 - i) + "    /\\    " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "   |oo|   " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "  (|..|)  " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "   |--|   " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "   \\__/   " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "    ||    " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "  -| *|-  " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + " / |  | \\ " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "/   \\/   \\" + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "    /\\    " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "    /|    " + aprobel(i) + "*\n";
				A += "*" + aprobel(28 - i) + "  _/ |_   " + aprobel(i) + "*\n";
				cout << G + bprobel(6) + A + G;
			}
			A  = "*" + aprobel(28 - i) + "    /\\    " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "   |oo|   " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "  (|..|)  " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "   |--|   " + aprobel(i) + "*\n";
			A += "*" + aprobel(28 - i) + "   \\__/   " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "    ||    " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "  -| *|-  " + aprobel(i) + "*\n";
			A += "*" + aprobel(28 - i) + " / |  | \\ " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "/   \\/   \\" + aprobel(i) + "*\n";
			A += "*" + aprobel(28 - i) + "    /\\    " + aprobel(i) + "*\n";
			A += "*" + aprobel(28 - i) + "    ||    " + aprobel( i) + "*\n";
			A += "*" + aprobel(28 - i) + "   _||_   " + aprobel(i) + "*\n";
			cout << G + bprobel(6) + A + G;
			
	    }
	} else if (a == 3){
		A =  "****************************************\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		B =  "*    /\\                                *\n";
		B += "*   |oo|                               *\n";
		B += "*  (|..|)                              *\n";
		B += "*   |--|                               *\n";
		B += "*   \\__/                               *\n";
		B += "*    ||                                *\n";
		B += "*  -| *|-                              *\n";
		B += "* / |  | \\                             *\n";
		B += "*/   \\/   \\                            *\n";
		C =  "*    /\\                                *\n";
		C += "*    ||                                *\n";
		C += "*   _||_                               *\n";
		
		H  = "****************************************\n";
		T =  "****************************************\n";
		T += "*                                      *\n";
		T += "*                                      *\n";
		T += "*                                      *\n";
		T += "*                                      *\n";
		T += "*                                      *\n";
		T += "*                                      *\n";
		T += "*                                      *\n";
		T += "*    /\\                                *\n";
		T += "*   |oo|                               *\n";
		T += "*  (|..|)                              *\n";
		T += "*   |--|                               *\n";
		T += "*   \\__/                               *\n";
		T += "*    ||                                *\n";
		T += "*  -| *|-                              *\n";
		T += "* / |  | \\                             *\n";
		T += "*/   \\/   \\                            *\n";
		T += "*    /\\                                *\n";
		T += "*   _/\\_                               *\n";
		O =  "*    /\\                                *\n";
		O += "*    ||                                *\n";
		O += "*    ||                                *\n";
		

		for (int i = 0; i <= 12; i++){
			if (i == 1 || i == 11){
				cout << T + H;
			} else if (i == 0) {
				cout << A + B + C + H;
			} else if (i == 2){ cout << A + B + O+H;
			} else if (i == 3){ cout << H + bprobel(5) +  B + O + bprobel(1) + H; 
			} else if (i == 4){ cout << H + bprobel(4) + B + O + bprobel(2) + H; 
			} else if (i == 5){ cout << H + bprobel(3) + B + O + bprobel(3) + H; 
			} else if (i == 6){cout << H + bprobel(2) + B + O + bprobel(4) + H;
			} else if (i == 7){cout << H + bprobel(3) + B + O + bprobel(3) + H;
			} else if (i == 8){cout << H + bprobel(4) + B + O + bprobel(2) + H;
			} else if (i == 9){cout << H + bprobel(5) + B + O + bprobel(1) + H;
			} else if (i == 10){cout << A + B + O + H;
			} else if (i == 12){cout << A + B + C + H;
			}
			
		}			
	} else if (a == 4){
		A =  "****************************************\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		A += "*                                      *\n";
		B =  "*    /\\                                *\n";
		B += "*   |oo|                               *\n";
		B += "*  (|..|)                              *\n";
		B += "*   |--|                               *\n";
		B += "*   \\__/                               *\n";
		B += "*    ||                                *\n";
		B += "*  -| *|-                              *\n";
		B += "* / |  | \\                             *\n";
		B += "*/   \\/   \\                            *\n";
		C =  "*    /\\                                *\n";
		C += "*    ||                                *\n";
		C += "*   _||_                               *\n";
		C += "****************************************\n";
		for (int i = 0; i <=26; i++){
			if (i == 0){
				cout << A + B + C;
			} else if (i == 1){ B[297] = 'o'; B[338] = '-';
			cout << A + B + C;
			B[297] = ' '; B[338] = '\\';
			} else if (i == 2){ B[297] = '-'; B[256] = 'o'; B[338] = ' ';
			cout << A + B + C; B[297] = ' '; B[256] = ' '; 
			} else if (i == 3){  B[256] = '-'; B[255] = '-'; B[338] = ' ';B[296] = ' ';B[337] = ' ';B[215] = 'o';
			cout << A + B + C;
			} else if (i == 4){ B[256] = '/'; B[255] = '-'; B[338] = ' ';B[296] = ' ';B[337] = ' ';B[215] = ' ';B[174] = 'o';
			cout << A + B + C;
			} else if (i == 5){ B[256] = '-'; B[255] = '-'; B[338] = ' ';B[296] = ' ';B[337] = ' ';B[215] = ' ';B[133] = 'o'; B[174] = ' ';
			cout << A + B + C;
			}else if (i == 6){ B[256] = ' '; B[255] = '-'; B[338] = ' ';B[297] = '\\';B[337] = ' ';B[215] = ' ';B[92] = 'o';B[133] = ' ';
			cout << A + B + C;
			} else if (i == 7){ B[51] = 'o'; B[92] = ' ';B[297] = ' ';B[338] = '\\';B[296] = '\\';B[255] = ' ';
			cout << A + B + C;
			} else if (i == 8){ B[51] = ' '; B[10] = 'o';
			cout << A + B + C;
			} else if (i == 9){ B[10] = ' '; A [255] = 'o';
			cout << A + B + C; 
			} else if (i == 10){ A[255] = ' '; A [213] = 'o';
			cout << A + B + C;
			} else if (i == 11){A[213] = ' '; A[171]= 'o';
			cout << A + B + C;
			}else if (i == 12){A[171] = ' '; A[129]= 'o';
			cout << A + B + C;
			}else if (i == 13){A[129] = ' '; A[128]= 'o';
			cout << A + B + C;
			}else if (i == 14){A[128] = ' '; A[168]= 'o';
			cout << A + B + C;
			}else if (i == 15){A[168] = ' '; A[208]= 'o';
			cout << A + B + C;
			}else if (i == 16){A[208] = ' '; A[248]= 'o';
			cout << A + B + C;
			}else if (i == 17){A[248] = ' '; B[1]= 'o';
			cout << A + B + C;
			}else if (i == 18){B[1] = ' '; B[42]= 'o';
			cout << A + B + C;
			}else if (i == 19){B[42] = ' '; B[83]= 'o'; B[248] = '-'; B[289] = ' '; B[288] = '/'; B[329] = ' ';
			cout << A + B + C;
			}else if (i == 20){B[83] = ' '; B[124]= 'o'; B[248] = '-'; B[288] = ' '; B[247] = '-';
			cout << A + B + C;
			}else if (i == 21){B[124] = ' '; B[165]= 'o'; B[248] = '-'; B[288] = ' '; B[247] = '\\';
			cout << A + B + C;
			} else if (i == 22){B[165] = ' '; B[206]= 'o'; B[248] = '-'; B[288] = ' '; B[247] = '-';
			cout << A + B + C;
			}else if (i == 23){B[206] = ' ';  B[248] = ' '; B[288] = ' '; B[247] = 'o'; B[288] = '-'; B[289] = '/';
			cout << A + B + C;
			}else if (i == 24){B[247] = ' ';  B[248] = ' '; B[288] = ' '; B[288] = 'o'; B[329] = '-'; B[289] = '/';
			cout << A + B + C;
			}else if (i == 25){ B[288] = ' '; B[329] = '/'; B[289] = '/';
			cout << A + B + C;
			}
				
		}
	}
}
}


