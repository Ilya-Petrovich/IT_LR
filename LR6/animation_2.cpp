#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

const int height = 20, wide = 40, person_height = 12, person_wide = 10, dance_pos = 14, run_pos = 3, jump_pos = 3, sit_height = 11, trow_pos = 19;

string symbols(int count, string symb)
{
    string res = "";
    for(int i = 0; i < count; i++)
        res += symb;
    return res;
}

void fill_lower_position(string positions[][person_height], string position[person_height], int i, int position_count)
{
    for(int j = 0; j < person_height; j++)
        positions[i][j] = position[j];
}

void dance_output(string dance_positions[dance_pos][person_height]) //сделать функцию, определяющую длину элемента двумерного массива сост и вычитать всё введёное из ширины для пробелов
{
    int y;
    for(int i = 0; i < dance_pos; i++) //
    {
        y = height - 2;
        cout << symbols(wide, "*") << endl;
        while(y != person_height)
        {
            cout << "*" << symbols(wide - 2, " ") << "*" << endl;
            y--;
        }

        for(int j = 0; j < person_height; j++)
            cout << "*" << dance_positions[i][j] << symbols(wide - size(dance_positions[i][j]) - 2, " ") << "*" << endl;
        cout << symbols(wide, "*") << endl;
    }
}

void dance() 
{
    string dance_positions[dance_pos][person_height];

    string dance_position0[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string dance_position1[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ","   \\--/  ","   _><_   "," --\\. /-- ","/  |. |  \\","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position2[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","   _><_   ","  -\\. /--- "," / |. |  ","/  |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position3[person_height] = {    "   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","   _><_  /"," --\\. /-- ","/  |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position4[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  /","   _><_ /","  -\\. /-  "," / |. |  ","/  |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position5[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  *","   _><_ /"," --\\. /-  ","/  |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position6[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  /","   _><_ /","---\\. /-  ","   |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position7[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  *","\\  _><_ /"," --\\. /-  ","   |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position8[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","\\  \\--/  /"," \\ _><_ /","  -\\. /-  ","   |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position9[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","*  \\--/  *"," \\ _><_ /","  -\\. /-  ","   |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position10[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","*  _><_  *"," --\\. /-- ","   |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position11[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","   _><_   ","*--\\. /--*","   |. |  ","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position12[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","   _><_   "," --\\. /-- ","*  |. |  *","   |. |    ","   |__|   ","    ||    ","   _||_   "};
    string dance_position13[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","   _><_   ","  -\\. /- "," / |. | \\","*  |. |  * ","   |__|   ","    ||    ","   _||_   "};

    fill_lower_position(dance_positions, dance_position0, 0, dance_pos);
    fill_lower_position(dance_positions, dance_position1, 1, dance_pos);
    fill_lower_position(dance_positions, dance_position2, 2, dance_pos);
    fill_lower_position(dance_positions, dance_position3, 3, dance_pos);
    fill_lower_position(dance_positions, dance_position4, 4, dance_pos);
    fill_lower_position(dance_positions, dance_position5, 5, dance_pos);
    fill_lower_position(dance_positions, dance_position6, 6, dance_pos);
    fill_lower_position(dance_positions, dance_position7, 7, dance_pos);
    fill_lower_position(dance_positions, dance_position8, 8, dance_pos);
    fill_lower_position(dance_positions, dance_position9, 9, dance_pos);
    fill_lower_position(dance_positions, dance_position10, 10, dance_pos);
    fill_lower_position(dance_positions, dance_position11, 11, dance_pos);
    fill_lower_position(dance_positions, dance_position12, 12, dance_pos);
    fill_lower_position(dance_positions, dance_position13, 13, dance_pos);

    dance_output(dance_positions);
}

void run_output(string run_positions[run_pos][person_height]) //сделать функцию, определяющую длину элемента двумерного массива сост и вычитать всё введёное из ширины для пробелов
{
    int y;
    for(int i = 0; i < wide - person_wide - 2; i++) //0 - -2, 1 - -1, 3 - 1
    {
        y = height - 2;
        cout << symbols(wide, "*") << endl;
        while(y != person_height)
        {
            cout << "*" << symbols(wide - 2, " ") << "*" << endl;
            y--; 
        }


        for(int j = 0; j < person_height; j++)
            cout << "*" << symbols(i, " ") << run_positions[i % 3][j] << symbols(wide - size(run_positions[i % 3][j]) - 2 - i, " ") << "*" << endl;
        cout << symbols(wide, "*") << endl;
    }

    for(int i = wide - person_wide - 2; i >= 0; i--) /*wide - person_wide - 2*/
    {
        y = height - 2;
        cout << symbols(wide, "*") << endl;
        while(y != person_height)
        {
            cout << "*" << symbols(wide - 2, " ") << "*" << endl;
            y--;
        }

        for(int j = 0; j < person_height; j++)
        {
            if (i == wide - person_wide - 2)
                cout << "*" << symbols(i, " ") << run_positions[i % 3][j] << symbols(wide - size(run_positions[i % 3][j]) - 2 - i, " ") << "*" << endl;
            else
                cout << "*" << symbols(i, " ") << run_positions[i % 3][j] << symbols(wide - size(run_positions[i % 3][j]) - 2 - i, " ") << "*" << endl;
        }

        cout << symbols(wide, "*") << endl;
    } 
}

void run()
{
    string run_positions[run_pos][person_height];

    string run_position0[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\", "   |__|   ", "    ||   ", "   _||_ "};
    string run_position1[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\", "   |__|   ", "    | \\   ", "   _|  \\_ "};
    string run_position2[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\", "   |__|   ", "   / |   ", " _/  |_ "};

    fill_lower_position(run_positions, run_position0, 0, run_pos);
    fill_lower_position(run_positions, run_position1, 1, run_pos);
    fill_lower_position(run_positions, run_position2, 2, run_pos);

    run_output(run_positions);
}

void jump_output(string jump_position0[person_height], string jump_position1[sit_height], string jump_position2[person_height])
{
    int y, person_peak;
    string *point_position;

    for(int i = 0; i < 13; i++) //
    {
        y = height - 2;

        if ((i == 0) || (i == 2) || (i == 12)) //
        {
            person_peak = person_height;
            point_position = jump_position0;
        }
        else if((i == 1) || (i == 11))
        {
            person_peak = sit_height;
            point_position = jump_position1;
        }
        else
        {
            if (i <= 6)
                person_peak++;
            else   
                person_peak--;
            point_position = jump_position2;
        }
        
        
        cout << symbols(wide, "*") << endl; 
        for(;y > person_peak; y--) //вывод * + spaces + * до персонажа
            cout << "*" << symbols(wide - 2, " ") << "*" << endl;

        for(int j = 0; y > (person_peak - person_height >= 0 ? person_peak - person_height : person_peak - sit_height); y--, j++) //вывод персонажа
            cout << "*" << point_position[j] << symbols(wide - size(point_position[j]) - 2, " ") << "*" << endl;

        for(;y > 0; y--)
            cout << "*" << symbols(wide - 2, " ") << "*" << endl;

        cout << symbols(wide, "*") << endl;

    }
}

void jump()
{
    string jump_position0[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\", "   |__|   ", "    ||   ", "   _||_ "};
    string jump_position1[sit_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\", "   |__|   ", "   _\\/_ "};
    string jump_position2[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ", "  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\", "   |__|   ", "    ||   ", "    ||  "};
    jump_output(jump_position0, jump_position1, jump_position2);
}

void trow_ball_person_position(int &n, int i)
{
    if((i <= 9) || (i > 16)) //доп ограничение, возможен выход из области массива сост
        n++;
}

void ball_position(int &x, int &y, int i)
{
    if(i == 0)
    {
        x = 0;
        y = 0;
    }

    else if(i == 1)
    {
        x = 11;
        y = 6;
    }
    else if((i > 1) && (i < 8))
        y++;
    else if((i >= 8) && (i <= 12))
    {
        y++;
        x--;
    }
    else if(i == 13)
        x--;
    else if((i <= 17) && (i > 13))
    {
        y--; 
        x--;
    }
    else if (i > 17)
        y--;
}

void ball_output(int i, int ball_x) 
{    
    cout << "*" << symbols(ball_x-1, " ") << "o" << symbols(wide - 2 - ball_x, " ") << "*" << endl;
}

void trow_ball_output(string trow_ball_positions[trow_pos][person_height]) 
{ 
    int y, x = 0, ball_y, ball_x, n = 0;
    for(int i = 0; i <= 25; i++, trow_ball_person_position(n, i)) 
    { 
        ball_position(ball_x, ball_y, i);
        y = height - 2;
        cout << symbols(wide, "*") << endl;

        for(;y > person_height; y--)
        {
            cout << "*" << (symbols(wide - 2, " ")) << "*" << endl;

            if((y == ball_y) && ((i >= 9) && (i <= 16)))
            {
                ball_output(i, ball_x);
                y--;
            }                 
        }

        for(int j = 0; j < person_height; j++)
            cout << "*" << trow_ball_positions[n][j] << symbols(wide - size(trow_ball_positions[n][j]) - 2, " ") << "*" << endl;
        cout << symbols(wide, "*") << endl;
    }
}

void trow_ball()
{

    string trow_ball_positions[trow_pos][person_height];

    string trow_ball_position0[person_height] = {"   _[]_   ", "   |~~|   ","   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position1[person_height] = {"   _[]_   ", "   |~~|   ","   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\o", "/  |. |  - ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position2[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/   ","   _><_   ","  -\\. /- o"," / |. | \\-","/  |. |     ","   |__|   ","    ||    ","   _||_   "};
    string trow_ball_position3[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  ","   _><_  o","  -\\. /--- "," / |. |  ","/  |. |    ","   |__|   ","    ||    ","   _||_   "};
    string trow_ball_position4[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|)  ","   \\--/  o","   _><_   ","  -\\. /--/ "," / |. |  ","/  |. |    ","   |__|   ","    ||    ","   _||_   "};
    string trow_ball_position5[person_height] = {"   _[]_   ","   |~~|   ","   |oq|   ","  (|<>|) o","   \\--/  ","   _><_   ","  -\\. /--- "," / |. |  ","/  |. |    ","   |__|   ","    ||    ","   _||_   "};
    string trow_ball_position6[person_height] = {"   _[]_   ","   |~~|   ","   |oq|  o","  (|<>|)  ","   \\--/  ","   _><_   ","  -\\. /-- "," / |. |  \\ ","/  |. |    ","   |__|   ","    ||    ","   _||_   "};
    string trow_ball_position7[person_height] = {"   _[]_   ", "   |~~|  o","   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position8[person_height] = {"   _[]_  o", "   |~~|   ","   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position9[person_height] = {"   _[]_   ", "   |~~|   ","   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    //мячек появляется с другой стороны
    string trow_ball_position10[person_height] = {"o  _[]_   ", "   |~~|   ", "   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position11[person_height] = {"   _[]_   ", "o  |~~|   ", "   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position12[person_height] = {"   _[]_   ", "   |~~|   ", "o  |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", " --\\. /- ", "/  |. | \\", "   |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position13[person_height] = {"   _[]_   ",  "   |~~|   ",  "   |oq|   ","o (|<>|)  ", "   \\--/  ", "   _><_   ", "---\\. /- ", "   |. | \\", "   |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position14[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ","  (|<>|)  ", "o  \\--/  ", "   _><_   ", "\\--\\. /- ", "   |. | \\", "   |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position15[person_height] = {"   _[]_   ", "   |~~|   ",  "   |oq|   ","  (|<>|)  ", "   \\--/  ", "o  _><_   ", "---\\. /- ", "   |. | \\", "   |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position16[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "o -\\. /- ", "-/ |. | \\", "   |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position17[person_height] =  {"   _[]_   ", "   |~~|   ", "   |oq|   ","  (|<>|)  ", "   \\--/  ",  "   _><_   ", "  -\\. /- ", "o/ |. | \\", "-  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};
    string trow_ball_position18[person_height] = {"   _[]_   ", "   |~~|   ", "   |oq|   ","  (|<>|)  ", "   \\--/  ", "   _><_   ", "  -\\. /- ", " / |. | \\", "/  |. |  \\ ", "   |__|   ", "    ||    ", "   _||_   "};

    fill_lower_position(trow_ball_positions, trow_ball_position0, 0, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position1, 1, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position2, 2, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position3, 3, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position4, 4, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position5, 5, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position6, 6, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position7, 7, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position8, 8, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position9, 9, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position10, 10, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position11, 11, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position12, 12, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position13, 13, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position14, 14, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position15, 15, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position16, 16, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position17, 17, trow_pos);
    fill_lower_position(trow_ball_positions, trow_ball_position18, 18, trow_pos);

    trow_ball_output(trow_ball_positions);
}
 
int main()
{
    int choice;
    cout << "Choose animation:" << std::endl;
    cout << "Dance: \t\t\t1" << std::endl;
    cout << "Run: \t\t\t2" << std::endl;
    cout << "Sit down and jump: \t3" << std::endl;
    cout << "Throw a ball: \t\t4" << std::endl << std::endl;
    cout << "Enter 5 for exit." << std::endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            dance();
            break;

        case 2:
            run();
            break;

        case 3:
            jump();
            break;

        case 4:
            trow_ball();
            break;

        case 5:
            exit(1);
            break;
    }
}
