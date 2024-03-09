#include <stdio.h>
#include <string.h>

int Binary_search(int arr[],int length,int key)
{
    int left = 0;
    int right = length - 1;

    while(left<=right)
    {
        int mid = (left + right) / 2;
        if(arr[mid]<key)
        {
            left = mid + 1;
        }
        else if(arr[mid]>key)
        {
            right = mid - 1;    //左右两边+-是为了卡范围
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    //思路：1.怎么用  2.怎么实现
    //二分查找 1.如何查 2.查谁 3.返回谁
    //在一个有序数组中查找具体的某个数
    //如果找到了返回下标 找不到返回-1 

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 7;
    int result = Binary_search(arr, sizeof(arr)/sizeof(arr[0]), key);
    if(result==-1)
        printf("找不到指定数字");
    else
        printf("已找到下标是%d\n", result);

    return 0;
}