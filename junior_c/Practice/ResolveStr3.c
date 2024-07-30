// #include <stdio.h>
// #include <string.h>
// #include <assert.h>

// // 判断旋转之后的字符串是否为另一个的字符串
// // ab cdef
// // ba fedc
// // cdef   ab

// void reverse(char *left, char *right)
// {
//     assert(left != NULL);
//     assert(right != NULL);
//     while (left < right)
//     {
//         char tmp = *left;
//         *left = *right;
//         *right = tmp;
//         left++;
//         right--;
//     }
// }

// void left_move(char *arr, int k)
// {
//     assert(arr);
//     int len = strlen(arr);
//     assert(k <= len);

//     reverse(arr, arr + k - 1);       // 逆序左边
//     reverse(arr + k, arr + len - 1); // 逆序右边
//     reverse(arr, arr + len - 1);     // 逆序整体
// }

// // abcdef
// // bcdefa
// // cdefab
// // defabc
// // efabcd
// // fabcde
// int is_left_move(char *s1, char *s2)
// {
//     int len = strlen(s1);
//     for (int i = 0; i < len; i++)
//     {
//         len_move(s1, i);
//         int res = strcmp(s1, s2);
//         if (res == 0)
//             return 1;
//     }
//     //
//     return 0;
// }

// int main()
// {
//     char *arr1 = "abcdef";
//     char *arr2 = "cdefab";

//     int res = if_left_move(arr1, arr2);
//     if (res == 1)
//         printf("Yes\n");
//     else
//         printf("No\n");

//     return 0;
// }