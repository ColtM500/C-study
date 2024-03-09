#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
    int z = 0;
    z = x + y;
    return z;
}

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int sum = Add(a, b);
//     printf("%d\n", sum);
//     return 0;
// }

// int main()
// {
//     char arr1[] = "bit";
//     char arr2[20] = "########";
//     strcpy(arr2, arr1);
//     printf("%s\n", arr2);
//     //strcpy - string copy - 字符串拷贝
//     //strlen - string length - 字符串长度有关

//     return 0;
// }

// int main()
// {
//     //memset 
//     //memory - 内存 set - 设置

//     char arr[] = "hello world";
//     memset(arr, '*', 5);
//     printf("%s\n", arr);
//     return 0;
// }

//定义函数
//形参 - 形式参数 - 形式上参数
int get_max(int x, int y)
{
    return (x > y) ? x : y;
}

// int main()
// {
//     int a = 10;
//     int b = 20;
//     //函数的使用
//     int max1 = get_max(a, b);
//     printf("max1 = %d\n", max1);
//     int max2 = get_max(300, 100);
//     printf("max2 = %d\n", max2);
//     return 0;
// }


//交换函数
//不能完成交换变量的值的任务
//当实参传给形参时
//形参其实是实参的一份临时拷贝
//对形参的修改 是不会改变实参的
void Swap1(int x, int y)
{
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}

void Swap2(int* pa, int* pb)    //用指针变量接收传过来的地址
{
    int tmp = 0;
    tmp = *pa;    //*pa=外部的a  *pb同理
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    // int temp = 0;

    printf("a=%d, b=%d\n", a, b);   //a=10, b=20

    // Swap1(a, b);
    // temp = a;
    // a = b;
    // b = temp;
    Swap2(&a, &b);  //传a、b的地址
    printf("a=%d, b=%d\n", a, b);   //a=10, b=20

    return 0;
}


// int main()
// {
//     int a = 10;
//     //&a a的地址;pa = &a 存放a的地址变量即指针变量;int* pa 整形的指针变量
//     int* pa = &a;
//     *pa;    //解引用操作
//     return 0;
// }

