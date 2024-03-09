#include <stdio.h>
#include <string.h>
//冒泡排序 函数将一个整形数组排序

// void bubble_sort(int arr[], int sz)
// {
//     //确定冒泡排序的趟数
//     for (int i = 0; i < sz - 1; i++)
//     {
//         int flag = 1; //假设这一趟要排序的数据已经有序了
//         //每一趟冒泡排序
//         for (int j = 0; j < sz - 1 - i; j++)
//         {
//             if(arr[i]<arr[i+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 flag = 0;//本趟排序的数据其实不完全有序
//             }
//         }
//         if(flag == 1)
//         {
//             break;
//         }
//     }
// }

// int main()
// {
//     // int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//     int arr[] = {0,1,2,3,4,5,6,7,8,9};
//     int sz = sizeof(arr) / sizeof(arr[0]);  //10 
//     //对arr进行排序 排成升序
//     //arr是数组 我们对数组arr进行传参 实际上传递过去的是数组arr首元素的地址 &arr[0]
//     bubble_sort(arr, sz);
//     for (int i = 0; i < sz; i++)
//     {
//         printf("%d", arr[i]);
//     }
//         return 0;
// } 

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int sz = sizeof(arr)/sizeof(arr[0]);

    //1.sizeof(数组名) - 数组名表示整个数组， sizeof（数组名）计算的是整个数组的大小 单位是字节
    //2.&数组名， 数组名代表整个数组, &数组名， 取出的是整个数组的地址 
    printf("%p\n", arr);//000000000061FE00
    printf("%p\n", arr+1);//000000000061FDE4

    printf("%p\n", &arr[0]);//000000000061FE00
    printf("%p\n", &arr[0]+1);//000000000061FDE4

    printf("%p\n", &arr);//000000000061FE00
    printf("%p\n", &arr+1);//000000000061FDFC

    printf("%d\n", *arr);//1

    return 0;
}