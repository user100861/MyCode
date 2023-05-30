// #include <stdio.h>
// #include <string.h>
// struct Student // 定义struct Student结构体类型
// {
//     char name[50];
//     int studentID;
// };
// void change(struct Student stu) // struct Student结构体变量作为函数参数
// {
//     strcpy(stu.name, "lisi"); // 改变结构体变量的值
//     stu.studentID = 2;
//     printf("change()函数:");
//     printf("name = %s studentID = %d\n", stu.name, stu.studentID);
// }
// int main()
// {
//     struct Student student = {"Zhang San", 1}; // 定义结构体变量student
//     change(student);                           // 调用change()函数，student变量作为参数
//     printf("main()函数:");
//     printf("name = %s studentID = %d\n", student.name, student.studentID);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>
// struct Student
// {
//     char name[50];
//     int studentID;
// };
// void change(struct Student *stu)
// {
//     strcpy(stu->name, "lisi");
//     stu->studentID = 2;
// }
// int main()
// {
//     struct Student student = {"Zhang San", 1};
//     change(&student);
//     printf("name = %s studentID = %d\n", student.name, student.studentID);
//     return 0;
// }
#include <stdio.h>
union INFO
{
    int a;
    int b;
    int c;
};
int main()
{
    union INFO A;
    A.a = 1;
    A.b = 2;
    A.c = 3;
    printf("a:%d\n", A.a);
    printf("b:%d\n", A.b);
    printf("c:%d\n", A.c);
    return 0;
}