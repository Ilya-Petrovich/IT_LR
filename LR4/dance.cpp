#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
const int size = 12;
string person1[size];
person1[0] = "   _[]_   \n";
person1[1] = "   |~~|   \n";
person1[2] = "   |oq|   \n";
person1[3] = "  (|<>|)  \n";
person1[4] = "   \\--/   \n";
person1[5] = "   _><_   \n";
person1[6] = "  -\\. /-  \n";
person1[7] = " / |. | \\ \n";
person1[8] = "/  |. |  \\\n";
person1[9] = "   |__|   \n";
person1[10] = "    ||    \n";
person1[11] = "   _||_   \n";
for (int i = 0; i < size; i++) {
cout << person1[i];
}
Sleep(500);
system("cls");

person1[6] = " --\\. /-- \n";
person1[7] = "/  |. |  \\\n";
person1[8] = "   |. |   \n";
for (int i = 0; i < size; i++) {
cout << person1[i];
}
Sleep(500);
system("cls");

person1[6] = "  -\\. /---\n";
person1[7] = " / |. |   \n";-
person1[8] = "/  |. |   \n";
for (int i = 0; i < size; i++) {
cout << person1[i];
}
Sleep(500);
system("cls");

person1[5] = "   _><_  /\n";
person1[6] = " --\\. /-- \n";
person1[7] = "/  |. |   \n";
person1[8] = "   |. |   \n";
for (int i = 0; i < size; i++) {
cout << person1[i];
}
Sleep(500);
system("cls");

person1[4] = "   \\--/  /\n";
person1[5] = "   _><_ / \n";
person1[6] = "  -\\. /- \n";
person1[7] = " / |. |   \n";
person1[8] = "/  |. |   \n";
for (int i = 0; i < size; i++) {
cout << person1[i];
}
Sleep(500);
system("cls");

person1[4] = "   \\--/  *\n";
person1[5] = "   _><_ / \n";
person1[6] = " --\\. /- \n";
person1[7] = "/  |. |   \n";
person1[8] = "   |. |   \n";
for (int i = 0; i < size; i++) {
cout << person1[i];
}
Sleep(500);
system("cls");
return 0;
}
