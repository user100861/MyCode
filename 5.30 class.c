// #include <stdio.h>
// #include <string.h>
// struct Student // ����struct Student�ṹ������
// {
//     char name[50];
//     int studentID;
// };
// void change(struct Student stu) // struct Student�ṹ�������Ϊ��������
// {
//     strcpy(stu.name, "lisi"); // �ı�ṹ�������ֵ
//     stu.studentID = 2;
//     printf("change()����:");
//     printf("name = %s studentID = %d\n", stu.name, stu.studentID);
// }
// int main()
// {
//     struct Student student = {"Zhang San", 1}; // ����ṹ�����student
//     change(student);                           // ����change()������student������Ϊ����
//     printf("main()����:");
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