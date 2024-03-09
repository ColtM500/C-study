/**
 * 接受一个整型值（无符号），按照顺序打印它的每一位。例如：输入：1234，输出1 2 3 4
*/

#include <stdio.h>

void _print(int n)
{
    if(n>9)
    {
        _print(n / 10);
    }
    printf("%d ", n % 10);
}

// int main()
// {
//     // printf("hello world!");

//     unsigned int num = 0;
//     printf("请输入数字：\n");
//     scanf("%d\n", &num);
//     _print(num);
//     return 0;
// }