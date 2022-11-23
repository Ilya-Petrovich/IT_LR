#include<iostream>
#include <stdio.h>
#include<string>

void ReadText(char* buff, long fileSize);

int main() {
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

    ReadText(buff, fileSize);

    fclose(file);
    free(buff);
}

void ReadText(char* buff, long fileSize) {

    int b1, b2, b3, b4, united_byte;

    for (int i = fileSize - 1200; i < fileSize; i += 4) {
        b1 = buff[i]; b2 = buff[i + 1]; b3 = buff[i + 2]; b4 = buff[i + 3];
        united_byte = ((b1 & 3) << 6) | ((b2 & 3) << 4) | ((b3 & 3) << 2) | (b4 & 3);
        std::cout << (char)united_byte;
    }
}