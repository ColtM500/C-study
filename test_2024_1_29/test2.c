#include <stdio.h>


// int main()
// {
//     int a;
//     int b;
//     scanf("%d%d", &a,&b);
//     printf("%d*%d=%d\n", a,b,a*b);

//     return 0;
// }

//定义函数
get_max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int a = 10;
    int b = 20;
    
    //函数的使用
    int max = get_max(a, b);
}