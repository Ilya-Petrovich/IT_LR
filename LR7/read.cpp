#include <stdio.h>
#include <iostream>

using namespace std;

void ReadText(char* buff, long fSize);

int main() {
    FILE* file;
    char filename[100];
    cout << "Input file name"; cin >> filename;
    file = fopen(filename, "rb");

    long fSize;
    fseek(file, 0, SEEK_END);
    fSize = ftell(file);
    rewind(file);

    char* buff = new char[fSize]();
    fread(buff, 1, fSize, file);
    ReadText(buff, fSize);

    fclose(file);
    free(buff);
    return 0;
}

void ReadText(char* buff, long fSize) {
    int i = fSize - 1200;

    while (i < fSize) {
        int first_byte = buff[i] & 3;
        int second_byte = buff[i + 1] & 3;
        int third_byte = buff[i + 2] & 3;
        int fourth_byte = buff[i + 3] & 3;
        cout << (char)((first_byte << 6) | (second_byte << 4) | (third_byte << 2) | fourth_byte);
        i += 4;
    }
}
