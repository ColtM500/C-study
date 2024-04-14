// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[1000]; // 下标为0-999
//     for (int i = 0; i < 1000; i++)
//     {
//         a[i] = -1 - i; // 任何数据放入char中 都会转化为-128~127的数值
//     }
//     //\0之前有多少个数字 255
//     printf("%d", strlen(a)); // 255   -1 -2 -3 -4 ... -1000
//     return 0;
// }