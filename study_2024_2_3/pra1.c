#include <stdio.h>
#include <math.h> 

int is_prime(int num)
{
    for (int flag = 2; flag <= sqrt(num); flag ++)//用sqrt减少范围区间
    {
        if(num%flag == 0)
            return 0;
    }
    return 1;
}

int main()
{
    //打印100-200之间的素数
    for (int i = 100; i <= 200; i++)
    {
        //判断i是否为素数
        if(is_prime(i)==1)
        {
            printf("%d\t",i);
        }
    }
    return 0;
}