#include <stdio.h>

void Add(int* p)
{
    // *p++;//这样写是错的 ++ 优先级较高 是p++
    (*p)++;
}

int main()
{
    int num = 0;
    Add(&num);
    printf("num = %d\n", num);//1
    Add(&num);
    printf("num = %d\n", num);//2
    Add(&num);
    printf("num = %d\n", num);//3
    return 0;
}