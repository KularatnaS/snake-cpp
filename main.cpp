#include <iostream>
#include <unistd.h>

#include "includes/draw.h"
#include "includes/input.h"
#include "includes/logic.h"

using namespace std;

bool gameOver;

const int width = 20;
const int height = 20;
int head_X, head_Y; // Head position of the snake
int fruit_X, fruit_Y; // Fruit position
int score;

void Setup()
{
    gameOver = false;
    head_X = width / 2;
    head_Y = height / 2;
    fruit_X = rand() % width;
    fruit_Y = rand() % height;
    score = 0;
}

int main(){

    Setup();
    while(!gameOver)
    {
        Draw(width, height, head_X, head_Y, fruit_X, fruit_Y, score);
        Input(gameOver);
        Logic(head_X, head_Y, gameOver, width, height, fruit_X, fruit_Y, score);
        // sleep for 0.1 second
        usleep(100000);
    }

    return 0;
}
