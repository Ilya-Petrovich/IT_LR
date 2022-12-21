#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

void readText(char buff[], long fileSize);

int main() {

	FILE* file;

	char filename[100];
	cin >> filename;
	file = fopen(filename, "rb");

	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize];
	fread(buff, sizeof(char), fileSize, file);
	readText(buff, fileSize);

	fclose(file);
	file = fopen(filename, "wb");
	changeColor(buff, fileSize);
	writeText(buff, fileSize);
	fwrite(buff, sizeof(char), fileSize, file);

	fclose(file);

	delete[] buff;

	return 0;

}

void readText(char buff[], long fileSize) {
	char fB, sB, tB, foB, all;
	int mask = 0x03;

	for (int i = 138; i < fileSize; i += 4) {
		fB = buff[i] & mask; fB <<= 6;
		sB = buff[i + 1] & mask; sB <<= 4;
		tB = buff[i + 2] & mask; tB <<= 2;
		foB = buff[i + 3] & mask;
		all = fB | sB | tB | foB;
		printf("%c", all);
	}
}




