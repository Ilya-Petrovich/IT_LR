#include <iostream>
#include <stdio.h>

void readText(char* buff, long fileSize) {
	for(int i = 138; i < fileSize; i += 4)
	{
		char s = 0;
		for(int j = 0; j < 4; j++) s = (s << 2) | (buff[i+j] & 3);
		std::cout << s;
	}
}

int main() {
	FILE* file;
	long fileSize;
	char filename[100];
	
	std::cin >> filename;
	file = fopen(filename, "rb");
	
	fseek(file, 0, SEEK_END);  //перемещение в конец файла
	fileSize = ftell(file); //размер файла
	rewind(file); //в начало файла
	
	char* buff = new char[fileSize]();
	
	fread (buff, sizeof (char), fileSize, file);
	
	readText(buff, fileSize);
	
	fclose(file);
	free(buff);
	
	return 0;
}