#include <stdio.h>
// enum week
// {
//     sun,
//     mon,
//     tue,
//     wed,
//     thu,
//     fri,
//     sat
// } day;
// union u_type

// {
//     int i;

//     char ch;

//     float a;

// } temp;
// union data

// {
//     int i;

//     char c;

//     float f;

// } a;

// int n;
// struct sk

// {
//     int a;

//     float b;

// } data, *p = &data;
struct student

{
    int age;

    char num[8];

} stu[3] = {{20, "200401"}, {21, "200402"}, {10, "200403"}};

struct student *p = stu;
int main()
{
    // day = sun;
    // temp.i = 266;

    // printf("%d", temp.ch);
    // a.i = 5;
    // (*p).data.a = 1;
    // (*p).a = 1;
    (*p).num = a;
}