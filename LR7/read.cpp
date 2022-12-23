#include<iostream>
#include<stdio.h>
#include <cstdlib>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
void ReadText(char* buff, long fileSize);

int main() {
	FILE* file;
	file = fopen("image.bmp", "rb");
	cout << " - " << char(0) << endl;
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file); 
	char* buff = new char[fileSize];
	fread(buff, sizeof(char), fileSize, file);
	ReadText(buff, fileSize);
	fclose(file);
	free(buff);

	return 0;
}

void changeColor(char* buff, long fileSize) {
	int b = 179, g = 222, r = 245;
	for (int i = 138; i < fileSize; i += 3) {
		buff[i] = b;
		buff[i + 1] = g;
		buff[i + 2] = r;
	}
}