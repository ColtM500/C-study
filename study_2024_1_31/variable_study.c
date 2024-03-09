#include <stdio.h>

int global = 2019;//全局变量


int  variables_()
{
    // int local = 2018;//局部变量
    int global = 2020;
    printf("global = %d\n", global);

    //当局部变量和全局变量同名时，局部变量优先使用
    //global = 2020
    return 0;
}

int constant_()
{
    //const - 常属性
    //const 修饰的常变量
    // const int num = 4;
    // printf("%d\n", num);
    // // num = 8;
    // printf("%d\n", num);

    //字面常量
    //3
    //100
    //3.14 //

    return 0;
}


int main()
{
   variables_();
   constant_();

   return 0;
}