#include <iostream>
#include <string>

#include "unistd.h"
using namespace std;


void show(string person1[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << person1[i];
        int main() {

            string pers[14][12];

            pers[0][0] = "   _[]_   ";
            pers[0][1] = "  | ~~ |  ";
            pers[0][2] = "  | oq |  ";
            pers[0][3] = " (| <> |) ";
            pers[0][4] = "  \\ -- /  ";
            pers[0][5] = "   _><_   ";
            pers[0][6] = "  -\\. /-  ";
            pers[0][7] = " / |. | \\ ";
            pers[0][8] = "/  |. |  \\";
            pers[0][9] = "   |__|   ";
            pers[0][10] = "    ||    ";
            pers[0][11] = "   _||_   ";

            pers[1][0] = "   _[]_   ";
            pers[1][1] = "  | ~~ |  ";
            pers[1][2] = "  | oq |  ";
            pers[1][3] = " (| <> |) ";
            pers[1][4] = "  \\ -- /  ";
            pers[1][5] = "   _><_   ";
            pers[1][6] = " --\\. /-- ";
            pers[1][7] = "/  |. |  \\";
            pers[1][8] = "   |. |   ";
            pers[1][9] = "   |__|   ";
            pers[1][10] = "    ||    ";
            pers[1][11] = "   _||_   ";

            pers[2][0] = "   _[]_   ";
            pers[2][1] = "  | ~~ |  ";
            pers[2][2] = "  | oq |  ";
            pers[2][3] = " (| <> |) ";
            pers[2][4] = "  \\ -- /  ";
            pers[2][5] = "   _><_   ";
            pers[2][6] = "  -\\. /---";
            pers[2][7] = " / |. |   ";
            pers[2][8] = "/  |. |   ";
            pers[2][9] = "   |__|   ";
            pers[2][10] = "    ||    ";
            pers[2][11] = "   _||_   ";

            pers[3][0] = "   _[]_   ";
            pers[3][1] = "  | ~~ |  ";
            pers[3][2] = "  | oq |  ";
            pers[3][3] = " (| <> |) ";
            pers[3][4] = "  \\ -- /  ";
            pers[3][5] = "   _><_  /";
            pers[3][6] = " --\\. /-- ";
            pers[3][7] = "/  |. |   ";
            pers[3][8] = "   |. |   ";
            pers[3][9] = "   |__|   ";
            pers[3][10] = "    ||    ";
            pers[3][11] = "   _||_   ";

            pers[4][0] = "   _[]_   ";
            pers[4][1] = "  | ~~ |  ";
            pers[4][2] = "  | oq |  ";
            pers[4][3] = " (| <> |) ";
            pers[4][4] = "  \\ -- / /";
            pers[4][5] = "   _><_ / ";
            pers[4][6] = " /-\\. /- ";
            pers[4][7] = "/  |. |   ";
            pers[4][8] = "   |. |   ";
            pers[4][9] = "   |__|   ";
            pers[4][10] = "    ||    ";
            pers[4][11] = "   _||_   ";

            pers[5][0] = "   _[]_   ";
            pers[5][1] = "  | ~~ |  ";
            pers[5][2] = "  | oq |  ";
            pers[5][3] = " (| <> |) ";
            pers[5][4] = "  \\ -- / *";
            pers[5][5] = "   _><_ / ";
            pers[5][6] = " --\\. /-  ";
            pers[5][7] = "/  |. |   ";
            pers[5][8] = "   |. |   ";
            pers[5][9] = "   |__|   ";
            pers[5][10] = "    ||    ";
            pers[5][11] = "   _||_   ";

            pers[6][0] = "   _[]_   ";
            pers[6][1] = "  | ~~ |  ";
            pers[6][2] = "  | oq |  ";
            pers[6][3] = " (| <> |) ";
            pers[6][4] = "  \\ -- / /";
            pers[6][5] = "   _><_ / ";
            pers[6][6] = "---\\. /-  ";
            pers[6][7] = "   |. |   ";
            pers[6][8] = "   |. |   ";
            pers[6][9] = "   |__|   ";
            pers[6][10] = "    ||    ";
            pers[6][11] = "   _||_   ";

            pers[7][0] = "   _[]_   ";
            pers[7][1] = "  | ~~ |  ";
            pers[7][2] = "  | oq |  ";
            pers[7][3] = " (| <> |) ";
            pers[7][4] = "  \\ -- / *";
            pers[7][5] = "\\  _><_ / ";
            pers[7][6] = " --\\. /-  ";
            pers[7][7] = "   |. |   ";
            pers[7][8] = "   |. |   ";
            pers[7][9] = "   |__|   ";
            pers[7][10] = "    ||    ";
            pers[7][11] = "   _||_   ";

            pers[8][0] = "   _[]_   ";
            pers[8][1] = "  | ~~ |  ";
            pers[8][2] = "  | oq |  ";
            pers[8][3] = " (| <> |) ";
            pers[8][4] = "\\ \\ -- / /";
            pers[8][5] = " \\ _><_ / ";
            pers[8][6] = "  -\\. /-  ";
            pers[8][7] = "   |. |   ";
            pers[8][8] = "   |. |   ";
            pers[8][9] = "   |__|   ";
            pers[8][10] = "    ||    ";
            pers[8][11] = "   _||_   ";

            pers[9][0] = "   _[]_   ";
            pers[9][1] = "  | ~~ |  ";
            pers[9][2] = "  | oq |  ";
            pers[9][3] = " (| <> |) ";
            pers[9][4] = "* \\ -- / *";
            pers[9][5] = " \\ _><_ / ";
            pers[9][6] = "  -\\. /-  ";
            pers[9][7] = "   |. |   ";
            pers[9][8] = "   |. |   ";
            pers[9][9] = "   |__|   ";
            pers[9][10] = "    ||    ";
            pers[9][11] = "   _||_   ";

            pers[10][0] = "   _[]_   ";
            pers[10][1] = "  | ~~ |  ";
            pers[10][2] = "  | oq |  ";
            pers[10][3] = " (| <> |) ";
            pers[10][4] = "  \\ -- /  ";
            pers[10][5] = "*  _><_  *";
            pers[10][6] = " --\\. /-- ";
            pers[10][7] = "   |. |   ";
            pers[10][8] = "   |. |   ";
            pers[10][9] = "   |__|   ";
            pers[10][10] = "    ||    ";
            pers[10][11] = "   _||_   ";

            pers[11][0] = "   _[]_   ";
            pers[11][1] = "  | ~~ |  ";
            pers[11][2] = "  | oq |  ";
            pers[11][3] = " (| <> |) ";
            pers[11][4] = "  \\ -- /  ";
            pers[11][5] = "   _><_   ";
            pers[11][6] = "*--\\. /--*";
            pers[11][7] = "   |. |   ";
            pers[11][8] = "   |. |   ";
            pers[11][9] = "   |__|   ";
            pers[11][10] = "    ||    ";
            pers[11][11] = "   _||_   ";

            pers[12][0] = "   _[]_   ";
            pers[12][1] = "  | ~~ |  ";
            pers[12][2] = "  | oq |  ";
            pers[12][3] = " (| <> |) ";
            pers[12][4] = "  \\ -- /  ";
            pers[12][5] = "   _><_   ";
            pers[12][6] = " --\\. /-- ";
            pers[12][7] = "*  |. |  *";
            pers[12][8] = "   |. |   ";
            pers[12][9] = "   |__|   ";
            pers[12][10] = "    ||    ";
            pers[12][11] = "   _||_   ";

            pers[13][0] = "   _[]_   ";
            pers[13][1] = "  | ~~ |  ";
            pers[13][2] = "  | oq |  ";
            pers[13][3] = " (| <> |) ";
            pers[13][4] = "  \\ -- /  ";
            pers[13][5] = "   _><_   ";
            pers[13][6] = "  -\\. /-  ";
            pers[13][7] = " / |. | \\ ";
            pers[13][8] = "*  |. |  *";
            pers[13][9] = "   |__|   ";
            pers[13][10] = "    ||    ";
            pers[13][11] = "   _||_   ";

            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 14; j++) {
                    for (int g = 0; g < 12; g++) {
                        cout << pers[j][g] << "\n";
                    }
                    //Sleep(200);
                    //system("cls");
                }
            }
            for (int i = 0; i < 12; i++) {
                cout << pers[0][i] << "\n";
            }
        }

        void dance(string person1[], const int size) {
            //frame 1
            show(person1, size);

            // frame 2
            person1[6] = " --\\. /-- \n";
            person1[7] = "/  |. |  \\\n";
            person1[8] = "   |. |   \n";

            show(person1, size);


            // frame 3
            person1[6] = "  -\\. /---\n";
            person1[7] = " / |. |   \n";
            person1[8] = "/  |. |   \n";

            show(person1, size);;




            // frame 4
            person1[5] = "   _><_  /\n";
            person1[6] = " --\\. /-- \n";
            person1[7] = "/  |. |   \n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            // frame 5
            person1[4] = "   \\--/  /\n";
            person1[5] = "   _><_ / \n";
            person1[6] = "  -\\. /- \n";
            person1[7] = " / |. |   \n";
            person1[8] = "/  |. |   \n";

            show(person1, size);;




            // frame 6
            person1[4] = "   \\--/  *\n";
            person1[5] = "   _><_ / \n";
            person1[6] = " --\\. /- \n";
            person1[7] = "/  |. |   \n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            // frame 7
            person1[4] = "   \\--/  /\n";
            person1[5] = "   _><_ / \n";
            person1[6] = "---\\. /-  \n";
            person1[7] = "   |. |   \n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            //frame 8
            person1[4] = "   \\--/  *\n";
            person1[5] = "\\  _><_ / \n";
            person1[6] = " --\\. /-  \n";
            person1[7] = "   |. |   \n";

            show(person1, size);;




            //frame 9
            person1[4] = "\\  \\--/  /\n";
            person1[5] = " \\ _><_ / \n";
            person1[6] = "  -\\. /-  \n";

            show(person1, size);;




            //frame 10
            person1[4] = "*  \\--/  *\n";

            show(person1, size);;




            //frame 11
            person1[4] = "   \\--/   \n";
            person1[5] = "*  _><_  *\n";
            person1[6] = " --\\. /-- \n";

            show(person1, size);;




            //frame 12
            person1[5] = "   _><_   \n";
            person1[6] = "*--\\. /--*\n";

            show(person1, size);;




            //frame 13
            person1[6] = " --\\. /-- \n";
            person1[7] = "*  |. |  *\n";

            show(person1, size);;




            //frame 14
            person1[6] = "  -\\. /-  \n";
            person1[7] = " / |. | \\ \n";
            person1[8] = "*  |. |  *\n";

            show(person1, size);;




            //frame 15
            person1[8] = "/  |. |  \\\n";

            show(person1, size);;




            // frame 16
            person1[6] = " --\\. /-- \n";
            person1[7] = "/  |. |  \\\n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            // frame 17
            person1[6] = "  -\\. /---\n";
            person1[7] = " / |. |   \n";
            person1[8] = "/  |. |   \n";

            show(person1, size);;



            // frame 18
            person1[5] = "   _><_  /\n";
            person1[6] = " --\\. /-- \n";
            person1[7] = "/  |. |   \n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            // frame 19
            person1[4] = "   \\--/  /\n";
            person1[5] = "   _><_ / \n";
            person1[6] = "  -\\. /- \n";
            person1[7] = " / |. |   \n";
            person1[8] = "/  |. |   \n";

            show(person1, size);;




            // frame 20
            person1[4] = "   \\--/  *\n";
            person1[5] = "   _><_ / \n";
            person1[6] = " --\\. /- \n";
            person1[7] = "/  |. |   \n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            // frame 21
            person1[4] = "   \\--/  /\n";
            person1[5] = "   _><_ / \n";
            person1[6] = "---\\. /-  \n";
            person1[7] = "   |. |   \n";
            person1[8] = "   |. |   \n";

            show(person1, size);;




            //frame 22
            person1[4] = "   \\--/  *\n";
            person1[5] = "\\  _><_ / \n";
            person1[6] = " --\\. /-  \n";
            person1[7] = "   |. |   \n";

            show(person1, size);;




            //frame 23
            person1[4] = "\\  \\--/  /\n";
            person1[5] = " \\ _><_ / \n";
            person1[6] = "  -\\. /-  \n";

            show(person1, size);;




            //frame 24
            person1[4] = "*  \\--/  *\n";

            show(person1, size);;




            //frame 25
            person1[4] = "   \\--/   \n";
            person1[5] = "*  _><_  *\n";
            person1[6] = " --\\. /-- \n";

            show(person1, size);;




            //frame 26
            person1[5] = "   _><_   \n";
            person1[6] = "*--\\. /--*\n";

            show(person1, size);;




            //frame 27
            person1[6] = " --\\. /-- \n";
            person1[7] = "*  |. |  *\n";

            show(person1, size);;




            //frame 28
            person1[6] = "  -\\. /-  \n";
            person1[7] = " / |. | \\ \n";
            person1[8] = "*  |. |  *\n";

            show(person1, size);;




            //frame 29
            person1[8] = "/  |. |  \\\n";

            show(person1, size);;
        }






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
            dance(person1, size);
            return 0;
        }