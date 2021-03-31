#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *head = NULL, *ptr = NULL;

node * create(int n)
{
    int i;
    printf("Enter the value in the linked list: ");
    for (i = 0; i < n; i++)
    {
        node *temp = (node*)malloc(sizeof(node));
        scanf("%d", &temp->data);
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = temp;
        }
    }
    return (head);
}

int traverse(node *start)
{
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d \n", ptr->data);
        ptr = ptr->next;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the size of the linked list: ");
    scanf("%d", &n);
    printf("%d",n);
    head = create(n);
    traverse(head);
    return 0;
}