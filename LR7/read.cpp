#include<stdio.h>
#include<fstream>
#include<iostream>
using namespace std;
FILE* file;
FILE* fp;

void readText(char* buff, long fileSize)
{
	fread(buff, sizeof(char), fileSize, file);
	int offset = fileSize - 20 * 20 * 3;

	for (offset; offset < fileSize; offset += 4) {
		char firstByte = buff[offset] & 3;
		firstByte <<= 6;
		char secondByte = buff[offset + 1] & 3;
		secondByte <<= 4;
		char thirdByte = buff[offset + 2] & 3;
		thirdByte <<= 2;
		char fourthByte = buff[offset + 3] & 3;
		char byte = firstByte | secondByte | thirdByte | fourthByte;
		cout << byte;
	}
}
void changeColor(char* buff, long fileSize) {
	fread(buff, sizeof(char), fileSize, file);
	buff[138] = 192
	cout << buff;
}

int main()
{

	long fileSize;

	fopen_s(&file, "image.bmp", "rb");// предлагают fopen заменитть на fopen_s ==> запись меняется
	fopen_s(&fp, "image.bmp", "wb");//если в строке выше ошибка, пишем "r+b"

	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	char* buff = new char[fileSize]();
	changeColor(buff, fileSize);

	fread(buff, sizeof(char), fileSize, file);

	//readText(buff, fileSize);
	return 0;
}