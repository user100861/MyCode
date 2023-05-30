#include <stdio.h>
struct Birth
{ // 定义结构体类型struct Birth
    int year;
    int month;
    int day;
};
struct Person // 定义结构体类型struct Person
{
    int ID;
    char name[10];
    char sex;
    struct Birth birthDate; // 包含struct Birth结构体变量birthDate
};
int main()
{
    struct Person p = {0006, "chenyan", 'F', {1980, 1, 1}};
    printf("&p:%p\n", &p);                    // 输出结构体变量p的地址
    printf("1D:%p\n", &p.ID);                 // 输出成员ID的地址
    printf("name:%p\n", &p.name);             // 输出成员name的地址
    printf("sex:%p\n", &p.sex);               // 输出成员sex的地址
    printf("year:%p\n", &p.birthDate.year);   // 输出成员birthDate.year地址
    printf("month:%p\n", &p.birthDate.month); // 输出成员birthDate.month地址
    printf("day:%p\n", &p.birthDate.day);     // 输出成员birthDate.day地址
    return 0;
}