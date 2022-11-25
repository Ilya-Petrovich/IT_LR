#include <stdio.h>
#include <iostream>
using namespace std;
void ChangeColor(char*buff,long fileSize);
int main()
{
	FILE* file;
	file =fopen("image.bmp","rb");
	long fileSize;
	fseek(file,0,SEEK_END);
	fileSize=ftell(file);
	rewind(file);
	char* buff= new char[fileSize]();
	fread(buff,sizeof(char),fileSize,file);
	ChangeColor(buff,fileSize);
	file =fopen("changed_image.bmp","wb");
	fwrite(buff, sizeof(char), fileSize, file);
	fclose(file);
	free(buff);
}
void ChangeColor(char* buff,long fileSize)
{
	cout <<endl <<endl << endl;
	for (int i = 138; i < fileSize;i+=3)
	{
        	buff[i] = 199;
        	buff[i+1] = 21;
        	buff[i+2] = 133;
        	
	}
}