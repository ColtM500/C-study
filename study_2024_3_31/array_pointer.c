#include <stdio.h>

#define NUM 5

int main()

{

    int arr[NUM] = {1, 2, 3, 4, 5};

    int(*parr)[NUM] = &arr;

    for (int i = 0; i < NUM; i++)
    {

        // 以下两行代码等价

        // printf("%d ", (*parr)[i]);

        printf("%d", *(*parr + i));
    }

    printf("\n");

    return 0;
}