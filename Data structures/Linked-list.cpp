#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *head = NULL, *ptr = NULL, *temp = NULL;

node * create(int n)
{
    int i;
    cout << "Enter the value in the linked list: ";
    for (i = 0; i < n; i++)
    {
        node *temp = new (struct node);
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

int main()
{
    int n;
    cout << "Enter the size of the linked list: ";
    cin >> n;
    head = create(n);
    traverse(head);
    return 0;
}