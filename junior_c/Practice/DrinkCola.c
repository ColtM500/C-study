// #include <stdio.h>

// // 喝汽水 1瓶汽水1元 2个空瓶可以换一瓶汽水 给20元 可以是多少汽水
// int main()
// {
//     int money = 0;
//     int total = 0;
//     int empty = 0;
//     scanf("%d", &money);

//     // // 买回来的汽水喝掉
//     // total = money;
//     // empty = money; // 喝完之后 money就为empty
//     // // 换回来的汽水
//     // while (empty >= 2)
//     // {
//     //     total += empty / 2;
//     //     empty = empty / 2 + empty % 2;
//     // }

//     // 递归
//     // 买回来的汽水喝掉
//     if (money == 0)
//         total = 0;
//     else
//         total = 2 * money - 1;

//     printf("total = %d\n", total);

//     return 0;
// }