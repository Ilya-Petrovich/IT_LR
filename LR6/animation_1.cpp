#include <iostream>
using namespace std;
struct Student1 {
	char surname[256];
	int number;
	char fac[256];
	int square;
};
struct Student2 {
	char fac[256];
	int number;
};
void initstruct1(Student1& a);
void initstruct2(Student2& a1, Student1 a);
int main() {
	setlocale(LC_ALL, "Rus");
	Student1 a; Student2 b = {};
	initstruct1(a);
	initstruct2(b,a);
	cout << b.fac << endl;
	cout << b.number << endl;
	return 0;
}
void initstruct1(Student1& a) {
	cout << "¬ведите фамилию: "; cin >> a.surname;
	cout << "¬ведите кол-во студентов: "; cin >> a.number;
	cout << "¬ведите факультет: "; cin >> a.fac;
	cout << "¬ведите площадь: "; cin >> a.square;
}
void initstruct2(Student2& a1, Student1 a) {
	strcpy_s(a1.fac, a.fac);
	a1.number = a.number;
}