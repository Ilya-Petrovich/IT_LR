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

void ReadText(char* buff, long fileSize) {

    for (int i = 138; i < fileSize; i += 4) {
        int  united_byte = 0;
        for (int j = i; j < i + 4; j++) {
            united_byte |= (buff[j] & 3) << (2*(i+3-j));
        }
        cout << (char)united_byte;
    }
}