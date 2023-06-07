#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
    int data;           // ������
    struct LNode *next; // ָ����
} LNode, *LinkList;
//    LinkList��ǿ������һ��������
//    LNode*��ǿ������һ���ڵ�
//    LNode=*LinkList

bool InitList(LinkList &L) // ��ʼ��������
{
    L = (LNode *)malloc(sizeof(LNode)); // ����һ��ͷ�ڵ�
    if (L == NULL)
        return false; // �ڴ治�㣬����ʧ��
    L->next = NULL;   // ͷ�ڵ�֮��û�нڵ�
    return true;
}

bool Empty(LinkList &L) // �ж��ǲ��ǿձ�
{
    return (L == NULL); // ����ǿձ�����1��������ǿձ�����0��
}

// void Inita(LinkList &L)//��ʼ��������(ʹ�õ���ͷ��)
//{
//	printf("��������Ҫ�����ĵ�����ĳ��ȣ�");
//	int a;
//	scanf("%d", &a);
//	printf("������%d����:",a);
//	for (int i = 1; i <= a; i++)
//	{
//		LNode *p = L;
//		LNode *s = (LNode*)malloc(sizeof(LNode));//����ռ���µĽڵ�s
//		scanf("%d", &s->data);//����ֵ�������ڵ��������
//		s->next = p->next;//�ı����ڵ��ָ����
//		p->next = s;//ʹͷ�ڵ��ָ����ָ�����Ľڵ�
//	}
// }

void Initb(LinkList &L) // ��ʼ��������(ʹ�õ���β��)
{
    LNode *p = L;
    while (p->next) // ��ѭ����pָ��βָ��
        p = p->next;
    int a;
    printf("��������Ҫ�����ĵ�����ĳ���:");
    scanf("%d", &a);
    printf("������%d������", a);
    for (int i = 1; i <= a; i++)
    {
        LNode *s = (LNode *)malloc(sizeof(LNode)); // ����һ���½ڵ�s
        p->next = s;                               // ��pָ��s
        scanf("%d", &s->data);                     // ����ֵ����s�ڵ��������
        s->next = NULL;                            // ��s�ڵ��ָ��ָ���ָ��
        p = p->next;                               // ��pָ��ָ���ʱ��βָ�루s�ڵ㣩
    }
}

bool ListInsert(LinkList &L) // �����������һ��ֵ����Ҫ���λ��
{
    int i, e;
    printf("��������Ҫ�����Ԫ�غ�Ҫ�����λ�ã�");
    scanf("%d %d", &e, &i);
    if (i < 1)
    {
        printf("���ݷǷ�,����ʧ��\n");
        return false; // �����iС��
    }
    LNode *p; // ����һ��pָ��
    int j = 0;
    p = L; // Lָ��ͷ�ڵ㣬ͷ�ڵ��ǵ�0���ڵ㣨�������ݣ�
    while (p != NULL && j < i - 1)
    {
        p = p->next; // pָ����һ���ڵ�
        j++;
    }
    if (p == NULL) // �ж�iֵ�Ƿ����
    {
        printf("���ݷǷ�������ʧ��\n");
        return false;
    }
    LNode *s = (LNode *)malloc(sizeof(LNode)); // ����һ���µĽڵ�
    s->data = e;                               // ��Ҫ�����ֵ����ڵ�s
    s->next = p->next;                         // ��p��ָ�븴�Ƹ�s
    p->next = s;                               // ��p��ָ���Ϊָ��s
    printf("����ɹ�\n");
    return true; // ����ɹ�������true��1��
}

bool GetElem(LinkList &L) // ��λ����
{
    int i;
    printf("��Ҫ���ҵڼ���Ԫ��:");
    scanf("%d", &i);
    if (i < 1)
    {
        printf("�������ֵ�Ƿ�,ɾ��ʧ��\n");
        return false;
    }
    int j = 0;
    LNode *p = L;
    while (p != NULL && j < i) // Ϊ����p�ڵ�ָ��Ҫ���ҵĽڵ�
    {
        p = p->next; // pѭ��ָ����һ���ڵ�
        j++;
    }
    if (p == NULL) // �ж������i�ǲ��Ǵ���
    {
        printf("�������ֵ�Ƿ�,ɾ��ʧ��\n");
        return false;
    }
    if (p->next == NULL)
        return false;
    printf("��%d��Ԫ����%d\n", i, p->data);
    return true;
}

int Length(LinkList &L) // ���
{
    int len = 0;
    LNode *p = L; // �½�һ��ָ��ָ��ͷ�ڵ�
    while (p->next != NULL)
    {
        p = p->next; // ָ����һ���ڵ�
        len++;
    }
    return len; // ���ر�
}

void LocateElem(LinkList &L) // ��ֵ����
{
    int e;
    int i = 0;
    int ret = 1;
    printf("��������Ҫ���ҵ�Ԫ��ֵ��");
    scanf("%d", &e);
    LNode *p = L;           // �½�ָ��pָ��ͷ�ڵ�
    while (p->next != NULL) // ���ﲻ��д��p!=NULL,��Ȼ�ͻ�������ѭ����������
    {
        i++;
        p = p->next; // pָ��ָ����һ���ڵ�
        if (p->data == e)
        {
            printf("�ҵ��ˣ�Ԫ��%d�ڵ�%d��λ��\n", e, i);
            ret = 0;
        }
    }
    if (ret)
        printf("�Ҳ���Ԫ��%d\n", e);
}

bool ListDelete(LinkList &L) // ɾ������
{
    int i;
    printf("��������Ҫɾ����Ԫ�ص�λ�ã�");
    scanf("%d", &i);
    if (i < 1) // �ж�����i�ǲ���С��
    {
        printf("�������ֵ�Ƿ�,ɾ��ʧ��\n");
        return false;
    }
    int j = 0;
    LNode *p = L;                  // �½�һ��p�ڵ�ָ��ͷ�ڵ�
    while (p != NULL && j < i - 1) // Ϊ����p�ڵ�ָ��Ҫɾ���ڵ��ǰһ���ڵ�
    {
        p = p->next; // pѭ��ָ����һ���ڵ�
        j++;
    }
    if (p == NULL) // �ж������i�ǲ��Ǵ���
    {
        printf("�������ֵ�Ƿ�,ɾ��ʧ��\n");
        return false;
    }
    if (p->next == NULL)
        return false;
    LNode *q = p->next; // ��qָ��Ҫɾ���Ľڵ�
    int e = q->data;    // ��Ҫɾ���Ľڵ��ֵ���뵽e����ȥ
    p->next = q->next;  // ��Ҫɾ���Ľڵ��ָ��ŵ�p����ȥ
    free(q);            // �ͷſռ�
    printf("ɾ���ɹ���ɾ�����ǵ�%d��Ԫ�أ����Ԫ�ص���ֵ��%d\n", i, e);
    return true;
}

void PrintList(LinkList &L) // ��ӡ������
{
    LNode *p = L; // ����һ��pָ��ָ��ͷ�ڵ�
    printf("���е�Ԫ��Ϊ��");
    while (p->next != NULL) // �ж���һ���ڵ��ǲ��ǿ�ָ�룬Ҳ���Լ�дΪp->next
    {
        p = p->next;
        printf("%d ", p->data);
    }
    printf("\n");
}

void DestroyList(LinkList &L) // ���ٵ�����
{
    char a;
    getchar();
    printf("�Ƿ����ٵ�����(Y/N):");
    scanf("%c", &a);
    if (a == 'Y')
    {
        LNode *p, *q;     // ��������ָ��
        p = L;            // ָ��pָ��ͷ�ڵ�
        while (p != NULL) // ��ͷ����ָ����Ϊ0����������βʱ
        {
            q = p->next; // ��qָ��ͷ���ĺ������
            free(p);     // ��pָ��ָ��Ŀռ��ͷ��ˣ�����pָ�뻹���ڡ�
            p = q;       // ��p��q��ָ�������㣬��ʱp��qָ��ָ��Ķ�����һ���ڵ㣬�������ظ���һ�εĲ����ͺ��ˡ�
        }
        L = NULL; // ��ͷָ��ָ���ָ��
        printf("���ٳɹ�\n");
    }
    else
        printf("δ���ٵ�����\n");
}

void main()
{
    LinkList L;  // ����һ��ָ�������ָ�룬��ʱ��û�д���һ���ڵ�
    InitList(L); // ��ʼ��һ���ձ�
    // Inita(L);//ͷ��
    Initb(L);            // β��
    PrintList(L);        // ��ӡ������
    ListInsert(L);       // ����Ԫ��
    PrintList(L);        // ��ӡ������
    GetElem(L);          // ��λ����
    int len = Length(L); // ���
    printf("����:%d\n", len);
    LocateElem(L);    // ��ֵ����
    ListDelete(L);    // ɾ��Ԫ��
    PrintList(L);     // ��ӡ������
    int a = Empty(L); // �ж��ǲ��ǿձ�
    if (!a)
        printf("���ǿձ�\n");
    else
        printf("�ձ�\n");
    DestroyList(L); // ���ٵ�����
}

bool InsertNextNode(LNode *p, int e) // ������
{
    if (p == NULL)
        return false;
    LNode *q = (LNode *)malloc(sizeof(LNode)); // �½�һ���ڵ�q
    if (q == NULL)
        return false; // �ڴ����ʧ��
    q->next = p->next;
    q->data = e;
    p->next = q;
    return true;
}

bool InsertPriorNode(LinkList &L, LNode *p, int e) // ǰ�����
{
    // ����1��ѭ������p��ǰ����һ���ڵ�q��Ȼ���q�ڵ���к�塣�Ҹо��ǲ��緽������ʹ��
    return 0;
}

bool InsertPriorNode(LNode *p, int e) // ǰ�����
{
    // ����2�����λ�λ����p�ڵ���һ���ڵ�q��Ȼ���p��q��ֵ�����ͺ��ˡ�
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
