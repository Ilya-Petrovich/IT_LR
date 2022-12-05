#include <iostream>
using namespace std;

void showCharacter(string body[11]) {
  for (int i = 0; i < 12; i++) {
      cout << body[i] << endl;
  }
}

void showAnimation(string body[11]) {
  showCharacter(body);
  // sleep(1);
}

int main()
{
    int h = 11;
    string body[h] = {
      "    /\\    ", // 0
      "   |oo|   ", // 1
      "  (|..|)  ", // 2
      "   |--|   ", // 3
      "   \\__/   ", // 4
      "    ||    ", // 5
      "  -|  |-  ", // 6
      " / |  | \\ ", // 7
      "/   \\/   \\", // 8
      "    /\\    ", // 9
      "    ||    ", // 10
      "   _||_    ", // 11
    };

    for (int i = 0; i < 2; i++) {
      // system("cls");

      showAnimation(body);
      // system("cls");
      // 1
      body[6] = " --|  |-- "; // 6
      body[7] = "/  |  |  \\"; // 7
      body[8] = "    \\/    "; // 8
      showAnimation(body);
      // system("cls");

      // 2
      body[6] = "  -|  |---"; // 6
      body[7] = " / |  |   "; // 7
      body[8] = "/   \\/    "; // 8
      showAnimation(body);
      // system("cls");

      // 3
      body[5] = "    ||   /"; // 5
      body[6] = " --|  |-- "; // 6
      body[7] = "/  |  |   "; // 7
      body[8] = "    \\/    "; // 8
      showAnimation(body);
      // system("cls");

      // 4
      body[4] = "   \\__/  /"; // 4
      body[5] = "    ||  / "; // 5
      body[6] = "  -|  |-  "; // 6
      body[7] = " / |  |   "; // 7
      body[8] = "/   \\/    "; // 8
      showAnimation(body);
      // system("cls");

      // 5
      body[4] = "   \\__/  *"; // 4
      body[6] = " --|  |-  "; // 6
      body[7] = "/  |  |   "; // 7
      body[8] = "    \\/    "; // 8
      showAnimation(body);
      // system("cls");

      // 6
      body[4] = "   \\__/  /"; // 4
      body[5] = "    ||  / "; // 5
      body[6] = "---|  |-  "; // 6
      body[7] = "   |  |   "; // 7
      showAnimation(body);
      // system("cls");

      // 7
      body[4] = "   \\__/  *"; // 4
      body[5] = "\\   ||  / "; // 5
      body[6] = " --|  |-  "; // 6
      showAnimation(body);
      // system("cls");

      // 8
      body[4] = "\\  \\__/  /"; // 4
      body[5] = " \\  ||  / "; // 5
      body[6] = "  -|  |-  "; // 6
      showAnimation(body);
      // system("cls");

      // 9
      body[4] = "*  \\__/  *"; // 4
      showAnimation(body);
      // system("cls");

      // 10
      body[4] = "   \\__/   "; // 4
      body[5] = "*   ||   *"; // 5
      body[6] = " --|  |-- "; // 6
      showAnimation(body);
      // system("cls");

      // 11
      body[5] = "    ||    "; // 5
      body[6] = "*--|  |--*"; // 6
      showAnimation(body);
      // system("cls");

      // 12
      body[6] = " --|  |-- "; // 6
      body[7] = "*  |  |  *"; // 7
      showAnimation(body);
      // system("cls");

      // 13
      body[6] = "  -|  |-  "; // 6
      body[7] = " / |  | \\ "; // 7
      body[8] = "*   \\/   *"; // 8
      showAnimation(body);
      // system("cls");

      // 14
      body[8] = "/   \\/   \\"; // 8
      showAnimation(body);
    }
}
