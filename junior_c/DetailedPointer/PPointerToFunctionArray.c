// // 指向函数指针数组的指针
// #include <stdio.h>

// int Add(int x, int y)
// {
//     return x + y;
// }

// // int main()
// // {
// //     int arr[10] = {0};
// //     int(*p)[10] = &arr; // 取出数组的地址

// //     int (*pfArr[4])(int, int); // pfArr是一个数组-函数指针的数组
// //     int (*(*ppfArr)[4])(int, int) = &pfArr;
// //     //ppfArr 是一个数组指针 指针指向的数组有4个元素
// //     //指向的数组的每个元素的类型是一个函数指针
// //     return 0;
// // }

// void BubbleSort(int arr[], int sz)
// {
// }

// // qsort - 可以排序任意类型的数据

// int main()
// {
//     // 冒泡排序函数
//     // 冒泡排序函数只能排序整型数组
//     int arr[] = {1, 3, 5, 7, 9, 2, 4, 8, 0};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     BubbleSort(arr, sz);
//     return 0;
// }