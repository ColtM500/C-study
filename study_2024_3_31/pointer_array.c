// #include <stdio.h>
// #define NUM 5
// int main()
// {
//     int arr1[NUM] = {1,2,3,4,5};
//     int arr2[NUM] = {6,7,8,9,10};
//     int arr3[NUM] = {10,11,12,13,14};
//     int* parr[] = {arr1, arr2, arr3};
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < NUM; j++) {
//             //以下四行代码等价
//             //printf("%d ", *(parr[i] + j));
//             // printf("%d ", *(*(parr + i) + j));
//             //printf("%d ",parr[i][j]);
//             printf("%d ", (*(parr + i))[j]);//这里注意，[]的优先级是高于*的，所以一定要在解引用前加个括号
//         }
//         printf("\n");
//     }
//     return 0;
// }