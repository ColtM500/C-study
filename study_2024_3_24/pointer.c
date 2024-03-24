#include <stdio.h>

int main()
{
    int a = 10;//在内存中开辟一块空间
    int *p = &a;    //取a的地址 用&操作符
                    //将a的地址存放在整形指针变量p中
    return 0;
}