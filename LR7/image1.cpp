#include<iostream>
#include<stdio.h>
using namespace std;
void readText(char* buff,long fileSize);
int main()
{
	FILE* file;
	file=fopen("changed_image.bmp","rb");
	long fileSize;
	fseek(file,0,SEEK_END);
	fileSize=ftell(file);
	rewind(file);
	char* buff= new char[fileSize]();
	fread(buff,sizeof(char),fileSize,file);
	readText(buff,fileSize);
	file = fopen("changed_image.bmp", "wb");
	fwrite(buff, sizeof(char), fileSize, file);
	fclose(file);
	free(buff);
}
void readText(char* buff,long fileSize)
{
    int start = fileSize - 1200;
    char b[300]="TRP-1-22-23";
    int i=0;
    while (start<(fileSize-3)) {
    buff[start]=(buff[start]&0xfc)|((b[i]&0xC0)>>6);
    buff[start+1]=(buff[start+1]&0xfc)|((b[i]&0x30)>>4);
    buff[start+2]=(buff[start+2]&0xfc)|((b[i]&0x0C)>>2);
    buff[start+3]=(buff[start+3]&0xfc)|(b[i]&0x03);
    start += 4;
    i+=1;
    }
}