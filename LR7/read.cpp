#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

FILE* file;

void readText(char* buff, long filesize);
void changeColor(char* buff, long filesize);
void writeText(char* buff, long filesize);


int main(){
    setlocale(LC_ALL, "Russian");
    char filename[100];
    cin >> filename;
    file = fopen(filename, "rb");

    long filesize;
    fseek(file,0, SEEK_END);
    filesize = ftell(file);
    rewind(file);
    char* buff = new char[filesize]();

    readText(buff,filesize);
    changeColor(buff,filesize);
    writeText(buff,filesize);
    free(buff);
    return 0;
}

void readText(char* buff, long filesize){
    fread(buff, sizeof(char), filesize, file);
    for (int i = 138; i < filesize; i+=4){
        int firstbyte = buff[i] & 3;
        int secondbyte = buff[i+1] & 3;
        int thirdbyte = buff[i+2]  & 3;
        int fourthbyte = buff[i+3]  & 3;
        int unitedbyte = firstbyte<<6 | secondbyte<<4 | thirdbyte<<2 | fourthbyte;
        cout << (char)unitedbyte;
    }
    fclose(file);
}
void changeColor(char* buff, long filesize) {
    for (int i = 138; i < filesize; i+=3){
        buff[i] = 30;
        buff[i+1] = 105;
        buff[i+2] = 210;
    }
    file = fopen("changed_image.bmp", "wb");
    fwrite(buff,sizeof(char),filesize,file);
    fclose(file);
}
void writeText(char* buff, long filesize) {
    file = fopen("changed_image.bmp", "rb");
    fread(buff, sizeof(char), filesize, file);
    string a = "TRP-2-22-6\0";
    int j = 0;
    for (int i=138;i<filesize;i+=4){
        if (a[j] == '\0'){ cout << "end of message" << endl;  break;}
        int firstpart = a[j] >> 6;
        int secondpart = a[j] << 2 >> 6;
        int thirdpart = a[j] << 4 >> 6;
        int fourthpart = a[j] << 6 >> 6;

        buff[i] = buff[i] >> 2 << 2 |  firstpart;
        buff[i+1] = buff[i+1] >> 2 << 2 |  secondpart;
        buff[i+2] = buff[i+2] >> 2 << 2 |  thirdpart;
        buff[i+3] = buff[i+3] >> 2 << 2 |  fourthpart;
        j++;
    }
    fclose(file);
    file = fopen("changed_image.bmp", "wb");
    fwrite(buff,sizeof(char),filesize,file);
    fclose(file);
}
