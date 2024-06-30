// #include <stdio.h>
// #include <string.h>
// #include <assert.h>

// void reverse(char *str)
// {
//     // assert(str); // 保证str的有效性 断言是如果表达式为非真就报错
//     int len = strlen(str);
//     char *left = str;
//     char *right = str + len - 1;

//     while (left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;

//         left++;
//         right--;
//     }
// }

// int main()
// {
//     char arr[256] = {0};
//     // scanf("%s", arr); 这个函数无法读取空格
//     gets(arr); // 读取一行
//     // 逆序函数
//     reverse(arr);

//     printf("%s\n", arr);
//     return 0;
// }
