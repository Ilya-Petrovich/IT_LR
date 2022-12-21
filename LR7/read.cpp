#include <iostream>
#include <stdio.h>

using namespace std;

void readText(char buff[], long fileSize);
void changeColor(char* buff, long fileSize);
void writeText(char* buff, long fileSize);

int main() {

	FILE * file;

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

	/*fclose(file);
	file = fopen(filename, "wb");
	changeColor(buff, fileSize);
	writeText(buff, fileSize);
	fwrite(buff, sizeof(char), fileSize, file);*/

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

void changeColor(char* buff, long fileSize) {
	for (int i = 138; i < fileSize; i += 3) {
		buff[i] = 255;
		buff[i + 1] = 0;
		buff[i + 2] = 255;
	}
}

void writeText(char* buff, long fileSize) {

	char text[13] = "TRIS-2-22-11";
	int count = 0;

	for (int i = 138; i < fileSize; i += 4) {

		if (count < 12) {
			buff[i] = (buff[i] & 0xfc) | ((text[count] >> 6) & 0x3);
			buff[i + 1] = (buff[i + 1] & 0xfc) | ((text[count] >> 4) & 0x3);
			buff[i + 2] = (buff[i + 2] & 0xfc) | ((text[count] >> 2) & 0x3);
			buff[i + 3] = (buff[i + 3] & 0xfc) | (text[count] & 0x3);
		}
		else {
			buff[i] = buff[i] & 0xfc;
			buff[i + 1] = (buff[i + 1] & 0xfc) | 0x2;
			buff[i + 2] = buff[i + 2] & 0xfc;
			buff[i + 3] = buff[i + 3] & 0xfc;
		}
		count++;
	}
}