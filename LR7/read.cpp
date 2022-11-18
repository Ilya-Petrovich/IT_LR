// NUM1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include <iostream>
#include <bitset>

using namespace std;
void readText(char* buff, long fileSize, FILE* file) {

	fread(buff, sizeof(char), fileSize, file);

	for (size_t i = fileSize - 20 * 20 * 3; i < 138+83*4; i+=4)
	{
		char united_byte = 0;

		char firstByte= buff[i] & 3;
		char secondByte = buff[i+1] & 3;
		char thirdByte = buff[i+2] & 3;
		char fourthByte = buff[i+3] & 3;

		united_byte |= firstByte << 6;
		united_byte |= secondByte << 4;
		united_byte |= thirdByte << 2;
		united_byte |= fourthByte;

		cout << united_byte;
	}

	/*cout << endl;

	for (size_t i = fileSize - 20 * 20 * 3; i < fileSize; i ++)
	{
		cout << bitset<8> (buff[i]) << " ";
	}*/

	fclose(file);

	free(buff);
}



int main()
{
	FILE* file;

	long fileSize;

	file = fopen("image.bmp", "rb");

	fseek(file, 0, SEEK_END);
	fileSize = ftell(file);
	rewind(file);

	char* buff = new char[fileSize]();

	readText(buff, fileSize, file);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
