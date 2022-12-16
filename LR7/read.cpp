#include <stdio.h>
#include <iostream>

void ChangeColor(char* buff, long fSize);

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

    fwrite(buff, fSize, 1, file);

    fclose(file);
    free(buff);
}

void ChangeColor(char* buff, long fSize) {
    std::cout << std::endl << std::endl << std::endl;
    for (int i = 138; i < fSize;) {
        buff[i] = 140;
        buff[i+1] = 230;
        buff[i+2] = 240;
        i += 3;
    }
}
