// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     for (int i = 0; i < 1000; i++)
//     {
//         // 判断i是否为水仙花数（自幂数）
//         // 1.计算i的位数 - n位数
//         int n = 1;
//         int sum = 0;
//         // 123/10 n++
//         // 12/10 n++
//         // 1/10 0
//         int temp = i; // 如果直接用i i会直接变0了 用个临时变量装/=10
//         while (temp /= 10)
//         {
//             n++;
//         }

//         //  2.计算i的每一位的n次方之和
//         temp = i;
//         while (temp)
//         {
//             sum += pow(temp % 10, n);
//             temp /= 10;
//         }

//         // 3.比较i==sum
//         if (i == sum)
//         {
//             printf("%d ", i);
//         }
//     }
// }