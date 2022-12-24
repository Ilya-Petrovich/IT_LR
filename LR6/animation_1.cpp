#include <iostream>
#include <string>
using namespace std;


void show(string person1[], const int size){
    for (int i = 0; i < size; i++) {
        cout << person1[i];
    }
}

void dance(string person1[], const int size) {
    //frame 1
    show(person1,size);

    // frame 2
    person1[6] = " --\\. /-- \n";
    person1[7] = "/  |. |  \\\n";
    person1[8] = "   |. |   \n";

    show(person1,size);


    // frame 3
    person1[6] = "  -\\. /---\n";
    person1[7] = " / |. |   \n";
    person1[8] = "/  |. |   \n";

    show(person1,size);;




    // frame 4
    person1[5] = "   _><_  /\n";
    person1[6] = " --\\. /-- \n";
    person1[7] = "/  |. |   \n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    // frame 5
    person1[4] = "   \\--/  /\n";
    person1[5] = "   _><_ / \n";
    person1[6] = "  -\\. /- \n";
    person1[7] = " / |. |   \n";
    person1[8] = "/  |. |   \n";

    show(person1,size);;




    // frame 6
    person1[4] = "   \\--/  *\n";
    person1[5] = "   _><_ / \n";
    person1[6] = " --\\. /- \n";
    person1[7] = "/  |. |   \n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    // frame 7
    person1[4] = "   \\--/  /\n";
    person1[5] = "   _><_ / \n";
    person1[6] = "---\\. /-  \n";
    person1[7] = "   |. |   \n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    //frame 8
    person1[4] = "   \\--/  *\n";
    person1[5] = "\\  _><_ / \n";
    person1[6] = " --\\. /-  \n";
    person1[7] = "   |. |   \n";

    show(person1,size);;




    //frame 9
    person1[4] = "\\  \\--/  /\n";
    person1[5] = " \\ _><_ / \n";
    person1[6] = "  -\\. /-  \n";

    show(person1,size);;




    //frame 10
    person1[4] = "*  \\--/  *\n";

    show(person1,size);;




    //frame 11
    person1[4] = "   \\--/   \n";
    person1[5] = "*  _><_  *\n";
    person1[6] = " --\\. /-- \n";

    show(person1,size);;




    //frame 12
    person1[5] = "   _><_   \n";
    person1[6] = "*--\\. /--*\n";

    show(person1,size);;




    //frame 13
    person1[6] = " --\\. /-- \n";
    person1[7] = "*  |. |  *\n";

    show(person1,size);;




    //frame 14
    person1[6] = "  -\\. /-  \n";
    person1[7] = " / |. | \\ \n";
    person1[8] = "*  |. |  *\n";

    show(person1,size);;




    //frame 15
    person1[8] = "/  |. |  \\\n";

    show(person1,size);;




    // frame 16
    person1[6] = " --\\. /-- \n";
    person1[7] = "/  |. |  \\\n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    // frame 17
    person1[6] = "  -\\. /---\n";
    person1[7] = " / |. |   \n";
    person1[8] = "/  |. |   \n";

    show(person1,size);;



    // frame 18
    person1[5] = "   _><_  /\n";
    person1[6] = " --\\. /-- \n";
    person1[7] = "/  |. |   \n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    // frame 19
    person1[4] = "   \\--/  /\n";
    person1[5] = "   _><_ / \n";
    person1[6] = "  -\\. /- \n";
    person1[7] = " / |. |   \n";
    person1[8] = "/  |. |   \n";

    show(person1,size);;




    // frame 20
    person1[4] = "   \\--/  *\n";
    person1[5] = "   _><_ / \n";
    person1[6] = " --\\. /- \n";
    person1[7] = "/  |. |   \n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    // frame 21
    person1[4] = "   \\--/  /\n";
    person1[5] = "   _><_ / \n";
    person1[6] = "---\\. /-  \n";
    person1[7] = "   |. |   \n";
    person1[8] = "   |. |   \n";

    show(person1,size);;




    //frame 22
    person1[4] = "   \\--/  *\n";
    person1[5] = "\\  _><_ / \n";
    person1[6] = " --\\. /-  \n";
    person1[7] = "   |. |   \n";

    show(person1,size);;




    //frame 23
    person1[4] = "\\  \\--/  /\n";
    person1[5] = " \\ _><_ / \n";
    person1[6] = "  -\\. /-  \n";

    show(person1,size);;




    //frame 24
    person1[4] = "*  \\--/  *\n";

    show(person1,size);;




    //frame 25
    person1[4] = "   \\--/   \n";
    person1[5] = "*  _><_  *\n";
    person1[6] = " --\\. /-- \n";

    show(person1,size);;




    //frame 26
    person1[5] = "   _><_   \n";
    person1[6] = "*--\\. /--*\n";

    show(person1,size);;




    //frame 27
    person1[6] = " --\\. /-- \n";
    person1[7] = "*  |. |  *\n";

    show(person1,size);;




    //frame 28
    person1[6] = "  -\\. /-  \n";
    person1[7] = " / |. | \\ \n";
    person1[8] = "*  |. |  *\n";

    show(person1,size);;




    //frame 29
    person1[8] = "/  |. |  \\\n";

    show(person1,size);;
}






int main(){
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