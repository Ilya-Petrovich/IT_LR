#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstdio>

FILE* image;

using namespace std;

void readText(char* buff, long& fileSize);

long countFileSize();

int main() {
	long fileSize = countFileSize();
	char* buff = new char[fileSize];

	readText(buff, fileSize);

	delete[] buff;
	return 0;
}

void readText(char* buff, long& fileSize) {
	fread(buff, 1, fileSize, image);
	fclose(image);

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

long countFileSize() {
	image = fopen("image.bmp", "rb");
	long fileSize;
	fseek(image, 0, SEEK_END);
	fileSize = ftell(image);
	rewind(image);
	return fileSize;
}
