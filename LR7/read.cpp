#include<iostream>
#include <stdio.h>

using namespace std;

void readText(char* buff, long fileSize, FILE* file) {
	fread(buff, sizeof(char), fileSize, file);
	
	for (size_t i = 138; i < fileSize; i+=4)
	{
		char firstByte = buff[i]&3;
		char secondByte = buff[i+1]&3;
		char thirdByte = buff[i+2]&3;	
		char fourthByte = buff[i+3]&3;
		firstByte = firstByte << 6;
		secondByte = secondByte << 4;
		thirdByte = thirdByte << 2;
		fourthByte = fourthByte << 0;
		char united_byte = firstByte | secondByte | thirdByte | fourthByte;
		cout << united_byte;
	}
}
int main() {
	FILE* file;
	file = fopen("image.bmp", "rb");
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	char* buff = new char[fileSize]();
	readText(buff, fileSize, file);

}



