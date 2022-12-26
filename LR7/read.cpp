#include <iostream>
#include <stdio.h>
#include <bitset>

using namespace std;

void readText(char* buff, long fileSize);
int main()
{
    FILE* file;
    char filename[100];
    cin >> filename; 

    file = fopen(filename, "rb");
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    rewind(file);

    char* buff = new char[fileSize]();
    fread(buff, sizeof(char), fileSize, file);
    //readText(buff, fileSize);
    int size_f = fileSize - 20 * 20 * 3;

    /*bitset<8> x(int(buff[size_f]));
    cout << x << endl;
    cout << bitset<8> ((int(buff[size_f]) & 0x3) << 6) << endl;
    */

    for (int i = size_f; i < fileSize - 3; i+= 4){
        char res;
        res = ((buff[i] & 0x3) << 6) | ((buff[i + 1] & 0x3) << 4) | ((buff[i+2] & 0x3) << 2) | (buff[i+3] & 0x3);
        cout << res ;
    }



    fclose(file);
    free(buff);
}

void readText(char* buff, long fileSize) {
    for (int i = 0; i < fileSize; i++) {
        cout << buff[i];
    }
}