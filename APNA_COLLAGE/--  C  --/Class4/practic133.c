// make a snake game using C language.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define SNAKE_LENGTH 10
#define SNAKE_WIDTH 10
#define SNAKE_HEIGHT 10
#define SNAKE_SPEED 100
#define SNAKE_DIRECTION_UP 1
#define SNAKE_DIRECTION_DOWN 2
#define SNAKE_DIRECTION_LEFT 3
#define SNAKE_DIRECTION_RIGHT 4

struct snake
{
    int x;
    int y;
};
struct snake snake[SNAKE_LENGTH];
struct snake food;
int direction;
int score;
int gameover;

void init();
void draw();
void update();
void input();
void generatefood();

int main()
{
    init();
    while (gameover == 0)
    {
        draw();
        update();
        input();
    }
    return 0;
}

void init()
{
    int i;
    gameover = 0;
    score = 0;
    direction = SNAKE_DIRECTION_RIGHT;
    for (i = 0; i < SNAKE_LENGTH; i++)
    {
        snake[i].x = i;
        snake[i].y = 0;
    }
    generatefood();
}

void draw()
{
    int i;
    system("cls");
    for (i = 0; i < SNAKE_HEIGHT; i++)
    {
        printf("\n");
        int j;
        for (j = 0; j < SNAKE_WIDTH; j++)
        {
            int k;
            int found = 0;
            for (k = 0; k < SNAKE_LENGTH; k++)
            {
                if (snake[k].x == j && snake[k].y == i)
                {
                    printf("*");
                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                if (j == food.x && i == food.y)
                {
                    printf("F");
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }
    printf("\n\n");
    printf("score : %d\n", score);
    printf("\n\n");
}
