#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *circle_create(int n);
void count_off(Node *head, int n, int k, int m);

int main()
{
    int n, k, m;
    scanf("%d%d%d", &n, &k, &m);
    Node *head = circle_create(n);
    count_off(head, n, k, m);
    return 0;
}

Node *circle_create(int n)
{
    Node *temp, *new_node, *head;
    int i;

    // ������һ�������ڵ㲢������
    temp = (Node *)malloc(sizeof(Node));
    head = temp;
    head->data = 1;

    // ������ 2 ���� n �������ڵ㲢������
    for (i = 2; i <= n; i++)
    {
        new_node = (Node *)malloc(sizeof(Node));
        new_node->data = i;
        temp->next = new_node;
        temp = new_node;
    }

    // ���һ���ڵ�ָ��ͷ������ѭ������
    temp->next = head;

    return head;
}

void count_off(Node *head, int n, int k, int m)
{
    int counter = 0;
    int i, j;
    Node *temp, *flag;
    temp = head;
    while (counter < k - 1)
    {
        temp = temp->next;
        counter++;
    }
    //printf("temp->data = %d\n", temp->data);
    if (m != 1)
    {
        for (j = 0; j < n; j++)
        {
            for (i = 0; i < m - 1; i++)
            {
                if (i == m - 2)
                {
                    flag = temp;
                }
                temp = temp->next;
            }
            printf("%d ", temp->data);
            flag->next = temp->next;
            temp = temp->next;
        }
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }
    return;
}