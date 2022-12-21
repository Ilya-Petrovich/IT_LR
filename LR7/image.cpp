#include <iostream>
#include <stdio.h>
using namespace std;
void read(char* buff,long fileSize);
int main()
{
	FILE* file;
	file =fopen("changed_image.bmp","rb");
	long fileSize;
	fseek(file,0,SEEK_END);
	fileSize=ftell(file);
	rewind(file);
	char* buff=new char[fileSize]();
	fread(buff,sizeof(char),fileSize,file);
	read(buff,fileSize);
	file = fopen("masked_image.bmp", "wb");
	fwrite(buff, sizeof(char), fileSize, file);
	fclose(file);
	free(buff);
	return 0;
}
void read(char* buff,long fileSize)
{
	int start=fileSize-1200;
	char b[1000]="It is better to laugh at your folly than to cry from your intelligence.";
	int i=0;
	while(start<(fileSize)-31)
	{
		buff[start]=(buff[start]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+3]=(buff[start+3]&0xFC)|((b[i]&0x30)>>4);
		buff[start+5]=(buff[start+5]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+6]=(buff[start+6]&0xFC)|((b[i]&0x03));
		i+=1;
		buff[start+7]=(buff[start+7]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+8]=(buff[start+8]&0xFC)|((b[i]&0x30)>>4);
		buff[start+11]=(buff[start+11]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+13]=(buff[start+13]&0xFC)|((b[i]&0x03));
		i+=1;
		buff[start+14]=(buff[start+14]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+15]=(buff[start+15]&0xFC)|((b[i]&0x30)>>4);
		buff[start+16]=(buff[start+16]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+19]=(buff[start+19]&0xFC)|(b[i]&0x03);
		i+=1;
		buff[start+21]=(buff[start+21]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+22]=(buff[start+22]&0xFC)|((b[i]&0x30)>>4);
		buff[start+23]=(buff[start+23]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+24]=(buff[start+24]&0xFC)|((b[i]&0x03));
		i+=1;
		buff[start+27]=(buff[start+27]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+29]=(buff[start+29]&0xFC)|((b[i]&0x30)>>4);
		buff[start+30]=(buff[start+30]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+31]=(buff[start+31]&0xFC)|(b[i]&0x03);
		i+=1;
		start+=32;
	}
	if(start<fileSize)
	{
		buff[start]=(buff[start]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+3]=(buff[start+3]&0xFC)|((b[i]&0x30)>>4);
		buff[start+5]=(buff[start+5]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+6]=(buff[start+6]&0xFC)|((b[i]&0x03));
		i+=1;
		start+=7;
	}
	if(start<fileSize)
	{
		buff[start]=(buff[start]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+1]=(buff[start+1]&0xFC)|((b[i]&0x30)>>4);
		buff[start+4]=(buff[start+4]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+6]=(buff[start+6]&0xFC)|((b[i]&0x03));
		i+=1;
		start+=7;
	}
	if(start<fileSize)
	{
		buff[start]=(buff[start]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+1]=(buff[start+1]&0xFC)|((b[i]&0x30)>>4);
		buff[start+2]=(buff[start+2]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+5]=(buff[start+5]&0xFC)|(b[i]&0x03);
		i+=1;
		start+=7;
	}
	if(start<fileSize)
	{
		buff[start]=(buff[start]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+1]=(buff[start+1]&0xFC)|((b[i]&0x30)>>4);
		buff[start+2]=(buff[start+2]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+3]=(buff[start+3]&0xFC)|((b[i]&0x03));
		i+=1;
		start+=6;
	}
	if(start<fileSize)
	{
		buff[start]=(buff[start]&0xFC)|((b[i]&0xC0)>>6);
		buff[start+2]=(buff[start+2]&0xFC)|((b[i]&0x30)>>4);
		buff[start+3]=(buff[start+3]&0xFC)|((b[i]&0x0C)>>2);
		buff[start+4]=(buff[start+4]&0xFC)|(b[i]&0x03);
		i+=1;
		start+=5;
	}
}
