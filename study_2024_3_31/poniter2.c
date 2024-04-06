// #include <stdio.h>
// #define NUM 5
// int main()
// {
//     // 代码 1
//     int arr1[NUM] = {0, 1, 2, 3, 4};
//     printf("code 1:\n");
//     for (int *p = &arr1[NUM]; p > arr1;)
//     {
//         printf("%d ", *--p);
//     }
//     printf("\n");
//     // 代码 2
//     printf("code 2:\n");
//     for (int *p = &arr1[NUM - 1]; p >= arr1; p--)
//     {
//         printf("%d ", *p);
//     }
//     printf("\n");

//     int arr2[NUM] = {1, 2};
//     printf("arr2 = %p \n", arr2);
//     printf("&arr2 = %p \n", &arr2);
//     printf("arr2 + 1 = %p \n", arr2 + 1);
//     printf("&arr2 + 1 = %p \n", &arr2 + 1);

//     return 0;

//     // 可以发现两段代码都对数组中的元素进行了访问，
//     // 但C语言标准规定了允许指向数组元素的指针可以和最后一个元素后面的内存位置进行指针比较，
//     // 不允许与第一个元素之前的内存位置进行比较，
//     // 所以，使用指针比较的时候应该注意符合语言规范，避免后期出现不可知问题，
//     // 所以，上述代码二属于不规范代码。
// }