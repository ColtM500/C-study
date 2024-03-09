#include <stdio.h>

//递归与迭代
//求阶乘
int Fac1(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }
    return res;
}


int Fac2(int n)
{
    if(n<=1)
        return 1;
    else
        return n * Fac2(n - 1);
}

//求斐波那契数
// int count = 0;
// int Fib(int n)
// {
//     if(n==3)    //第三个斐波那契数重新计算了多少次
//     {
//         count++;
//     }
//     if(n<=2)
//         return 1;
//     else
//         return Fib(n - 1) + Fib(n - 2);
// }
int Fib(int n)
{
    int a = 1;
    int b = 1;
    int c = 1;  //这里的c要改成1 因为第一个和第二个n都是1

    while(n>2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
}


int main()
{
    // //求n的阶乘
    // int n = 0;
    // int res1 = 0;
    // int res2 = 0;
    // scanf("%d",&n);
    // res1 = Fac1(n);  //循环的方式
    // printf("%d\n", res1);
    // res2 = Fac2(n);  //递归的方式
    // printf("%d\n", res2);

    // return 0;

    //描述第n个斐波那契数的时候
    //1 1 2 3 5 8
    int n = 0;
    int res = 0;
    scanf("%d", &n);
    //TODO:测试驱动开发
    res = Fib(n);
    printf("res =  %d\n", res);
    // printf("count = %d\n", count);
    return 0;
}