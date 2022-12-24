#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

FILE* file;

void readText(char* buff, long filesize);
void changeColor(char* buff, long filesize);
void writeText(char* buff, long filesize);

int main() {
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
    for (int i = 138; i < 89*8; i+=8){
        int firstbyte = buff[i] & 3;
        int secondbyte = buff[i+1] & 3;
        int thirdbyte = buff[i+2]  & 3;
        int fourthbyte = buff[i+4]  & 3;
        int unitedbyte = firstbyte<<6 | secondbyte<<4 | thirdbyte<<2 | fourthbyte;
        cout << (char)unitedbyte;
    }
    fclose(file);
}
void changeColor(char* buff, long filesize) {
    for (int i = 138; i < filesize; i+=3){
        buff[i] = 170;
        buff[i+1] = 232;
        buff[i+2] = 238;
    }
    file = fopen("changed_image.bmp", "wb");
    fwrite(buff,sizeof(char),filesize,file);
    fclose(file);
}
void writeText(char* buff, long filesize) {
    file = fopen("changed_image.bmp", "rb");
    fread(buff, sizeof(char), filesize, file);
    char a[] = "TRP-2-22-34";
    int j = 0;
    bool flag = false;
    for (int i=138;i<strlen(a)*4;i+=4){
        char symb = a[j];
        if (flag) symb = ' ';
        int firstpart = symb >> 6;
        int secondpart = symb << 2 >> 6;
        int thirdpart = symb << 4 >> 6;
        int fourthpart = symb << 6 >> 6;

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
