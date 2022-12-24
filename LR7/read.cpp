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
	char firstByte, secondByte, thirdByte, fourthByte, unitedByte;
	const int inter = 3;

	for (int i = 138; i < fileSize; i += 4) {
		firstByte = (buff[i] & inter) << 6;
		secondByte = (buff[i + 1] & inter) << 4;	
		thirdByte = (buff[i + 2] & inter) << 2;	
		fourthByte = buff[i + 3] & inter;
		unitedByte = firstByte | secondByte | thirdByte | fourthByte;
		printf("%c", unitedByte);
	}
	cout << endl;
}
void changeColor(char* buff, long fileSize) {

	for (int i = 138; i < fileSize; i += 3) {
		buff[i] = 42;	
		buff[i + 1] = 42;	
		buff[i + 2] = 165;
	} 
}
void writeText(char* buff, long fileSize) {

	char text[] = "ISUB-1-22-3";
	int count = 0, text_size = size(text), inter = 3;

	for (int i = 138; i < fileSize; i += 4) {

		if (count < text_size) {
			buff[i] = (buff[i] & 0xfc) | ((text[count] >> 6) & inter);
			buff[i + 1] = (buff[i + 1] & 0xfc) | ((text[count] >> 4) & inter);
			buff[i + 2] = (buff[i + 2] & 0xfc) | ((text[count] >> 2) & inter);
			buff[i + 3] = (buff[i + 3] & 0xfc) | (text[count] & inter);
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