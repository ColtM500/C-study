#include <stdio.h>
#include <string.h>

// int main()
// {
    // //创建一个数组-存放整型-10个
    // int arr[10] = {1,2,3};  //不完全初始化
    // char arr2[5] = {'a', 'b'};
    // char arr3[5] = "ab";
    // char arr4[] = "abcdef";
    // char arr5[] = "abc";
    // char arr6[] = {'a', 'b', 'c'};

    // printf("%d\n", sizeof(arr4));//7
    // printf("%d\n", strlen(arr4));//6
    // printf("%d\n", sizeof(arr5));//4
    // printf("%d\n", sizeof(arr6));//3
    // printf("%d\n", strlen(arr5));//3
    // printf("%d\n", strlen(arr6));//3 随机值 c后面要找\0 未知
    // //sizeof计算 arr4所占空间的大小
    // //strlen计算'\0'之前的字符个数



    // // int n = 5;
    // // char ch[n]; //err
    // return 0;

    // char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
    // int len = strlen(arr);
    // for (int i = 0; i < len; i++)
    // {
    //     printf("%c", arr[i]);
    // }

    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    // int length =  sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("%d", arr[i]);
    // }

    // int arr[] = {1,2,3,4,5,6,7,8,9,10};
    // int length = sizeof(arr) / sizeof(arr[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     printf("&arr[%d] = %p\n",i,&arr[i]);
    // }

    // int arr[2][4] = {{1, 2, 3, 4},{ 5, 6, 7, 8}};

//     int arr[3][4] = {{1, 2, 3}, {4, 5}};
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//         }
//     }
//         return 0;
// }
