#include <stdio.h>

int* test()
{
    // int a = 10;
    // return &a;//临时变量都有问题0 
    int arr[10] = {0};
    return arr;
}

int main()
{
    // int a = 10;//在内存中开辟一块空间
    // int *p = &a;    //取a的地址 用&操作符
    //                 //将a的地址存放在整形指针变量p中
    // return 0;

    // int a = 0x11223344;
    // int *pa = &a;
    // char *pc = &a;
    // printf("%p\n", pa);
    // printf("%p\n", pc);

//     int arr[10] = {0};
//     int *p = arr;//数组名 - 首元素的地址
//     // char *p = arr;
//     for (int i = 0; i < 10; i++)
//     {
//         *(p + i) = 1;
//     }
//     return 0;

    // int *p = test();
    // printf("%d\n", *p);

    int b = 0;
    int a = 10;
    int* pa = &a;//初始化
    int *p = NULL;//null

    return 0;
 }