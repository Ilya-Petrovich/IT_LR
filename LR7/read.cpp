#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

void readText(char* buff, long fileSize);
void changeColor(char* buff, long fileSize);
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
	free(buff);
	return 0;
}

void readText(char* buff, long fileSize) {
	int fsize = fileSize - 20 * 20 * 3;
	char firstByte, secondByte, thirdByte, fourthByte, ans;
	for (int i = fsize; i < fileSize; i += 4) {
		firstByte = (buff[i] & 0x3) << 6;
		secondByte = (buff[i + 1] & 0x3) << 4;
		thirdByte = (buff[i + 2] & 0x3) << 2;
		fourthByte = buff[i + 3] & 0x3;

		ans = firstByte | secondByte | thirdByte | fourthByte;
		printf("%c", ans);
	}
}

void changeColor(char* buff, long fileSize) {
	int fsize = fileSize - 20 * 20 * 3;
	for (int i = fsize; i < fileSize; i += 3) {
		buff[i] = 128;
		buff[i + 1] = 128;
		buff[i + 2] = 240;
	}
}