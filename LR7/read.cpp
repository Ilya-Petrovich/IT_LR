#include <iostream>
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// Прототипы функций
void readText(char* buff, long fileSize, FILE* file);


int main() {
	setlocale(LC_ALL, "Russian");
	FILE* file;
	char filename[100];
	std::cin >> filename; // Нужно ввести image.bmp
	file = fopen(filename, "rb");

	//Определение размера файла
	long fileSize;
	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	// Создание нового буфера
	char* buff = new char[fileSize]();

	// Вызываем функцию и выводим тот текст на экран
	readText(buff, fileSize, file);

}


//Сами функции 
void readText(char* buff, long fileSize, FILE* file) {

	//считываем все данные файла в буфер
	fread(buff, sizeof(char), fileSize, file);

	int firstByte;	// first byte - 01001101
	int secondByte;	// second byte - 01001100
	int thirdByte;	// third byte - 11011110
	int fourthByte;
	char unitbyte;


	for (int i = 138; i < fileSize; i += 4) {
		int firstByte = buff[i];	// first byte - 01001101
		int secondByte = buff[i + 1];	// second byte - 01001100
		int thirdByte = buff[i + 2];	// third byte - 11011110
		int fourthByte = buff[i + 3];	// fourth byte - 01001101

		firstByte = buff[i] & 0x3;
		secondByte = buff[i + 1] & 0x3;
		thirdByte = buff[i + 2] & 0x3;
		fourthByte = buff[i + 3] & 0x3;

		unitbyte = (firstByte << 6) | (secondByte << 4) | (thirdByte << 2) | (fourthByte);

		std::cout << unitbyte;
	}
}