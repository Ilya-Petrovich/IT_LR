#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;
void readText(char* buff, long fileSize);

int main() {

	FILE* file;

	char filename[100];
	cin >> filename;
	file = fopen(filename, "rb");

	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);

	readText(buff, fileSize);
	fclose(file);

	delete[] buff;

	return 0;
}
void readText(char* buff, long fileSize) {
	char firstByte, secondByte, thirdByte, fourthByte, sign;
	int mask = 0x03;

	for (int i = 138; i < fileSize; i += 4) {
		firstByte = (buff[i] & mask) << 6;
		secondByte = (buff[i + 1] & mask) << 4;
		thirdByte = (buff[i + 2] & mask) << 2;
		fourthByte = buff[i + 3] & mask;
		sign = firstByte | secondByte | thirdByte | fourthByte;
		cout << sign;;
	}
	cout << '\n';
}