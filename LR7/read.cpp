#include <stdio.h>
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

void readText(char* buff, long fileSize);

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
    fread(buff, 1, fileSize, file);
    readText(buff, fileSize);
    fclose(file);
    free(buff);
}

void readText(char* buff, long fileSize) {
    int start_of_byte = fileSize - 1200;

    while (start_of_byte < fileSize) {
        int first_byte = buff[start_of_byte] & 3;
        int second_byte = buff[start_of_byte + 1] & 3;
        int third_byte = buff[start_of_byte + 2] & 3;
        int fourth_byte = buff[start_of_byte + 3] & 3;
        std::cout << (char)((first_byte << 6) | (second_byte << 4) | (third_byte << 2) | fourth_byte);
        start_of_byte += 4;
    }
}