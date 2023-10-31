#include "snakedir.h"
#include <iostream>

void Logic(int &head_X, int &head_Y, bool &gameOver, int width, int height, int &fruit_X, int &fruit_Y, int &score)
{

    switch(dir)
    {
        case LEFT:
            head_X--;
            break;
        case RIGHT:
            head_X++;
            break;
        case UP:
            head_Y--;
            break;
        case DOWN:
            head_Y++;
            break;
        default:
            break;
    }

    if (head_X >= (width - 1) || head_X <= 0 || head_Y >= height || head_Y <= -1)
    {
        gameOver = true;
    }

    if (head_X == fruit_X && head_Y == fruit_Y)
    {
        score += 10;
        fruit_X = rand() % width;
        fruit_Y = rand() % height;
    }

}