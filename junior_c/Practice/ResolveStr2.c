// #include <stdio.h>
// #include <string.h>
// #include <assert.h>

// // 三部翻转法
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

// int main()
// {
//     char arr[] = "abcdef";
//     left_move(arr, 2);
//     printf("%s\n", arr);

//     return 0;
// }