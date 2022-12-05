#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void ReadText(char* buff, long fileSize);
int main()
{
	FILE* file;
	file = fopen("image.bmp", "rb");

	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize]();

	fread(buff, 1, fileSize, file);

	ReadText(buff, fileSize);

	fclose(file);
	free(buff);
}
void ReadText(char* buff, long fileSize) 
{
    int i = fileSize - 1200, firstByte, secondByte, thirdByte, fourthByte;
    string res = "";
	for (int i = fileSize - 1200; i < fileSize; i += 4) {
        firstByte = buff[i] & 0x03;
        secondByte = buff[i + 1] & 0x03;
        thirdByte = buff[i + 2] & 0x03;
        fourthByte = buff[i + 3] & 0x03;

        res  += (firstByte << 6) | (secondByte << 4) | (thirdByte << 2) | (fourthByte);
    }
    cout << res;
}