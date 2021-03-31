#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

node *head = NULL, *ptr = NULL, *temp = NULL, *next_ptr = NULL, *prev_ptr = NULL;

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
    cout << endl;
    return 0;
}


int sorting(node *head)
{
    cout << "Sorted data in Ascending order is : \n";
    for(ptr = head; ptr->next != NULL; ptr = ptr->next)
    {
        for(next_ptr = ptr->next; next_ptr != NULL; next_ptr = next_ptr->next)
        {
            if(ptr->data > next_ptr->data)
            {
                int c = 0;
                c = ptr->data;
                ptr->data = next_ptr->data;
                next_ptr->data = c;
            }        
        }
    }
    traverse(head);
}

int main()
{
    int n, add;
    cout << "Enter the size of the linked list: ";
    cin >> n;
    head = create(n);
    traverse(head);
    sorting(head);
    return 0;
}