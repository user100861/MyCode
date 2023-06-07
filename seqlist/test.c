#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;           // 数据域
    struct LNode *next; // 指针域
} LNode, *LinkList;
//    LinkList：强调这是一个单链表
//    LNode*：强调这是一个节点
//    LNode=*LinkList

bool InitList(LinkList &L) // 初始化单链表
{
    L = (LNode *)malloc(sizeof(LNode)); // 分配一个头节点
    if (L == NULL)
        return false; // 内存不足，分配失败
    L->next = NULL;   // 头节点之后还没有节点
    return true;
}

bool Empty(LinkList &L) // 判断是不是空表
{
    return (L == NULL); // 如果是空表，返回1。如果不是空表，返回0。
}

// void Inita(LinkList &L)//初始化单链表(使用的是头插)
//{
//	printf("请输入你要创建的单链表的长度：");
//	int a;
//	scanf("%d", &a);
//	printf("请输入%d个数:",a);
//	for (int i = 1; i <= a; i++)
//	{
//		LNode *p = L;
//		LNode *s = (LNode*)malloc(sizeof(LNode));//申请空间给新的节点s
//		scanf("%d", &s->data);//输入值放入插入节点的数据域
//		s->next = p->next;//改变插入节点的指针域
//		p->next = s;//使头节点的指针域指向插入的节点
//	}
// }

void Initb(LinkList &L) // 初始化单链表(使用的是尾插)
{
    LNode *p = L;
    while (p->next) // 用循环让p指向尾指针
        p = p->next;
    int a;
    printf("请输入你要创建的单链表的长度:");
    scanf("%d", &a);
    printf("请输入%d个数：", a);
    for (int i = 1; i <= a; i++)
    {
        LNode *s = (LNode *)malloc(sizeof(LNode)); // 创建一个新节点s
        p->next = s;                               // 让p指向s
        scanf("%d", &s->data);                     // 输入值放入s节点的数据域
        s->next = NULL;                            // 让s节点的指针指向空指针
        p = p->next;                               // 让p指针指向此时的尾指针（s节点）
    }
}

bool ListInsert(LinkList &L) // 插入操作，把一个值插入要求的位置
{
    int i, e;
    printf("请输入你要插入的元素和要插入的位置：");
    scanf("%d %d", &e, &i);
    if (i < 1)
    {
        printf("数据非法,插入失败\n");
        return false; // 输入的i小了
    }
    LNode *p; // 创建一个p指针
    int j = 0;
    p = L; // L指向头节点，头节点是第0个节点（不存数据）
    while (p != NULL && j < i - 1)
    {
        p = p->next; // p指向下一个节点
        j++;
    }
    if (p == NULL) // 判断i值是否大了
    {
        printf("数据非法，插入失败\n");
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode)); // 创建一个新的节点
    s->data = e;                               // 把要插入的值放入节点s
    s->next = p->next;                         // 把p的指针复制给s
    p->next = s;                               // 把p的指针改为指向s
    printf("插入成功\n");
    return true; // 插入成功，返回true（1）
}

bool GetElem(LinkList &L) // 按位查找
{
    int i;
    printf("你要查找第几个元素:");
    scanf("%d", &i);
    if (i < 1)
    {
        printf("输入的数值非法,删除失败\n");
        return false;
    }
    int j = 0;
    LNode *p = L;
    while (p != NULL && j < i) // 为了让p节点指向要查找的节点
    {
        p = p->next; // p循环指向下一个节点
        j++;
    }
    if (p == NULL) // 判断输入的i是不是大了
    {
        printf("输入的数值非法,删除失败\n");
        return false;
    }
    if (p->next == NULL)
        return false;
    printf("第%d个元素是%d\n", i, p->data);
    return true;
}

int Length(LinkList &L) // 求表长
{
    int len = 0;
    LNode *p = L; // 新建一个指针指向头节点
    while (p->next != NULL)
    {
        p = p->next; // 指向下一个节点
        len++;
    }
    return len; // 返回表长
}

void LocateElem(LinkList &L) // 按值查找
{
    int e;
    int i = 0;
    int ret = 1;
    printf("请输入你要查找的元素值：");
    scanf("%d", &e);
    LNode *p = L;           // 新建指针p指向头节点
    while (p->next != NULL) // 这里不能写成p!=NULL,不然就会陷入死循环，出不来
    {
        i++;
        p = p->next; // p指针指向下一个节点
        if (p->data == e)
        {
            printf("找到了，元素%d在第%d个位置\n", e, i);
            ret = 0;
        }
    }
    if (ret)
        printf("找不到元素%d\n", e);
}

bool ListDelete(LinkList &L) // 删除操作
{
    int i;
    printf("请输入你要删除的元素的位置：");
    scanf("%d", &i);
    if (i < 1) // 判断输入i是不是小了
    {
        printf("输入的数值非法,删除失败\n");
        return false;
    }
    int j = 0;
    LNode *p = L;                  // 新建一个p节点指向头节点
    while (p != NULL && j < i - 1) // 为了让p节点指向要删除节点的前一个节点
    {
        p = p->next; // p循环指向下一个节点
        j++;
    }
    if (p == NULL) // 判断输入的i是不是大了
    {
        printf("输入的数值非法,删除失败\n");
        return false;
    }
    if (p->next == NULL)
        return false;
    LNode *q = p->next; // 用q指向要删除的节点
    int e = q->data;    // 把要删除的节点的值放入到e里面去
    p->next = q->next;  // 把要删除的节点的指针放到p里面去
    free(q);            // 释放空间
    printf("删除成功，删除的是第%d个元素，这个元素的数值是%d\n", i, e);
    return true;
}

void PrintList(LinkList &L) // 打印单链表
{
    LNode *p = L; // 创建一个p指针指向头节点
    printf("表中的元素为：");
    while (p->next != NULL) // 判断下一个节点是不是空指针，也可以简写为p->next
    {
        p = p->next;
        printf("%d ", p->data);
    }
    printf("\n");
}

void DestroyList(LinkList &L) // 销毁单链表
{
    char a;
    getchar();
    printf("是否销毁单链表(Y/N):");
    scanf("%c", &a);
    if (a == 'Y')
    {
        LNode *p, *q;     // 创建两个指针
        p = L;            // 指针p指向头节点
        while (p != NULL) // 当头结点的指针域不为0，即不是链尾时
        {
            q = p->next; // 让q指向头结点的后续结点
            free(p);     // 把p指针指向的空间释放了，但是p指针还存在。
            p = q;       // 让p和q都指向后续结点，此时p和q指针指向的都是下一个节点，接下来重复这一段的操作就好了。
        }
        L = NULL; // 让头指针指向空指针
        printf("销毁成功\n");
    }
    else
        printf("未销毁单链表\n");
}

void main()
{
    LinkList L;  // 声明一个指向单链表的指针，此时并没有创建一个节点
    InitList(L); // 初始化一个空表
    // Inita(L);//头插
    Initb(L);            // 尾插
    PrintList(L);        // 打印单链表
    ListInsert(L);       // 插入元素
    PrintList(L);        // 打印单链表
    GetElem(L);          // 按位查找
    int len = Length(L); // 求表长
    printf("表长是:%d\n", len);
    LocateElem(L);    // 按值查找
    ListDelete(L);    // 删除元素
    PrintList(L);     // 打印单链表
    int a = Empty(L); // 判断是不是空表
    if (!a)
        printf("不是空表\n");
    else
        printf("空表\n");
    DestroyList(L); // 销毁单链表
}

bool InsertNextNode(LNode *p, int e) // 后插操作
{
    if (p == NULL)
        return false;
    LNode *q = (LNode *)malloc(sizeof(LNode)); // 新建一个节点q
    if (q == NULL)
        return false; // 内存分配失败
    q->next = p->next;
    q->data = e;
    p->next = q;
    return true;
}

bool InsertPriorNode(LinkList &L, LNode *p, int e) // 前插操作
{
    // 方法1，循环查找p的前面那一个节点q，然后对q节点进行后插。我感觉是不如方法二好使。
    return 0;
}

bool InsertPriorNode(LNode *p, int e) // 前插操作
{
    // 方法2，移形换位。在p节点后插一个节点q，然后把p和q的值交换就好了。
    if (p == NULL)
        return false;
    LNode *q = (LNode *)malloc(sizeof(LNode));
    if (q == NULL)
        return false;
    q->next = p->next;
    p->next = q;
    q->data = p->data;
    p->data = e;
    return true;
}
