#include <iostream>
#include <unistd.h>
using namespace std;

enum class HandsStates {Up, Out, Down};
const int arrayXSize = 11;
const int arrayYSize = 12;
char firstFrame[arrayYSize][arrayXSize] = {
{' ',' ',' ','_','[',']','_',' ',' ',' ', '\n'},
{' ',' ',' ','|','~','~','|',' ',' ',' ', '\n'},
{' ',' ',' ','|','o','q','|',' ',' ',' ', '\n'},
{' ',' ','(','|','<','>','|',')',' ',' ', '\n'},
{' ',' ',' ','\\','-','-','/',' ',' ',' ', '\n'},
{' ',' ',' ','_','>','<','_',' ',' ',' ', '\n'},
{' ',' ','-','\\','.',' ','/','-',' ',' ', '\n'},
{' ','/',' ','|','.',' ','|',' ','\\',' ', '\n'},
{'/',' ',' ','|','.',' ','|',' ',' ','\\', '\n'},
{' ',' ',' ','|','_','_','|',' ',' ',' ', '\n'},
{' ',' ',' ',' ','|','|',' ',' ',' ',' ', '\n'},
{' ',' ',' ','_','|','|','_',' ',' ', ' ', 0},
};

void ChangeArray(int frame);
void ClearConsole();
void RightHandChanger(HandsStates state);
void LeftHandChager(HandsStates state);
int main()
{
	for (int i = 0; i<14; i++) ChangeArray(i);
	for (int i = 1; i<14; i++) ChangeArray(i);
	
}
void ChangeArray(int frame)
{
	usleep(1000 * 500);
	ClearConsole();
	switch (frame) {
		case 0:
			break;
		case 1:
			LeftHandChager(HandsStates::Out);
			break;
		case 2:
			LeftHandChager(HandsStates::Up);
			break;
		case 3:
			LeftHandChager(HandsStates::Out);
			break;
		case 4:
			LeftHandChager(HandsStates::Down);
			break;
		case 5:
			RightHandChanger(HandsStates::Out);
			break;
		case 6:
			RightHandChanger(HandsStates::Up);
			break;
		case 7:
			RightHandChanger(HandsStates::Out);
			break;
		case 8:
			RightHandChanger(HandsStates::Down);
			break;
		case 9:
			RightHandChanger(HandsStates::Out);
			LeftHandChager(HandsStates::Out);
			break;
		case 10:
			RightHandChanger(HandsStates::Up);
			LeftHandChager(HandsStates::Up);
			break;
		case 11:
			RightHandChanger(HandsStates::Up);
			LeftHandChager(HandsStates::Out);
			break;
		case 12:
			RightHandChanger(HandsStates::Up);
			LeftHandChager(HandsStates::Down);
			break;
		case 13:
			RightHandChanger(HandsStates::Down);
			LeftHandChager(HandsStates::Down);
			break;

	}
	cout << firstFrame[0];
}
void ClearConsole()
{
	cout << "\033[2J\033[1;1H";
}
void RightHandChanger(HandsStates state)
{
	switch (state) {
	case HandsStates::Up:
		firstFrame[4][9] = '/';
		firstFrame[5][9] = ' ';
		firstFrame[6][9] = ' ';
		firstFrame[7][9] = ' ';
		firstFrame[8][9] = ' ';
		firstFrame[5][8] = '/';
		firstFrame[6][8] = ' ';
		firstFrame[7][8] = ' ';
		break;
	case HandsStates::Out:
		firstFrame[4][9] = ' ';
		firstFrame[5][9] = ' ';
		firstFrame[6][9] = '-';
		firstFrame[7][9] = ' ';
		firstFrame[8][9] = ' ';
		firstFrame[5][8] = ' ';
		firstFrame[6][8] = '-';
		firstFrame[7][8] = ' ';
		break;
	case HandsStates::Down:
		firstFrame[4][9] = ' ';
		firstFrame[5][9] = ' ';
		firstFrame[6][9] = ' ';
		firstFrame[7][9] = ' ';
		firstFrame[8][9] = '\\';
		firstFrame[5][8] = ' ';
		firstFrame[6][8] = ' ';
		firstFrame[7][8] = '\\';
		break;
	}
}

void LeftHandChager(HandsStates state)
{
	switch (state) {
		case HandsStates::Up:
			firstFrame[4][0] = '\\';
			firstFrame[5][0] = ' ';
			firstFrame[6][0] = ' ';
			firstFrame[7][0] = ' ';
			firstFrame[8][0] = ' ';
			firstFrame[5][1] = '\\';
			firstFrame[6][1] = ' ';
			firstFrame[7][1] = ' ';
			break;
		case HandsStates::Out:
			firstFrame[4][0] = ' ';
			firstFrame[5][0] = ' ';
			firstFrame[6][0] = '-';
			firstFrame[7][0] = ' ';
			firstFrame[8][0] = ' ';
			firstFrame[5][1] = ' ';
			firstFrame[6][1] = '-';
			firstFrame[7][1] = ' ';
			break;
		case HandsStates::Down:
			firstFrame[4][0] = ' ';
			firstFrame[5][0] = ' ';
			firstFrame[6][0] = ' ';
			firstFrame[7][0] = ' ';
			firstFrame[8][0] = '/';
			firstFrame[5][1] = ' ';
			firstFrame[6][1] = ' ';
			firstFrame[7][1] = '/';
			break;
	}
}