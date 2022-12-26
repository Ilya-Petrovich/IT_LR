﻿//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <iostream> 

void ChangeColor(char* buff, long fSize);
void WriteText(char* buff, long fSize);

int main() {
    FILE* file;
    char filename[100];
    std::cout << "Input filename for read: "; std::cin >> filename;
    file = fopen(filename, "rb");

    long fSize;
    fseek(file, 0, SEEK_END);
    fSize = ftell(file);
    rewind(file);

    char* buff = new char[fSize]();
    fread(buff, 1, fSize, file);
    fclose(file);

    std::cout << "Input filename for write: "; std::cin >> filename;
    file = fopen(filename, "wb");

    ChangeColor(buff, fSize);
    WriteText(buff, fSize);

    fwrite(buff, fSize, 1, file);

    fclose(file);

    free(buff);
}

void ChangeColor(char* buff, long fSize) {
    std::cout << std::endl << std::endl << std::endl;
    for (int i = 138; i < fSize;) {
        buff[i] = 255 & 0xffff;
        buff[i + 1] = 255 & 0xffff;  
        buff[i + 2] = 0 & 0xffff; 
        i += 3;
    }
}
void WriteText(char* buff, long fSize) {
    std::string text = "PI-2-22-9";
    int start_of_byte = fSize - 1200;
    std::string::iterator it = text.begin();
    for (std::string::iterator it = text.begin(); it != text.end(); ++it) {
        char symbol = *it;
        int first_byte_of_symbol = (int)((symbol & (3 << 6)) >> 6);
        int second_byte_of_symbol = (int)((symbol & (3 << 4)) >> 4);
        int third_byte_of_symbol = (int)((symbol & (3 << 2)) >> 2);
        int fourth_byte_of_symbol = (int)(symbol & 3);
        buff[start_of_byte] = (buff[start_of_byte] & 0xfc) | first_byte_of_symbol;
        buff[start_of_byte + 1] = (buff[start_of_byte + 1] & 0xfc) | second_byte_of_symbol;
        buff[start_of_byte + 2] = (buff[start_of_byte + 2] & 0xfc) | third_byte_of_symbol;
        buff[start_of_byte + 3] = (buff[start_of_byte + 3] & 0xfc) | fourth_byte_of_symbol;
        start_of_byte += 4;
    }
}