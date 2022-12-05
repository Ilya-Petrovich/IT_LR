#include <iostream>

#include <windows.h>

using namespace std;

int main() {

    const int r = 12;

    int l = 0;


    string m[r] = { "   ()()   ",

                      "   ()()   ",

                      "   ()()   ",

                      "   |..|   ",

                      "  \\|  |/  ",

        "  /|UU|\\  ",

        "  --\\/--  ",

        " /  ||  \\ ",

        "/   ||   \\",

        "    /\\    ",

        "    ||    ",

        "   _||_   "

    };



    for (int i = 0; i < r; i++) {

        cout << m[i] << endl;

    }


    while (l < 2) {

        //sleep(700);

        //system("cls");

        m[6][8] = '-';

        m[6][9] = '-';

        m[7][8] = ' ';

        m[8][9] = ' ';


        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[7][1] = ' ';

        m[8][0] = ' ';

        m[6][1] = '-';

        m[7][0] = '/';

        m[6][9] = ' ';

        m[6][9] = ' ';

        m[5][9] = '/';



        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[7][0] = ' ';

        m[8][0] = ' ';

        m[6][9] = ' ';

        m[6][9] = ' ';

        m[6][8] = ' ';

        m[6][1] = ' ';

        m[5][9] = ' ';

        m[7][1] = '/';

        m[8][0] = '/';

        m[5][8] = '/';

        m[4][9] = '/';



        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }

        //sleep(700);

        //system("cls");

        m[6][1] = '-';

        m[8][0] = ' ';

        m[7][1] = ' ';

        m[7][0] = '/';

        m[4][9] = '*';





        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[4][9] = '/';

        m[7][0] = ' ';

        m[6][0] = '-';



        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[4][9] = '*';

        m[6][0] = ' ';

        m[5][0] = '\\';



        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[6][1] = ' ';

        m[4][9] = '/';

        m[5][0] = ' ';

        m[5][1] = '\\';

        m[4][0] = '\\';







        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[4][0] = '*';

        m[4][9] = '*';



        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[4][0] = ' ';

        m[4][9] = ' ';

        m[6][1] = '-';

        m[6][8] = '-';

        m[5][1] = ' ';

        m[5][8] = ' ';

        m[5][0] = '*';

        m[5][9] = '*';







        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[5][0] = ' ';

        m[5][9] = ' ';

        m[6][0] = '*';

        m[6][9] = '*';


        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[6][0] = ' ';

        m[6][9] = ' ';

        m[7][0] = '*';

        m[7][9] = '*';




        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[6][1] = ' ';

        m[6][8] = ' ';

        m[7][1] = '/';

        m[8][0] = '*';

        m[7][0] = ' ';

        m[7][9] = ' ';

        m[7][8] = '\\';

        m[8][9] = '*';


        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }


        //sleep(700);

        //system("cls");

        m[8][0] = '/';

        m[8][9] = '\\';



        for (int i = 0; i < r; i++) {

            cout << m[i] << endl;

        }

        l++;

    }

}