// #include <stdio.h>
// #include <string.h>
// #include <assert.h>

//暴力旋转法
// void left_move(char *arr, int k)
// {
//     assert(arr != NULL);
//     int len = strlen(arr);
//     for (int i = 0; i < k; i++)
//     {
//         // 左旋转一个字符
//         // 1
//         char temp = *arr;
//         // 2
//         for (int j = 0; j < len - 1; j++)
//         {
//             *(arr + j) = *(arr + j + 1);
//         }
//         // 3
//         *(arr + len - 1) = temp;
//     }
// }

// int main()
// {
//     char arr[] = "abcdef";
//     left_move(arr, 2);

//     printf("%s\n", arr);

//     return 0;
// }