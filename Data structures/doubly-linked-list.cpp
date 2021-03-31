#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    struct node *prev, *next;
};

node *head = NULL,
     *tail = NULL,
     *ptr = NULL;

node *create(int n)
{
    cout << "Enter the value in the linked list: ";
    for (int i = 1; i <= n; i++)
    {
        node *new_node = new (struct node);
        cin >> new_node->data;
        new_node->next = NULL;
        new_node->prev = NULL;
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            new_node->prev = ptr;
            ptr->next = new_node;
            new_node->next = NULL;
            tail = new_node;
        }
    }
    return (head);
}

int traverse(node *head)
{
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " " << ptr->prev << " " << ptr->next << ", ";
        ptr = ptr->next;
    }
    return 0;
}

node *node_insert(int pos, node *head)
{
    node *new_node = new (struct node);
    cout << "Enter the value to insert: ";
    cin >> new_node->data;
    if (pos == 1)
    {
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
    }
    else if (pos == 0)
    {
        new_node->next = NULL;
        new_node->prev = tail;
        tail->next = new_node;
        tail = new_node;
    }
    else
    {
        ptr = head;
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        new_node->prev = ptr;
        ptr->next->prev = new_node;
        ptr->next = new_node;
    }
    traverse(head);
    return (head);
}

node *node_delete(int pos, node *head)
{
    if (pos == 1)
    {
        ptr = head;
        head->next->prev = NULL;
        head = head->next;
        delete (ptr);
    }
    else if (pos == 0)
    {
        ptr = tail;
        tail->prev->next = NULL;
        tail = tail->prev;
        delete (ptr);
    }
    else
    {    
        ptr = head;
        for (int i = 1; i < pos - 1; i++)
        {
            ptr = ptr->next;
        }
        node *ptr_2 = ptr->next;
        ptr->next = ptr->next->next;
        ptr->next->prev = ptr;
        delete (ptr_2);
    }
    traverse(head);
    return (head);
}

int main()
{
    int n;
    cout << "Enter the size of the linked list: ";
    cin >> n;
    head = create(n);
    traverse(head);

    cout << "\n===========COMMANDS===========\n\t'insert' for insertion\n\t'delete' for deletion\n\t'exit' for end of program";
    cout << "\n=========INSTRUCTIONS=========\n\t'1' for first pos\n\t'0' for last pos\n\tenter particular pos for specific node deletion\n";

    string a;
    while (a != "exit")
    {
        cout << "\nEnter command: ";
        cin >> a;
        if (a == "insert")
        {
            int pos;
            cout << "Enter the pos: ";
            cin >> pos;
            head = node_insert(pos, head);
        }
        else if (a == "delete")
        {
            int pos;
            cout << "Enter the pos: ";
            cin >> pos;
            head = node_delete(pos, head);
        }
        else if (a == "exit")
        {
            cout << "Good Bye :)";
            break;
        }
        else
            cout << "\nWrong Input !\n";
    }
    return 0;
}