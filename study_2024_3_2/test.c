//测试三子棋游戏
#include "game.h"

void menu()
{
    printf("*******************\n");
    printf("***1.play 0.exit***\n");
    printf("*******************\n");
}

//游戏的整个算法实现
void game()
{
    char res = 0;
    //数组-存放走出的棋盘信息
    char board[ROW][COL] = {0}; //全部空格
    //初始化棋盘
    InitBoard(board, ROW, COL);
    //打印棋盘
    DisplayBoard(board, ROW, COL);
    //下棋
    while(1)
    {
        //玩家下棋
        PlayerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断玩家输赢
        res = IsWin(board, ROW, COL);
        if(res != 'C')
        {
            break;
        }

        //电脑下棋
        ComputerMove(board, ROW, COL);
        DisplayBoard(board, ROW, COL);
        //判断电脑输赢
        res = IsWin(board, ROW, COL);
        if(res != 'C')
        {
            break;
        }
    }
    if(res == '*')
    {
        printf("玩家赢!\n");
    }
    else if(res == '#')
    {
        printf("电脑赢!\n");
    }
    else
    {
        printf("平局!\n");
    }

}

void test()
{
    int input = 0;
    //设置一个时间戳 time函数放空指针参数 放随机数种子里用
    srand((unsigned int)time(NULL));
    do{
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                printf("三子棋\n");
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，请重新选择!\n");
                break;
        }
    } while (input);
}

int main()
{
    test();
    return 0;
}