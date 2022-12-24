#include <stdio.h>
#include <iostream>

void readText(char* buff, long fileSize, FILE* file, int smech) {
	int firstbyte, secondbyte, thirdbyte, fourthbyte, simbol;
	fread(buff, sizeof(char), fileSize, file);
	for (int i = smech; i <= fileSize; i += 4) {
		firstbyte = (buff[i] & 3) << 6;
		secondbyte = (buff[i + 1] & 3) << 4;
		thirdbyte = (buff[i + 2] & 3) << 2;
		fourthbyte = (buff[i + 3] & 3);
		simbol = (firstbyte | secondbyte | thirdbyte | fourthbyte);
		std::cout << char(simbol);
	}
}

int main() {
	FILE* file;
    	char filename[100];
    	std::cout << "Input file for read: "; std::cin >> filename;
   	file = fopen(filename, "rb");
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



