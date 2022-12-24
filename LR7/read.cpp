#include <stdio.h>
#include <iostream>

void readText(char* buff, long fileSize, FILE* file, int smech) {
	int firstbyte, secondbyte, thirdbyte, fourthbyte, simbol;
	fread(buff, sizeof(char), fileSize, file);
	for (int i = smech; i <= fileSize; i += 4) {
		firstbyte = buff[i] & 0b00000011;
		secondbyte = (buff[i + 1] & 0b00000011) << 2;
		thirdbyte = (buff[i + 2 & 0b00000011]) << 4;
		fourthbyte = (buff[i + 3] & 0b00000011) << 6;
		simbol = firstbyte | secondbyte | thirdbyte | fourthbyte;
		std::cout << simbol;
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
	int smech = fileSize - 20 * 20 * 3;
	readText(buff, fileSize, file, smech);
	fclose(file);
	free(buff);
}



