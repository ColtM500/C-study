#include <stdio.h>

int main()
{
    // double a = 5 % 2;//商2余1
    // printf("a = %lf\n", a);
    // return 0;

    // int a = 16;
    // >> -- 右移操作符
    // 移动的是二进制位
    // 10000
    // int b = a >> 1;
    // printf("b = %d\n", b);

    // int a = 5;
    // //整数的二进制表示有: 原码 反码 补码
    // //存储到内存的是补码
    // int b = a << 1;
    // printf("b = %d\n", b);
    // return 0;

    //& - 按2禁止位与
    //举例子计算 用32个比特位显示
    // int a = 3;
    // int b = 5;
    // int c = a & b;
    // printf("%d", c);

    //| - 按2进制位或
    // int a = 3;
    // int b = 5;
    // int c = a | b;
    // printf("%d", c);
   
    //相同为0 相异为1
    // int a = 3;
    // int b = 5;
    // int c = a ^ b;
    // printf("%d", c);

    //交换两个int变量的值 不能使用第三个变量
    // 即a=3 b=5 交换之后a=5 b=3
    // int a = 3;
    // int b = 5;
    // int tmp = 0;//临时变量
    // printf("before: a=%d b=%d\n", a, b);
    // tmp = a;
    // a = b;
    // b = tmp;

    //加减法-可能会溢出
    // a = a + b;
    // b = a - b;
    // a = a - b;

    //异或的方法
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;
    // printf("after: a=%d b=%d\n", a, b);


    // //求一个整数存储在内存中的二进制中的1的个数
    // int num = 0;
    // int count = 0;
    // scanf("%d", &num);

    // // 将32bit都拿到
    // for (int i = 0; i < 32; i++)
    // {
    //     if(1 == ((num>>i) & 1))
    //         count++;
    // }
    // printf("%d\n", count);

    // // 统计num的补码中1的个数（存进内存里的二进制是补码）
    // 这种写法不能算负数
    // while (num)
    // {
    //     if (num % 2 == 1)
    //         count++;
    //     num = num / 2; // 统计完了之后把这一位去掉
    // }
    // printf("%d\n", count);

    

    return 0;
}