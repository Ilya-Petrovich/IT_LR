#include<stdio.h>
#include<iostream>

using namespace std;

void writeText(char* buff, long fileSize);
void readText(char* buff, long fileSize);
void changeColor(char* buff, long fileSize);

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

	file = fopen(filename, "wb");
	fwrite(buff, sizeof(char), fileSize, file);

	fclose(file);
	free(buff);
	return 0;
}

void changeColor(char* buff, long fileSize) {
	int m = 3, b = 122, g = 150, r = 233;

	for (int i = 138; i < fileSize; i += 3) {
		buff[i] = b;
		buff[i + 1] = g;
		buff[i + 2] = r;
	}
}

void readText(char* buff, long fileSize) {
	int fsize = fileSize, m = 3, eb;
	unsigned int fb, sb, tb, fob;

	for (int i = 138; i < fsize; i += 4) {
		fb = (buff[i] & m) << 6;
		sb = (buff[i + 1] & m) << 4;
		tb = (buff[i + 2] & m) << 2;
		fob = (buff[i + 3] & m);
		eb = fb | sb | tb | fob;
		printf("%c", eb);
	}
}

void writeText(char* buff, long fileSize) {
	char n[10] = { 'P','I','-','2','-','2','2','-','1','3' };
	int count = 0, clean_byte = 252, ten_byte = 2;

	for (int i = 138; i < fileSize; i += 4) {

		if (count < 10) {
			buff[i] = (buff[i] & clean_byte) | ((n[count] >> 6) & 3);
			buff[i + 1] = (buff[i + 1] & clean_byte) | ((n[count] >> 4) & 3);
			buff[i + 2] = (buff[i + 2] & clean_byte) | ((n[count] >> 2) & 3);
			buff[i + 3] = (buff[i + 3] & clean_byte) | ((n[count]) & 3);
		}
		else {
			buff[i] = buff[i] & clean_byte;
			buff[i + 1] = (buff[i + 1] & clean_byte) | ten_byte;
			buff[i + 2] = buff[i + 2] & clean_byte;
			buff[i + 3] = buff[i + 3] & clean_byte;
		}
		count++;
	}
}