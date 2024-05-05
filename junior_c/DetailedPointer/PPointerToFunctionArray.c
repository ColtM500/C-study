// 指向函数指针数组的指针
#include <stdio.h>

int Add(int x, int y)
{
    return x + y;
}

int main()
{
    int arr[10] = {0};
    int(*p)[10] = &arr; // 取出数组的地址

    int (*pfArr[4])(int, int); // pfArr是一个数组-函数指针的数组

    return 0;
}