#include <stdio.h>
#include <iostream>

using namespace std;
void readText(char* buff, long fileSize);

int main() {
    FILE* file;
    file = fopen("image.bmp", "rb");
    long fileSize;
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);
    rewind(file);
    char* buff = new char[fileSize]();
    fread(buff, sizeof(char), fileSize, file);
    readText(buff, fileSize);
    fclose(file); 
    free(buff);
}

void readText(char* buff, long fileSize){
    int first_b, second_b, third_b, fourth_b;
    char united_byte;
    for (int i = (fileSize - 20 * 20 * 3); i < 512; i += 4){
    first_b = buff[i] & 3;
    second_b = buff[i+1] & 3;
    third_b = buff[i+2] & 3;
    fourth_b = buff[i+3] & 3;
    united_byte = (first_b << 6) | (second_b << 4) | (third_b << 2) | fourth_b;
    cout << united_byte;
    }
}

