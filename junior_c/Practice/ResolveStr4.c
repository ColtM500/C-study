// #include <stdio.h>
// #include <string.h>

// int is_left_move(char *str1, char *str2)
// {
//     int len1 = strlen(str1);
//     int len2 = strlen(str2);
//     if (len1 != len2)
//     {
//         return 0;
//     }

//     // 1.在str1字符串中追加一个str1字符串
//     // strcat
//     // strncat
//     // strcat(str1, str1);//err
//     strncat(str1, str1, 6); // abcdefabcdef
//     // 2.判断str2指向的字符串是否是str1指向的字符串的子串
//     // strstr - 找字串的
//     char *res = strstr(str1, str2);
//     if (res == NULL)
//     {
//         return 0;
//     }
//     else
//     {
//         return 1;
//     }
// }

// int main()
// {
//     char arr1[30] = "abcdef";
//     char arr2[] = "cdefab";

//     int res = is_left_move(arr1, arr2);
//     if (res == 1)
//     {
//         printf("Yes\n");
//     }
//     else
//     {
//         printf("No\n");
//     }

//     return 0;
// }