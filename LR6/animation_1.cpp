#include <iostream>
#include <unistd.h>

void output(char chel[12][11], const int str, const int col); //вывод человечка

int main () 
{	
	const int str=12;
	const int col=11;
	int x=800;
	char chel[str][col]            //начальное состояние
	{
		{' ',' ',' ',' ','/','\\',' ',' ',' ',' ','\0'},
		{' ',' ',' ','|','o','o','|',' ',' ',' ','\0'},
		{' ',' ','(','|','.','.','|',')',' ',' ','\0'},
		{' ',' ',' ','|','-','-','|',' ',' ',' ','\0'},
		{' ',' ',' ','\\','_','_','/',' ',' ',' ','\0'},
		{' ',' ',' ',' ','|','|',' ',' ',' ',' ','\0'},
		{' ',' ','-','|',' ','*','|','-',' ',' ','\0'},
		{' ','/',' ','|',' ',' ','|',' ','\\',' ','\0'},
		{'/',' ',' ',' ','\\','/',' ',' ',' ','\\','\0'},
		{' ',' ',' ',' ','/','\\',' ',' ',' ',' ','\0'},
		{' ',' ',' ',' ','|','|',' ',' ',' ',' ','\0'},
		{' ',' ',' ','_','|','|','_',' ',' ',' ','\0'},
	};
	//system("cls");
	for (int i=0; i<2; i++) {
		//Sleep(x);
		//system("cls");
		chel[8][9]='\\';  //правая рука  
		chel[8][0]='/';  //левая рука
		output(chel, str, col); 								//1 состояние
		//Sleep(x);
		//system("cls");
		chel[8][9]=' '; chel[7][8]=' '; chel[6][8]='-'; chel[7][9]='\\'; //правая рука
		chel[7][1]=' '; chel[8][0]=' '; chel[6][1]='-'; chel[7][0]='/'; //левая рука
		output(chel, str, col);									 //2 состояние
		//Sleep(x);
		//system("cls");
		chel[7][9]=' '; chel[6][9]='-'; //правая рука  
		chel[6][1]=' '; chel[7][0]=' '; chel[8][0]='/'; chel[7][1]='/'; //левая рука
		output(chel, str, col); 								 //3 состояние
		//Sleep(x);
		//system("cls");
		chel[6][9]=' '; chel[5][9]='/'; //правая рука  
		chel[7][1]=' '; chel[8][0]=' '; chel[6][1]='-'; chel[7][0]='/'; //левая рука
		output(chel, str, col);									 //4 состояние
		//Sleep(x);
		//system("cls");
		chel[6][8]=' '; chel[5][9]=' '; chel[5][8]='/'; chel[4][9]='/'; //правая рука  
		chel[6][1]=' '; chel[7][0]=' '; chel[8][0]='/'; chel[7][1]='/'; //левая рука
		output(chel, str, col);									 //5 состояние
		//Sleep(x);
		//system("cls");
		chel[4][9]='*'; //правая рука  
		chel[7][1]=' '; chel[8][0]=' '; chel[6][1]='-'; chel[7][0]='/'; //левая рука
		output(chel, str, col);									 //6 состояние
		//Sleep(x);
		//system("cls");
		chel[4][9]='/'; //правая рука  
		chel[7][0]=' '; chel[6][0]='-'; //левая рука
		output(chel, str, col);									 //7 состояние
		//Sleep(x);
		//system("cls");
		chel[4][9]='*'; //правая рука  
		chel[6][0]=' '; chel[5][0]='\\'; //левая рука
		output(chel, str, col);									 //8 состояние
		//Sleep(x);
		//system("cls");
		chel[4][9]='/'; //правая рука  
		chel[6][1]=' '; chel[5][0]=' '; chel[4][0]='\\'; chel[5][1]='\\'; //левая рука
		output(chel, str, col);									 //9 состояние
		//Sleep(x);
		//system("cls");
		chel[4][9]='*';  //правая рука  
		chel[4][0]='*';  //левая рука
		output(chel, str, col);									 //10 состояние
		//Sleep(x);
		//system("cls");
		chel[4][9]=' '; chel[5][8]=' '; chel[5][9]='*'; chel[6][8]='-'; //правая рука  
		chel[5][1]=' '; chel[4][0]=' '; chel[5][0]='*'; chel[6][1]='-'; //левая рука
		output(chel, str, col);									 //11 состояние
		//Sleep(x);
		//system("cls");
		chel[5][9]=' '; chel[6][9]='*'; //правая рука  
		chel[5][0]=' '; chel[6][0]='*'; //левая рука
		output(chel, str, col);									 //12 состояние
		//Sleep(x);
		//system("cls");
		chel[6][9]=' '; chel[7][9]='*'; //правая рука  
		chel[6][0]=' '; chel[7][0]='*'; //левая рука
		output(chel, str, col);									 //13 состояние
		//Sleep(x);
		//system("cls");
		chel[6][8]=' '; chel[7][9]=' '; chel[7][8]='\\'; chel[8][9]='*'; //правая рука  
		chel[6][1]=' '; chel[7][0]=' '; chel[8][0]='*'; chel[7][1]='/'; //левая рука
		output(chel, str, col);									 //14 состояние
	}
	//Sleep(x);
	//system("cls");
	chel[8][9]='\\';  //правая рука  
	chel[8][0]='/';  //левая рука
	output(chel, str, col);	
	return 0;	
}

void output(char chel[12][11], const int str, const int col) {
	for (int i=0; i<str; i++) {                     
		for (int j=0; j<col; j++) {
			std::cout << chel[i][j];
		}
		std::cout << "\n";	
	}
}