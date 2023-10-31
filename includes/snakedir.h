// These two lines prevents the file from being included multiple
// times in the same source file
#ifndef SNAKEDIR_H_
#define SNAKEDIR_H_

enum SnakeDir { STOP = 0, LEFT, RIGHT, UP, DOWN };

extern SnakeDir dir;

#endif