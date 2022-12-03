#include <stdio.h>
#include <iostream>
using namespace std;
void ReadText(char* buff, long fSize);
int main()
{
	FILE* file;
	file = fopen("image.bmp", "rb");
	long fSize;
	fseek(file, 0, SEEK_END);
	fSize = ftell(file);
	rewind(file);
	char* buff = new char[fSize]();
	fread(buff, 1, fSize, file);
	ReadText(buff, fSize);
	fclose(file);
	free(buff);
}
void ReadText(char* buff, long fSize) 
{
	int start = fSize - 1200;
	while (start< (fSize-3)) 
	{
		int firstByte = buff[start] & 0x03;	
		int secondByte = buff[start+1] & 0x03;
		int thirdByte = buff[start+2] & 0x03;	
		int fourthByte = buff[start + 3] & 0x03;
		cout <<(char) ((firstByte << 6) | (secondByte << 4) | (thirdByte << 2) | fourthByte);
		start += 4;
	}
}

