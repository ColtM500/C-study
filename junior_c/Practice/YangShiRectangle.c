#include <stdio.h>

// 1 2 3
// 4 5 6
// 7 8 9

// 1 2 3
// 2 3 4
// 3 4 5

// int FindNum(int arr[3][3], int k, int row, int col)
// {
//     int x = 0;
//     int y = col - 1;

//     while (x <= row - 1 && y >= 0)
//     {
//         if (arr[x][y] > k)
//         {
//             y--;
//         }
//         else if (arr[x][y] < k)
//         {
//             x++;
//         }
//         else
//         {
//             printf("下标是%d %d\n", x, y);
//             return 1;
//         }
//     }
// }

int FindNum(int arr[3][3], int k, int *px, int *py)
{
    int x = 0;
    int y = *py - 1;

    while (x <= *px - 1 && y >= 0)
    {
        if (arr[x][y] > k)
        {
            y--;
        }
        else if (arr[x][y] < k)
        {
            x++;
        }
        else
        {
            *px = x;
            *py = y;
            printf("下标是%d %d\n", x, y);
            return 1;
        }
    }
    // // 找不到
    // *px = -1; 
    // *py = -1;
    return 0;
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int k = 7;
    int x = 3;
    int y = 3;

    int res = FindNum(arr, k, &x, &y);
    if (res == 1)
    {
        printf("找到了!");
        printf("下标是:%d %d\n", x, y);
    }
    else
    {
        printf("找不到了");
    }
}