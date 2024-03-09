/**
 * 编写函数不允许创建临时变量，求字符串的长度
*/
#include <stdio.h>
#include <string.h>

// int my_strlen(char* str)
// {
//     int count = 0;
//     while(*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }

//递归的方法
int my_strlen(char* str)
{
    if(*str != '\0')
        return 1 + my_strlen(str + 1);
    else
        return 0;
}
//把大事化小
//my_strlen("bit")
//1+my_strlen("it")
//1+1+my_strlen("t")
//1+1+1+my_strlen("")
//1+1+1+0
//3

// int main()
// {
//     char arr[] = "bit"; //arr b i t \0
//     // int len = strlen(arr);
//     // printf("len = %d\n", len);

//     int len = my_strlen(arr);   //arr是数组 数组传参 传过去的不是整个数组 而是第一个元素的地址
//     printf("len = %d\n", len);
//     return 0;
// }