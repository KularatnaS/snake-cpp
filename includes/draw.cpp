#include <iostream>

using namespace std;

void Draw(int width, int height, int head_X, int head_Y, int fruit_X, int fruit_Y, int score)
{
    system("clear");
    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; ++j)
        {
            if (j == 0 || j == width - 1)
                cout << "#";
            else if (i == head_Y && j == head_X)
                cout << "O";
            else if (i == fruit_Y && j == fruit_X)
                cout << "F";
            else
            {
                cout << " ";
            }

        }
        cout << endl;
    }

    for (int i = 0; i < width; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}