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
} 
 
void ReadText(char* buff, long fSize) { 
    int i = fSize - 1200, first_byte, second_byte, third_byte, fourth_byte; 
 
    while (i < fSize) { 
        first_byte = buff[i] & 3; 
        second_byte = buff[i + 1] & 3; 
        third_byte = buff[i + 2] & 3; 
        fourth_byte = buff[i + 3] & 3; 
        cout << (char)((first_byte << 6) | (second_byte << 4) | (third_byte << 2) | fourth_byte); 
        i += 4; 
    } 
}