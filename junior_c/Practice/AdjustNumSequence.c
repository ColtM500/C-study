// #include <stdio.h>

// void print(int arr[], int sz)
// {
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("\n");
// }

// void move(int arr[], int sz)
// {
//     int left = 0;
//     int right = sz - 1;
//     // 从左边找偶数
//     while ((left < right) && (arr[left] % 2 == 1))
//     {
//         left++;
//     }
//     // 从右边找奇数
//     while ((left < right) && (arr[right] % 2 == 0))
//     {
//         right--;
//     }
//     if (left < right)
//     {
//         int tmp = arr[left];
//         arr[left] = arr[right];
//         arr[right] = tmp;
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     move(arr, sz);

//     // print(arr, sz);

//     return 0;
// }