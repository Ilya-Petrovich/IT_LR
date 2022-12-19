#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

void readText(char *buff, int fileSize) {
	for(int i = 138; i < fileSize; i += 4)
	{
		char s = 0;
		for(int j = 0; j < 4; j++) s = (s << 2) | (buff[i+j] & 3);
		cout << s;
	}
	cout << "\n";
}

int main()
{
	FILE* file;
	file = fopen("image.bmp", "rb");

	fseek(file, 0, SEEK_END);
	int fileSize = ftell(file);
	rewind(file);
	
	char* buff = new char[fileSize];
	
	fread (buff, sizeof (char), fileSize, file);
	
	readText(buff, fileSize);
	
	fclose(file);
	free(buff);
	
	return 0;
}
