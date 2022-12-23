#include <stdio.h>
#include <iostream>
void readText(char* buff, long fileSize);
int main()
{
	FILE* file;
	char filename[100];
	std::cin >> filename;
	file = fopen(filename, "rb");
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	char* buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);
	readText(buff, fileSize);
	fclose(file);
	free(buff);
	return 0;
}
void readText(char* buff, long fileSize)
{
	char firstByte, secondByte, thirdByte, fourthByte, text;
	int sdv = fileSize - 20 * 20 * 3;
	for (int i = sdv; i < fileSize; i += 4)
	{
		firstByte = (buff[i] & 3) << 6;
		secondByte = (buff[i+1] & 3) << 4;
		thirdByte = (buff[i+2] & 3) << 2;
		fourthByte = (buff[i+3] & 3);
		text = firstByte | secondByte | thirdByte | fourthByte;
		printf("%c", text);
	}
}