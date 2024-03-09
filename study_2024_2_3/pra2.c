#include <stdio.h>

int Is_leap_year(int num)
{
    if((num%4==0&&num%100!=0) || (num%400==0))
        return 1;
    else
        return 0;
}

int main()
{
    for (int year = 1000; year <= 2000; year ++)
    {
        if(Is_leap_year(year) == 1)
        {
            //判断year是否为闰年
            printf("%d\t", year);
        }
    }
}