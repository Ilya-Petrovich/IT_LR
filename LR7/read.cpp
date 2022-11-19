#include <stdio.h>
#include <iostream>
#include <bitset>

using namespace std;

FILE* file;

void readText(char* buff, long fileSize) {

	fread(buff, sizeof(char), fileSize, file);

	for (size_t i = fileSize - 20 * 20 * 3; i < 138+83*4; i+=4) {
		char united_byte = 0;

		char firstByte= buff[i] & 3;
		char secondByte = buff[i+1] & 3;
		char thirdByte = buff[i+2] & 3;
		char fourthByte = buff[i+3] & 3;

		united_byte |= firstByte << 6;
		united_byte |= secondByte << 4;
		united_byte |= thirdByte << 2;
		united_byte |= fourthByte;

		cout << united_byte;
	}

	fclose(file);

	free(buff);
}



int main()
{

	long fileSize;

	file = fopen("image.bmp", "rb");

	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize]();

	readText(buff, fileSize);
}