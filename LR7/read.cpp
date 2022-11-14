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
	fseek (file, 0, SEEK_END); // переход в конец потока данных файла.
	fileSize = ftell (file);
	rewind (file); // ѕеребрасывает в начало потока, можно было написать и fseek (file, 0, SEEK_SET); но rewind короче.
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
