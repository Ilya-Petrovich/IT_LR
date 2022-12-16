#include <stdio.h>
#include <iostream>
void readText(char* buff, long fileSize);
FILE* file;
int main()
{
	file = fopen("image.bmp", "rb");
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	char* buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);

	unsigned int firstByte, secondByte, thirdByte, fourthByte;
	firstByte = buff[138];	// first byte - 01001101
	secondByte = buff[139];	// second byte - 01001100
	thirdByte = buff[140];	// third byte - 11011110
	fourthByte = buff[141];	// fourth byte - 01001101
	readText(buff, fileSize);
	std::cout << file << std::endl;
	system("pause");
	return 0;
}
void readText(char* buff, long fileSize)
{
	for (int i = 0; i <= fileSize; i++)
		std::cout << buff[i];
}