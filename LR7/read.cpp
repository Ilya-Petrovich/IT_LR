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

	fclose(file);
	cin >> filename;
	file = fopen(filename, "wb");
	changeColor(buff, fileSize);
	writeText(buff, fileSize);
	fwrite(buff, sizeof(char), fileSize, file);
	fclose(file);
	delete[] buff;
	return 0;
}

void readText(char* buff, long fileSize) {
	char firstByte, secondByte, thirdByte, fourthByte, symbol;
	int mask = 0x03;

	for (int i = 138; i < fileSize; i += 4) {
		firstByte = (buff[i] & mask) << 6;
		secondByte = (buff[i + 1] & mask) << 4;
		thirdByte = (buff[i + 2] & mask) << 2;
		fourthByte = buff[i + 3] & mask;
		symbol = firstByte | secondByte | thirdByte | fourthByte;
		cout << symbol;
	}
	cout << endl;
}