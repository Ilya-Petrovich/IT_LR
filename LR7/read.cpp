#include <iostream>
#include <stdio.h>

using namespace std;


void ReadText(char* buff, long fSize) {
  int sizeOfStart = fSize - 1200;
  while (sizeOfStart < fSize) {
    int firstByte = buff[sizeOfStart] & 3;
    int secondByte = buff[sizeOfStart + 1] & 3;
    int thirdByte = buff[sizeOfStart + 2] & 3;
    int fourthByte = buff[sizeOfStart + 3] & 3;
    cout << (char) ((firstByte << 6) | (secondByte << 4) | (thirdByte << 2) | fourthByte);
    sizeOfStart += 4;
  }
}

int main() {
  char* buff; long fSize;
  FILE* file;
  file = fopen("image.bmp", "rb");

  fseek(file, 0, SEEK_END);
  fSize = ftell(file);
  rewind(file);
  buff = new char[fSize]();
  fread(buff, fSize, 1, file);
  ReadText(buff, fSize);
  fclose(file);
  return 0;
}
