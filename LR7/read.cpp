#include <iostream>
void readText(char* buff, long fileSize);
void read(char* buff, long fileSize);
int main()
{
	long fileSize;
	char* buff = new char[fileSize]();
	readText(buff, fileSize);
}
void readText(char* buff, long fileSize)
{
	FILE* file;
	file = fopen("changed_image.bmp","rb");
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	fread(buff, 1, fileSize, file);
	read(buff, fileSize);
	fclose(file);
}
void read(char* buff, long fileSize)
{
	int s = fileSize- 1200;
	while (s < (fileSize - 3))
	{
		int firstByte = buff[s] & 0x03;
		int secondByte = buff[s + 1] & 0x03;
		int thirdByte = buff[s + 2] & 0x03;
		int fourthByte = buff[s + 3] & 0x03;
		std::cout << (char) ((firstByte << 6) | (secondByte << 4) | (thirdByte << 2) | (fourthByte));
		s += 4;
	}
}