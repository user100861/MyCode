#include <stdio.h>
struct Birth
{ // ����ṹ������struct Birth
    int year;
    int month;
    int day;
};
struct Person // ����ṹ������struct Person
{
    int ID;
    char name[10];
    char sex;
    struct Birth birthDate; // ����struct Birth�ṹ�����birthDate
};
int main()
{
    struct Person p = {0006, "chenyan", 'F', {1980, 1, 1}};
    printf("&p:%p\n", &p);                    // ����ṹ�����p�ĵ�ַ
    printf("1D:%p\n", &p.ID);                 // �����ԱID�ĵ�ַ
    printf("name:%p\n", &p.name);             // �����Աname�ĵ�ַ
    printf("sex:%p\n", &p.sex);               // �����Աsex�ĵ�ַ
    printf("year:%p\n", &p.birthDate.year);   // �����ԱbirthDate.year��ַ
    printf("month:%p\n", &p.birthDate.month); // �����ԱbirthDate.month��ַ
    printf("day:%p\n", &p.birthDate.day);     // �����ԱbirthDate.day��ַ
    return 0;
}