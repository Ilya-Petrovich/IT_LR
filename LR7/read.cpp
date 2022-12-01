#include <iostream>
#include <stdio.h>

using namespace std;
void readText(char* buff, long fileSize);
void changeColor(char* buff, long fileSize);
void writeText(char* buff, long fileSize);

int main() {

	FILE* file;

	char filename[10];
	cin >> filename;
	file = fopen(filename, "rb");

	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);
	readText(buff, fileSize);

	/*fclose(file);
	cin >> filename;
	file = fopen(filename, "wb");
	changeColor(buff, fileSize);
	writeText(buff, fileSize);
	fwrite(buff, sizeof(char), fileSize, file);*/
	fclose(file);
	delete[] buff;
	return 0;
}
void readText(char* buff, long fileSize) {
	char firstByte, secondByte, thirdByte, fourthByte, sign;
	int mask = 0x03;

	for (int i = 138; i < fileSize; i += 4) {
		firstByte = (buff[i] & mask) << 6;	// first byte - 01001101
		secondByte = (buff[i + 1] & mask) << 4;	// second byte - 01001100
		thirdByte = (buff[i + 2] & mask) << 2;	// third byte - 11011110
		fourthByte = buff[i + 3] & mask;
		sign = firstByte | secondByte | thirdByte | fourthByte;
		printf("%c", sign);
	}
	cout << endl;
}
void changeColor(char* buff, long fileSize) {

	for (int i = 138; i < fileSize; i += 3) {
		buff[i] = 180;	// first byte - 01001101
		buff[i + 1] = 105;	// second byte - 01001100
		buff[i + 2] = 255;	// third byte - 11011110
	}
}
void writeText(char* buff, long fileSize) {

	char text[12]; cin >> text;
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
