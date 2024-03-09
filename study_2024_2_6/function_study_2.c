#include <stdio.h>
#include <string.h>
#include "add.h"

/*链式访问*/
// int main()
// {
//     int len = 0;
//     //1.
//     len = strlen("abc");
//     printf("%d\n", len);
//     //2.
//     printf("%zu\n", strlen("abc")); //%d会报错

//     return 0;
// }

int main()
{
    printf("%d", printf("%d", printf("%d", 43)));   //4321 printf()函数最后会返回打印的个数
    // system("pause");
    return 0;
}
