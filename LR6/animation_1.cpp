#include <iostream>

// void deloneframe();
void head(); void legs();
void dance();

int main() {
    // deloneframe();
    dance();
    return 0;
}

// void deloneframe() {system("cls");}
void head() {
    std::cout << "   ()()   \n";
    std::cout << "   ()()   \n";
    std::cout << "   ()()   \n";
    std::cout << "   |..|   \n";
}
void legs() {
    std::cout << "    /\\    \n";
    std::cout << "    ||    \n";
    std::cout << "   _||_   \n";
}
void dance() {
    for (int i = 0; i <= 28; i++) {
        // deloneframe();
        head();
        switch (i % 14) {
            case 0: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\  \n";
                std::cout << "  --\\/--  \n";
                std::cout << " /  ||  \\ \n";
                std::cout << "/   ||   \\\n";break;}
            case 1: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\  \n";
                std::cout << " ---\\/--- \n";
                std::cout << "/   ||   \\\n";
                std::cout << "    ||    \n";break;}
            case 2: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\  \n";
                std::cout << "  --\\/----\n";
                std::cout << " /  ||    \n";
                std::cout << "/   ||    \n"; break;}
            case 3: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\ /\n";
                std::cout << " ---\\/--- \n";
                std::cout << "/   ||    \n";
                std::cout << "    ||    \n"; break;}
            case 4: {
                std::cout << "  \\|  |/ /\n";
                std::cout << "  /|UU|\\/ \n";
                std::cout << "  --\\/--  \n";
                std::cout << " /  ||    \n";
                std::cout << "/   ||    \n"; break;}
            case 5: {
                std::cout << "  \\|  |/ *\n";
                std::cout << "  /|UU|\\/ \n";
                std::cout << " ---\\/--  \n";
                std::cout << "/   ||    \n";
                std::cout << "    ||    \n"; break;}
            case 6: {
                std::cout << "  \\|  |/ /\n";
                std::cout << "  /|UU|\\/ \n";
                std::cout << "----\\/--  \n";
                std::cout << "    ||    \n";
                std::cout << "    ||    \n"; break;}
            case 7: {
                std::cout << "  \\|  |/ *\n";
                std::cout << "\\ /|UU|\\/ \n";
                std::cout << " ---\\/--  \n";
                std::cout << "    ||    \n";
                std::cout << "    ||    \n"; break;}
            case 8: {
                std::cout << "\\ \\|  |/ /\n";
                std::cout << " \\/|UU|\\/ \n";
                std::cout << "  --\\/--  \n";
                std::cout << "    ||    \n";
                std::cout << "    ||    \n"; break;}
            case 9: {
                std::cout << "* \\|  |/ *\n";
                std::cout << " \\/|UU|\\/ \n";
                std::cout << "  --\\/--  \n";
                std::cout << "    ||    \n";
                std::cout << "    ||    \n"; break;}
            case 10: {
                std::cout << "  \\|  |/  \n";
                std::cout << "* /|UU|\\ *\n";
                std::cout << " ---\\/--- \n";
                std::cout << "    ||    \n";
                std::cout << "    ||    \n"; break;}
            case 11: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\  \n";
                std::cout << "*---\\/---*\n";
                std::cout << "    ||    \n";
                std::cout << "    ||    \n"; break;}
            case 12: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\  \n";
                std::cout << " ---\\/--- \n";
                std::cout << "*   ||   *\n";
                std::cout << "    ||    \n"; break;}
            case 13: {
                std::cout << "  \\|  |/  \n";
                std::cout << "  /|UU|\\  \n";
                std::cout << "  --\\/--  \n";
                std::cout << " /  ||  \\ \n";
                std::cout << "*   ||   *\n"; break;}
        }
        legs();
        // Sleep(500);
        // deloneframe();
    }
}
