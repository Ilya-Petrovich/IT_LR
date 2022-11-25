#include <iostream>
#include <stdio.h>

void ReadText(char* buff, long fileSize)
{
    int first_byte, second_byte, third_byte, fourth_byte, symbol;
    std::string result = "";

    for (int i = fileSize - 1200; i < fileSize; i += 4) {
        first_byte = buff[i];
        second_byte = buff[i + 1];
        third_byte = buff[i + 2];
        fourth_byte = buff[i + 3];

        symbol = ((first_byte & 3) << 6) | ((second_byte & 3) << 4) | ((third_byte & 3) << 2) | (fourth_byte & 3);
        result += char(symbol);
    }
    std::cout << result << std::endl;
}

void changeColor(char* buff, long fileSize)
{
    FILE* file_changeColor;
    file_changeColor = fopen("changed_image.bmp", "wb");

    for (int i = fileSize - 1200; i < fileSize; i += 3) {
        buff[i] = 87; //&252 ???
        buff[i + 1] = 139;
        buff[i + 2] = 46;
    }
    fwrite(buff, sizeof(char), fileSize, file_changeColor);
    fclose(file_changeColor);
}

void writeText(char* buff, long fileSize)
{
    int first_part, second_part, third_part, fourth_part;
    std::string text = "TRP-3-22-21";

    FILE* file_write;
    file_write = fopen("changed_image.bmp", "rb");

    fread(buff, sizeof(char), fileSize, file_write);

    //cleaning
    for (int i = fileSize - 1200; i < fileSize; i++) {
        buff[i] &= 252;
    }

    //writing
    for (unsigned int i = 0; i < text.size(); i++) {
        first_part = (text[i] & 192) >> 6;
        second_part = (text[i] & 48) >> 4;
        third_part = (text[i] & 12) >> 2;
        fourth_part = text[i] & 3;

        buff[fileSize - 1200 + i * 4] = (buff[fileSize - 1200 + i * 4] & 252) | first_part;
        buff[fileSize - 1200 + i * 4 + 1] = (buff[fileSize - 1200 + i * 4 + 1] & 252) | second_part;
        buff[fileSize - 1200 + i * 4 + 2] = (buff[fileSize - 1200 + i * 4 + 2] & 252) | third_part;
        buff[fileSize - 1200 + i * 4 + 3] = (buff[fileSize - 1200 + i * 4 + 3] & 252) | fourth_part;
    }

    file_write = fopen("changed_image.bmp", "wb");

    fwrite(buff, sizeof(char), fileSize, file_write);
    fclose(file_write);

}

int main()
{
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
    changeColor(buff, fileSize);

    writeText(buff, fileSize);

    fclose(file);
    free(buff);

    return 0;
}