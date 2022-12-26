#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
void readText(char*& buff, long& fileSize) {
	FILE* file;
	char filename[100];
	cin >> filename;
	file = fopen(filename, "rb");
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);
	fwrite(buff, sizeof(char), fileSize, file);
}
int main() {
	char firstByte, secondByte, thirdByte, fourthByte, united_byte,mask = 0x3;
	char* buff = NULL;
	long fileSize = 0,start = 138;
	readText(buff, fileSize);
	for (int i = 142; i < fileSize; i+=4) {
		firstByte = (buff[i-4] & mask) << 6;
		secondByte = (buff[i-3] & mask) << 4;
		thirdByte = (buff[i-2] & mask) << 2;
		fourthByte = (buff[i - 1] & mask) ;
		united_byte =  firstByte | secondByte | thirdByte | fourthByte;
		cout << united_byte;
	}
	return 0;
}