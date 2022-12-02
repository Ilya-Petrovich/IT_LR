#include <stdio.h>
#include <iostream>
using namespace std;

void readText(char* buff, long fileSize) {
	
	FILE* file;
	char filename[100] = "masked_image.bmp";
	file = fopen(filename, "rb");
	
	fread(buff, sizeof(char), fileSize, file);
}

int main()
{
	FILE* file;
	char filename[100] = "masked_image.bmp";
	file = fopen(filename, "rb");
	
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	
	char* buff = new char[fileSize]();

	readText(buff, fileSize);

	for (int i = 138; i < fileSize; i+=4)
	{
		char s = 0;
		for (int j = 0; j < 4; j++) s = (s << 2) | (buff[i+j] & 3);
		cout << s;
	}
}
