#include <stdio.h>
#define N 10

int main(void)
{
    char checker_board[8][8];

    for(int i =0; i <8; i++)
    {
        for(int j = 0; j < 8; j++)
        {   
            if(i % 2 == 0 && j % 2 == 0)
            {
                checker_board[i][j] = 'B';
            }
            if(i % 2 == 0 && j % 2 == 1)
            {
                checker_board[i][j] = 'R';
            }
            if(i % 2 == 1 && j % 2 == 0)
            {
                checker_board[i][j] = 'R';
            }
            if(i % 2 == 1 && j % 2 == 1)
            {
                checker_board[i][j] = 'B';
            }

            printf("%c ", checker_board[i][j]);
        }
        printf("\n");
    }

}
