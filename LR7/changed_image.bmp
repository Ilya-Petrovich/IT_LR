#include <stdio.h>
#include <iostream>

using namespace std;

void ChangeColor(char* buff, long fSize);
void WriteText(char* buff, long fSize);

int main() {
    FILE* file;

    char filename[100];
    cin >> filename;

    file = fopen(filename, "rb");
    long fSize;
    fseek(file, 0, SEEK_END);
    fSize = ftell(file);
    rewind(file);

    char* buff = new char[fSize]();
    fread(buff, 1, fSize, file);
    fclose(file);

    cin >> filename;
    file = fopen(filename, "wb");

    ChangeColor(buff, fSize);
    WriteText(buff, fSize);

    fwrite(buff, fSize, 1, file);

    fclose(file);

    free(buff);
}

void ChangeColor(char* buff, long fSize) {
    cout << endl << endl << endl;
    for (int i = 138; i < fSize;) {
        buff[i] = 113 & 0xfc;
        buff[i + 1] = 179 & 0xfc;
        buff[i + 2] = 60 & 0xfc;
        i += 3;
    }
}
void WriteText(char* buff, long fSize) {
    string text = "PI-2-22-3";
    int start_of_byte = fSize - 1200;
    string::iterator it = text.begin();
    for (string::iterator it = text.begin(); it != text.end(); ++it) {
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
