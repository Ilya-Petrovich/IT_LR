#include <stdio.h>
#include <iostream>
using namespace std;
void Read(char* buff, long fSize) 
    {
    int start = fSize - 1200;
    while (start< (fSize-3)) {
    int firstByte = buff[start] & 0x03;	
    int secondByte = buff[start+1] & 0x03;
    int thirdByte = buff[start+2] & 0x03;	
    int fourthByte = buff[start + 3] & 0x03;
    std::cout <<(char) ((firstByte << 6) | (secondByte << 4) | (thirdByte << 2) | fourthByte);
    start += 4;
    }
}
void ReadText(char* buff, long &fSize)
{
    FILE* file;
    file = fopen("changed_image.bmp", "rb");
    fseek(file, 0, SEEK_END);
    fSize = ftell(file);
    rewind(file);
    fread(buff, 1, fSize, file);
    Read(buff,fSize);
    fclose(file);
}
int main()
{
    long fSize;
    char* buff = new char[fSize]();
    ReadText(buff, fSize);
    free(buff);
}