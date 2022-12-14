#include <unistd.h>
#include <iostream>
#include <string>
#include <vector>

void menu(int &a);
// void rmFrame();
void head(); void legs(); void body();
void dance(); void run(); void jump(); void up(); void down(); void start_jump();
void moveLR(std::string move_left, std::string move_right);
void throw_ball();

int main() {
    int choice = 0;
    // rmFrame();
    while (choice != 5) {
        switch (choice) {
            case 1: { dance(); break;}
            case 2: { run(); break;}
            case 3: { jump(); break;}
            case 4: { throw_ball(); break;}
        }
        menu(choice);
    }
    return 0;
}

void menu(int &a){
    std::cout << "Choose animation:" << std::endl;
    std::cout << "Dance: \t\t\t1" << std::endl;
    std::cout << "Run: \t\t\t2" << std::endl;
    std::cout << "Sit down and jump: \t3" << std::endl;
    std::cout << "Throw a ball: \t\t4" << std::endl << std::endl;
    std::cout << "Enter 5 for exit." << std::endl;
    std::cin >> a;
}

// void rmFrame() { system("cls");
// }

void head() {
    std::cout << "*   ()()                               *\n";
    std::cout << "*   ()()                               *\n";
    std::cout << "*   ()()                               *\n";
    std::cout << "*   |..|                               *\n";
}

void legs() {
    std::cout << "*    /\\                                *\n";
    std::cout << "*    ||                                *\n";
    std::cout << "*   _||_                               *\n";
}

void body() {
    std::cout << "*" << "   ()()                               *\n";
    std::cout << "*" << "   ()()                               *\n";
    std::cout << "*" << "   ()()                               *\n";
    std::cout << "*" << "   |..|                               *\n";
    std::cout << "*" << "  \\|  |/                              *\n"; 
    std::cout << "*" << "  /|UU|\\                              *\n";
    std::cout << "*" << "  --\\/--                              *\n"; 
    std::cout << "*" << " /  ||  \\                             *\n"; 
    std::cout << "*" << "/   ||   \\                            *\n"; 
} 

void dance() {
    for (int k = 0; k <= 28; k++) {
        // rmFrame();
        std::cout << std::string(40, '*') << '\n';
        for (int i = 0; i < 6; i++) { std::cout << "*                                      *\n";} 
        head();
        switch (k%14) {
            case 0: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\                              *\n";
                std::cout << "*  --\\/--                              *\n";
                std::cout << "* /  ||  \\                             *\n";
                std::cout << "*/   ||   \\                            *\n";break;}
            case 1: {
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\                              *\n";
                std::cout << "* ---\\/---                             *\n";
                std::cout << "*/   ||   \\                            *\n";
                std::cout << "*    ||                                *\n";break;}
            case 2: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\                              *\n";
                std::cout << "*  --\\/----                            *\n";
                std::cout << "* /  ||                                *\n";
                std::cout << "*/   ||                                *\n"; break;}
            case 3: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\ /                            *\n";
                std::cout << "* ---\\/---                             *\n";
                std::cout << "*/   ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 4: { 
                std::cout << "*  \\|  |/ /                            *\n";
                std::cout << "*  /|UU|\\/                             *\n";
                std::cout << "*  --\\/--                              *\n";
                std::cout << "* /  ||                                *\n";
                std::cout << "*/   ||                                *\n"; break;}
            case 5: { 
                std::cout << "*  \\|  |/ *                            *\n";
                std::cout << "*  /|UU|\\/                             *\n";
                std::cout << "* ---\\/--                              *\n";
                std::cout << "*/   ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 6: { 
                std::cout << "*  \\|  |/ /                            *\n";
                std::cout << "*  /|UU|\\/                             *\n";
                std::cout << "*----\\/--                              *\n";
                std::cout << "*    ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 7: { 
                std::cout << "*  \\|  |/ *                            *\n";
                std::cout << "*\\ /|UU|\\/                             *\n";
                std::cout << "* ---\\/--                              *\n";
                std::cout << "*    ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 8: { 
                std::cout << "*\\ \\|  |/ /                            *\n";
                std::cout << "* \\/|UU|\\/                             *\n";
                std::cout << "*  --\\/--                              *\n";
                std::cout << "*    ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 9: { 
                std::cout << "** \\|  |/ *                            *\n";
                std::cout << "* \\/|UU|\\/                             *\n";
                std::cout << "*  --\\/--                              *\n";
                std::cout << "*    ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 10: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "** /|UU|\\ *                            *\n";
                std::cout << "* ---\\/---                             *\n";
                std::cout << "*    ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 11: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\                              *\n";
                std::cout << "**---\\/---*                            *\n";
                std::cout << "*    ||                                *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 12: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\                              *\n";
                std::cout << "* ---\\/---                             *\n";
                std::cout << "**   ||   *                            *\n";
                std::cout << "*    ||                                *\n"; break;}
            case 13: { 
                std::cout << "*  \\|  |/                              *\n";
                std::cout << "*  /|UU|\\                              *\n";
                std::cout << "*  --\\/--                              *\n";
                std::cout << "* /  ||  \\                             *\n";
                std::cout << "**   ||   *                            *\n"; break;}
        }
           
        legs();
        std::cout << std::string(40, '*') << '\n';
        // Sleep(300);
        // rmFrame();
    }
}

void run() {
    for (int i = 0, j = 28; i <= 28; i++, j--) {
        std::string move_right = std::string(i, ' ');
        std::string move_left = std::string(j, ' ');
        int k = 0;
        if (i == 0) {k = 1;}
        for (; k < 3; k++) {
            moveLR(move_right, move_left);
            switch (k) {
                case 0: {
                    std::cout << "*" << move_right << "   / |   " << move_left << " *\n";
                    std::cout << "*" << move_right << " _/  |_   " << move_left << "*\n";
                    std::cout << std::string(40, '*') << '\n'; 
                    // Sleep(150); rmFrame(); 
                    break;
                }
                case 1: {
                    std::cout << "*" << move_right << "    ||    " << move_left << "*\n";
                    std::cout << "*" << move_right << "   _||_   " << move_left << "*\n";
                    std::cout << std::string(40, '*') << '\n'; 
                    // Sleep(150); rmFrame(); 
                    break;
                }
                case 2: {
                    std::cout << "*" << move_right << "    | \\   " << move_left << "*\n";
                    std::cout << "*" << move_right << "   _|  \\_   " << move_left << "\b\b*\n";
                    std::cout << std::string(40, '*') << '\n'; 
                    // Sleep(150); rmFrame(); 
                    break;
                }
            }
        }
    }

    for (int i = 1, j = 27; i <= 28; i++, j--) {
        std::string move_right = std::string(j, ' ');
        std::string move_left = std::string(i, ' ');
        int k = 0;
        if (j == 0) {
            moveLR(move_right, move_left);
            std::cout << "*" << move_right << "    ||    " << move_left << "*\n";
            std::cout << "*" << move_right << "   _||_   " << move_left << "*\n";
            std::cout << std::string(40, '*') << '\n'; /*Sleep(150); rmFrame();*/ break;
        }
        for (; k < 3; k++) {
            moveLR(move_right, move_left);
            switch (k) {
                case 0: {
                    std::cout << "*" << move_right << "   / |   " << move_left << " *\n";
                    std::cout << "*" << move_right << " _/  |_   " << move_left << "*\n";
                    std::cout << std::string(40, '*') << '\n'; 
                   // Sleep(150);
                    //rmFrame();
                    break;
                }
                case 1: {
                    std::cout << "*" << move_right << "    ||    " << move_left << "*\n";
                    std::cout << "*" << move_right << "   _||_   " << move_left << "*\n";
                    std::cout << std::string(40, '*') << '\n'; 
                    //Sleep(150);
                    //rmFrame();
                    break;
                }
                case 2: {
                    std::cout << "*" << move_right << "    | \\   " << move_left << "*\n";
                    std::cout << "*" << move_right << "   _|  \\_   " << move_left << "\b\b*\n";
                    std::cout << std::string(40, '*') << '\n';
                    //Sleep(150);
                    //rmFrame();
                    break;
                }
            }
        }
    }
}

void moveLR(std::string move_left, std::string move_right) {
    std::cout << std::string(40, '*') << '\n';
    for (int i = 0; i < 6; i++) { std::cout << "*                                      *\n";}
    std::cout << "*" << move_left << "   ()()   " << move_right << "*\n";
    std::cout << "*" << move_left << "   ()()   " << move_right << "*\n";
    std::cout << "*" << move_left << "   ()()   " << move_right << "*\n";
    std::cout << "*" << move_left << "   |..|   " << move_right << "*\n";
    std::cout << "*" << move_left << "   |  |   " << move_right << "*\n"; 
    std::cout << "*" << move_left << "   |UU|   " << move_right << "*\n";
    std::cout << "*" << move_left << "  --\\/--  " << move_right << "*\n"; 
    std::cout << "*" << move_left << " /  ||  \\ " << move_right << "*\n"; 
    std::cout << "*" << move_left << "/   ||   \\" << move_right << "*\n";
    std::cout << "*" << move_left << "    /\\    " << move_right << "*\n";
}

void jump() { start_jump(); up(); down(); start_jump();}
void up() {
    for (int i = 7, k = 0; i >= 2; i--, k++) {
        // rmFrame();
        std::cout << std::string(40, '*') << '\n';
        for (int l = i; l > 0; l--) {std::cout << '*' << std::string(38, ' ') << "*\n";}
        body();
        std::cout << "*" << "    /\\                                *\n";
        if (i == 7) {
            std::cout << "*   _\\/_                               *\n";
            std::cout << std::string(40, '*') << '\n';
        } else {
            std::cout << "*    ||                                *\n";
            std::cout << "*    ||                                *\n";
            for (int j = k - 1; j > 0; j--) {std::cout << '*' << std::string(38, ' ') << "*\n";}
            std::cout << std::string(40, '*') << '\n'; 
        }
        //Sleep(1000); if (i == 2) { Sleep(200); }
    }
    //rmFrame();
}

void down() {
    for (int i = 2, k = 3; i <= 6; i++, k--) {
        //rmFrame(); 
        std::cout << std::string(40, '*') << '\n';
        for (int l = i; l > 0; l--) {std::cout << '*' << std::string(38, ' ') << "*\n";} body();
        std::cout << "*" << "    /\\                                *\n";
        if (i == 6) {
            std::cout << "*   _\\/_                               *\n";
            std::cout << std::string(40, '*') << '\n';
        } else {
            std::cout << "*    ||                                *\n";
            std::cout << "*    ||                                *\n";
            for (int j = k; j > 0; j--) {std::cout << '*' << std::string(38, ' ') << "*\n";}
            std::cout << std::string(40, '*') << '\n'; 
        }
        //Sleep(1000);
    }
    //rmFrame();
}
void start_jump() { 
    //rmFrame(); 
    std::cout << std::string(40, '*') << '\n';
    for (int i = 0; i < 5; i++) { std::cout << "*                                      *\n";}
    body();
    legs();
    std::cout << std::string(40, '*') << '\n';
    //Sleep(1000);
    //rmFrame();
}

void throw_ball() {
    std::string mass[] = {
/*0*/                    std::string(40, '*') + '\n',
/*1*/                    '*' + std::string(38, ' ') + "*\n",
/*2*/                    '*' + std::string(38, ' ') + "*\n",
/*3*/                    '*' + std::string(38, ' ') + "*\n",
/*4*/                    '*' + std::string(38, ' ') + "*\n",
/*5*/                    '*' + std::string(38, ' ') + "*\n",
/*6*/                    '*' + std::string(38, ' ') + "*\n",
/*7*/                     "*   ()()                               *\n",
/*8*/                     "*   ()()                               *\n",
/*9*/                     "*   ()()                               *\n",
/*10*/                    "*   |..|                               *\n",
/*11*/                    "*  \\|  |/                              *\n",
/*12*/                    "*  /|UU|\\                              *\n",
/*13*/                    "*  --\\/--                              *\n",
/*14*/                    "* /  ||  \\                             *\n",
/*15*/                    "*/   ||   \\                            *\n",
/*16*/                    "*    \\/                                *\n",
/*17*/                    "*    ||                                *\n",
/*18*/                    "*   _||_                               *\n",
/*19*/                    std::string(40, '*') + '\n'
    };
    for (int k = 0; k < 26; k++) {
        switch (k%26) {
            case 0: { break;}
            case 1: { 
                mass[14] = "* /  ||  \\o                            *\n";
                mass[15] = "*/   ||   -                            *\n";
                break;
            }
            case 2: { 
                mass[13] = "*  --\\/-- o                            *\n";
                mass[14] = "* /  ||  \\-                            *\n";
                mass[15] = "*/   ||                                *\n";
                break;
            }
            case 3: { 
                mass[12] = "*  /|UU|\\ o                            *\n";
                mass[13] = "*  --\\/----                            *\n";
                mass[14] = "* /  ||                                *\n";
                break;
            }
            case 4: {
                mass[11] = "*  \\|  |/ o                            *\n";
                mass[12] = "*  /|UU|\\                              *\n";
                mass[13] = "*  --\\/---/                            *\n";
                break; 
            }
            case 5: { 
                mass[10] = "*   |..|  o                            *\n";
                mass[11] = "*  \\|  |/                              *\n";
                mass[13] = "*  --\\/----                            *\n";
                break; 
            }
            case 6: {
                mass[9] =  "*   ()()  o                            *\n";
                mass[10] = "*   |..|                               *\n";
                mass[13] = "*  --\\/---                             *\n";
                mass[14] = "* /  ||   \\                            *\n";
                break; 
            }
            case 7: { 
                mass[8] =  "*   ()()  o                            *\n";
                mass[9] =  "*   ()()                               *\n";
                mass[13] = "*  --\\/--                              *\n";
                mass[14] = "* /  ||  \\                             *\n";
                mass[15] = "*/   ||   \\                            *\n";
                break; 
            }
            case 8: { 
                mass[7] =  "*   ()()  o                            *\n"; 
                mass[8] =  "*   ()()                               *\n";
                break; 
            }
            case 9: { 
                mass[6] = "*        o                             *\n";
                mass[7] = "*   ()()                               *\n";
                break; 
            }
            case 10: {
                mass[5] = "*       o                              *\n";
                mass[6] = '*' + std::string(38, ' ') + "*\n";
                break;
            }
            case 11: {
                mass[4] = "*      o                               *\n";
                mass[5] = '*' + std::string(38, ' ') + "*\n";
                break;
            }
            case 12: {
                mass[3] = "*     o                                *\n";
                mass[4] = '*' + std::string(38, ' ') + "*\n";
                break;
            }
            case 13: {
                mass[3] = "*    o                                 *\n";
                break;
            }
            case 14: {
                mass[3] = '*' + std::string(38, ' ') + "*\n";
                mass[4] = "*   o                                  *\n";
                break;
            }
            case 15: {
                mass[4] = '*' + std::string(38, ' ') + "*\n";
                mass[5] = "*  o                                   *\n";
                break;
            }
            case 16: {
                mass[5] = '*' + std::string(38, ' ') + "*\n";
                mass[6] = "* o                                    *\n";
                break;
            }
            case 17: {
                mass[6] = '*' + std::string(38, ' ') + "*\n";
                mass[7] = "*o  ()()                               *\n";
                break;
            }
            case 18: {
                mass[7] = "*   ()()                               *\n"; 
                mass[8] = "*o  ()()                               *\n";
                break;
            }
            case 19: {
                mass[8] =  "*   ()()                               *\n";
                mass[9] =  "*o  ()()                               *\n";
                mass[13] = "* ---\\/--                              *\n";
                mass[14] = "*/   ||  \\                             *\n";
                mass[15] = "*    ||   \\                            *\n";
                break;
            }
            case 20: {
                mass[9] =  "*   ()()                               *\n";
                mass[10] = "*o  |..|                               *\n";
                mass[13] = "*----\\/--                              *\n";
                mass[14] = "*    ||  \\                             *\n";
                mass[15] = "*    ||   \\                            *\n";
                break;
            }
            case 21: {
                mass[10] = "*   |..|                               *\n";
                mass[11] = "*o \\|  |/                              *\n";
                mass[13] = "*\\---\\/--                              *\n";
                break;
            }
            case 22: {
                mass[11] = "*  \\|  |/                              *\n";
                mass[12] = "*o /|UU|\\                              *\n";
                mass[13] = "*----\\/--                              *\n";
                break;
            }
            case 23: {
                mass[12] = "*  /|UU|\\                              *\n";
                mass[13] = "*o --\\/--                              *\n";
                mass[14] = "*-/  ||  \\                             *\n";
                break;
            }
            case 24: {
                mass[13] = "*  --\\/--                              *\n";
                mass[14] = "*o/  ||  \\                             *\n";
                mass[15] = "*-   ||   \\                            *\n";
                break;
            }
            case 25: {
                mass[13] = "*  --\\/--                              *\n";
                mass[14] = "* /  ||  \\                             *\n";
                mass[15] = "*/   ||   \\                            *\n";
                break;
            }
        }
        for (int i = 0; i < 20; i++) {
            std::cout << mass[i];
        }
    }
}