#include <conio.h>
#include "snakedir.h"

void Input(bool &gameOver)
{
    if (kbhit())
    {
        switch(getch())
        {
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}