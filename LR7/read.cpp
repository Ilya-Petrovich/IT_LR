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

    fclose(file);
    free(buff);

    return 0;
}