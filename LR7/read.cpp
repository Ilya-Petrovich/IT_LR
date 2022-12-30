#define _CRT_SECURE_NO_DEPRECATED
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <iostream> 

void changeColor(char* buff, long fileSize);
void readText(char* buff, long fSize);
void writeText(char* buff, long fileSize);
void mask(char* buff, long filesize);

int main() {
    FILE* file;
    char filename[100];
    std::cout << "Input file for read: "; std::cin >> filename;
    file = fopen(filename, "rb");
    long fileSize;
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    rewind(file);
    char* buff = new char[fileSize]();
    fread(buff, sizeof(char), fileSize, file);
    readText(buff, fileSize);
    fclose(file);
    changeColor(buff, fileSize);
    file = fopen("changed_image.bmp", "wb");
    fwrite(buff, sizeof(char), fileSize, file);
    writeText(buff, fileSize);
    fwrite(buff, sizeof(char), fileSize, file);
    fclose(file);
    free(buff);
}

void changeColor(char* buff, long fileSize) {
    for (int i = 138; i < fileSize; i += 3) {
        buff[i] = 0;  
        buff[i + 1] = 128; 
        buff[i + 2] = 128;
    }
}

void readText(char* buff, long fileSize) {
    int start = fileSize - 1200;
    while (start < fileSize)
    {
        int f_b = buff[start] & 3;
        int s_b = buff[start + 1] & 3;
        int t_b = buff[start + 2] & 3;
        int fo_b = buff[start + 3] & 3;
        std::cout << (char)((f_b << 6) | (s_b << 4) | (t_b << 2) | fo_b);
        start += 4;
    }
}

void writeText(char* buff, long fileSize) {
    char text[] = "TRP-2-22-23";  
    for (int i = 138, j = 0; i < fileSize; i += 4, j++) {
        if (j <= 10) {
            buff[i] = buff[i] & 0xfc | (text[j] & 0b11000000) >> 6;
            buff[i + 1] = buff[i] & 0xfc | (text[j] & 0b00110000) >> 4;
            buff[i + 2] = buff[i] & 0xfc | (text[j] & 0b00001100) >> 2;
            buff[i + 3] = buff[i] & 0xfc | (text[j] & 0b00000011);
        }
        else {
            buff[i] = buff[i] & 0xfc | (' ' & 0b11000000) >> 6;
            buff[i + 1] = buff[i] & 0xfc | (' ' & 0b00110000) >> 4;
            buff[i + 2] = buff[i] & 0xfc | (' ' & 0b00001100) >> 2;
            buff[i + 3] = buff[i] & 0xfc | (' ' & 0b00000011);
        }
    }
}