#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;

void readText (char *buff, long fileSize);

int main () {
	
	FILE *file;
	file = fopen ("image.bmp", "rb");
	cout << " - " << char(0) << endl;
	long fileSize;
	fseek (file, 0, SEEK_END); // ������� � ����� ������ ������ �����.
	fileSize = ftell (file);
	rewind (file); // ������������� � ������ ������, ����� ���� �������� � fseek (file, 0, SEEK_SET); �� rewind ������.
	char *buff = new char [fileSize];
	fread (buff, sizeof (char), fileSize, file);
	readText (buff, fileSize);
	fclose (file);
	free (buff);
	
	return 0;
}

void readText (char *buff, long fileSize) {
	for (int i = 138; i < fileSize; i += 4) {
		int s = 0;
		for (int q = 0; q < 4; q ++){
			s <<= 2;
			s |= (buff[i+q] & 3);
		}
		cout << char(s);
	}
	return;
}
