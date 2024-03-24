#include <stdio.h>
#include <string.h>

struct Stu
{
    char name[20];
    int age;
    char id[20];
};

// int main()
// {
//     int a = 10;
//     //使用struct Stu 这个类型创建了一个学生对象s1 并初始化
//     struct Stu s1 = {"张三", 20, "20240323"};
//     // printf("%s\n", s1.name);
//     // printf("%d\n", s1.age);
//     // printf("%s\n", s1.id);

//     struct Stu *ps = &s1; //&s1取s1 放进 指针变量里     ()* xx  ()类型的指针变量名为xx
//     // printf("%s\n", (*ps).name);
//     // printf("%d\n", (*ps).age);
//     // printf("%s\n", (*ps).id);
//     printf("%s\n", ps->name);
//     printf("%d\n", ps->age);
//     printf("%s\n", ps->id);

//     return 0;
// }


//隐式类型转换
// int main()
// {
//     char a = 3;
//     char b = 127;
//     char c = a + b;
//     printf("%d\n", c);
//     return 0;
// }

