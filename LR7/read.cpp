#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;
void readText(char*& buff, long& fileSize) {
	FILE* file;
	char filename[] = "image.bmp";
	file = fopen(filename, "rb");
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);
	fwrite(buff, sizeof(char), fileSize, file);

}
int main() {
	char* buff = NULL;
	long fileSize = 0, start = 138;
	char first, second, third, fourth, slovo;
	readText(buff, fileSize);
	for (int i = 138; i < fileSize; i += 4) {
		first = (buff[i] & 0x3) << 6;
		second = (buff[i + 1] & 0x3) << 4;
		third = (buff[i + 2] & 0x3) << 2;
		fourth = (buff[i + 3] & 0x3);
		slovo = first | second | third | fourth;
		cout << slovo;
	}

}