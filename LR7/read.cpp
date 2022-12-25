#include <iostream>
#include <stdio.h>

void readText(char* buff, long fileSize);

int main() {
	FILE* file;
	char filename[100];
	std::cin >> filename;
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
	int start = fileSize - 1200;
	while (start < fileSize)
	{
		int fByte = buff[start] & 3;
		int sByte = buff[start + 1] & 3;
		int tByte = buff[start + 2] & 3;
		int foByte = buff[start + 3] & 3;
		std::cout << (char)((fByte << 6) | (sByte << 4) | (tByte << 2) | foByte);
		start += 4;
	}