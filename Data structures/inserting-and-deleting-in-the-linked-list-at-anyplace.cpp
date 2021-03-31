#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *head = NULL, *ptr = NULL, *temp = NULL;

node *create(int n)
{
    int i;
    cout << "Enter the value in the linked list: ";
    for (i = 1; i <= n; i++)
    {
        temp = new (struct node);
        cin >> temp->data;
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

int traverse(node *head)
{
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " " << ptr->next << ", ";
        ptr = ptr->next;
    }
    return 0;
}

node *node_insert(int add1, node *head)
{
    int i;
    ptr = head;
    if (add1 == 1)
    {
        temp = new (struct node);
        cout << "Enter the value to insert: ";
        cin >> temp->data;
        temp->next = ptr;
        head = temp;
    }
    else
    {
        for (i = 1; i < add1 - 1; i++)
        {
            ptr = ptr->next;
        }
        temp = new (struct node);
        cout << "Enter the value to insert: ";
        cin >> temp->data;
        temp->next = ptr->next;
        ptr->next = temp;
    }
    traverse(head);
    return (head);
}

node *node_delete(int position, node *head)
{
    ptr = head;
    if (position == 1)
    {
        head = ptr->next;
        delete (ptr);
    }
    else
    {
        for (int i = 1; i < position - 1; i++)
        {
            ptr = ptr->next;
        }
        temp = ptr;
        ptr = ptr->next;
        temp->next = ptr->next;
        delete (ptr);
    }
    traverse(head);
    return (head);
}

int main()
{
    int n, add;
    cout << "Enter the size of the linked list: ";
    cin >> n;
    head = create(n);
    traverse(head);
    cout << "\nEnter the place where you want to add the new node: ";
    cin >> add;
    head = node_insert(add, head);
    int position;
    cout << "\nEnter the position where you want to delete: ";
    cin >> position;
    head = node_delete(position, head);
    return 0;
}