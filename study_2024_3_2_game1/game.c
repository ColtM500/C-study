#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// void DisplayBoard(char board[ROW][COL], int row, int col)
// {
//     for (int i = 0; i < row; i++)
//     {
//         //1.打印一行数据
//         printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//         //2.打印分割行
//         if(i<row-1) //最后一行不打印
//             printf("---|---|--- \n");
//     }
// }

void DisplayBoard(char board[ROW][COL], int row, int col)
{
    //在每行里
    for (int i = 0; i < row; i++)
    {
        int j = 0;
        //每行对应列里 打印一个数据一个|
        for ( j = 0; j < col; j++)
        { 
            //1.打印一行数据
            printf(" %c ", board[i][j]);
            if(j < col - 1)
                printf("|");
        }
        printf("\n");
        // 2.打印分割行
        if (i < row - 1) // 最后一行不打印
        {
            // printf("---|---|--- \n");
            for (j = 0; j < col; j++)
            {
                printf("---");
                if(j < col - 1)
                    printf("|");
            }
            printf("\n");
        }      
    }
}