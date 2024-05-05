// #include <stdio.h>

// void menu()
// {
//     printf("******************\n");
//     printf("** 1.add   2.sub**\n");
//     printf("** 3.mul   4.div**\n");
//     printf("**    5.xor     **\n");
//     printf("**    0.exit    **\n");
//     printf("******************\n");
// }

// int Add(int x, int y)
// {
//     return x + y;
// }

// int Sub(int x, int y)
// {
//     return x - y;
// }

// int Mul(int x, int y)
// {
//     return x * y;
// }

// int Div(int x, int y)
// {
//     return x / y;
// }

// int Xor(int x, int y)
// {
//     return x ^ y;
// }

// void Calc(int (*pf)(int, int))
// {
//     int x = 0;
//     int y = 0;
//     printf("请输入两个操作数:>");
//     scanf("%d %d", &x, &y);
//     printf("%d\n", pf(x, y));
// }

// int main()
// {
//     int input = 0;
//     int x = 10;
//     int y = 20;
//     int (*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor}; // 函数指针数组
//     do
//     {
//         menu();
//         printf("请选择:>");
//         scanf("%d", &input);
//         switch (input)
//         {
//         case 1:
//             Calc(Add);
//             break;
//         case 2:
//             Calc(Sub);
//             break;
//         case 3:
//             Calc(Mul);
//             break;
//         case 4:
//             Calc(Div);
//             break;
//         case 5:
//             Calc(Xor);
//             break;
//         case 0:
//             printf("退出\n");
//             break;
//         default:
//             printf("选错误\n");
//             break;
//         }

//         // {
//         //     menu();
//         //     printf("请选择:>");
//         //     scanf("%d", &input);
//         //     if (input >= 1 && input <= 5)
//         //     {
//         //         printf("请输入两个操作数:>");
//         //         scanf("%d%d", &x, &y);
//         //         int res = pfArr[input](x, y);
//         //         printf("%d\n", res);
//         //     }
//         //     else if (input == 0)
//         //     {
//         //         printf("退出\n");
//         //     }
//         //     else
//         //     {
//         //         printf("选择错误\n");
//         //     }

//         //     printf("请输入两个操作数:>");
//         //     scanf("%d %d", &x, &y);
//         //     int res = pfArr[input](x, y);
//         //     printf("%d\n", res);

//     } while (input);
// }