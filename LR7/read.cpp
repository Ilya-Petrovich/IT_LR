#include <iostream>
#include <stdio.h>
#include <fstream>

void readText(char* buff, long fileSize){
	char b1, b2, b3, b4, *res = new char[fileSize];
	int j=0;
	for (int i =138; i<fileSize; i+=4){
		b1=buff[i]&3;
		b2=buff[i+1]&3;
		b3=buff[i+2]&3;
		b4=buff[i+3]&3;
		res[j] = b1*64 + b2*16 + b3*4 +b4;
		std::cout<<res[j];
		j++;
	}
}

void changeColor(char *buff, long fileSize){
	const char r=139, g=69, b=19;
	int j=0;
	for (int i = 137; i<fileSize; i+=3){
		buff[i] = r;
		buff[i+1]=b;
		buff[i+2]=g;
	}
}

void writeText(char *buff, long fileSize){
	char text[]= "TRP-2-22-4\n";
	std::ofstream MyFile("changed_image.bmp");
	std::cout<<std::endl;
	int j=0;
	for (int i = 138; j!=sizeof(text)/sizeof(char); i+=4){
		buff[i]=buff[i]&0xfc|(text[j]&0xc0)>>6;
		buff[i+1]=buff[i+1]&0xfc|(text[j]&0x30)>>4;
		buff[i+2]=buff[i+2]&0xfc|(text[j]&0x0c)>>2;
		buff[i+3]=buff[i+3]&0xfc|text[j]&0x03;
		j+=1;
	}
	for (int i =0; i<=fileSize; i++){
		MyFile << buff[i];
	}
	MyFile.close();
}

int main(){
	FILE* file;
	char filename[100];
	std::cin >> filename;
	file = fopen(filename, "rb");
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);
	char* buff = new char[fileSize]();
	fread(buff, sizeof(char), fileSize, file);
	readText(buff, fileSize);
	free(buff);
}
