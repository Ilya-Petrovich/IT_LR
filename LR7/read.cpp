#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>

using namespace std;

void readText(char* buff, long fileSize);

int main() {

	FILE* file;

	char filename[100]; cin >> filename;

	file = fopen(filename, "rb");

	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize]();

	fread(buff, sizeof(char), fileSize, file);

	readText(buff, fileSize);
}

void readText(char* buff, long fileSize) {

	for (int i = 138, j = 0; i < fileSize; i += 4, j++) {
		int firstByte = buff[i] << 6;
		int secondByte = buff[i + 1] << 4 & 63;
		int thirdByte = buff[i + 2] << 2 & 15;
		int fourthByte = buff[i + 3] & 3;
		char unitedByte = firstByte | secondByte | thirdByte | fourthByte;
		buff[j] = unitedByte;
	}

	for (int i = 0; i < (fileSize - 138) / 4; i++) {
		cout << buff[i];
	}
}
