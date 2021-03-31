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
    cout << endl;
    return 0;
}

node *node_insert_info(int info, node *head)
{
    node *new_node = new (struct node);
    cout << "Enter the value to insert: ";
    cin >> new_node->data;
    if(info == -1)
    {
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
    }
    else
    {
        ptr = head;
        while(ptr->data != info)
        {
            ptr = ptr->next;
        }
        if(ptr == tail)
        {
            new_node->prev = tail;
            new_node->next = NULL;
            tail->next = new_node;
            tail = new_node;   
        }
        else
        {
            new_node->next = ptr->next;
            new_node->prev = ptr;
            new_node->next->prev = new_node;
            ptr->next = new_node;
        }
    }
    
    traverse(head);
    return (head);
}

node *node_delete_info(int info, node *head)
{
    ptr = head;
    while(ptr->data != info)
    {
        ptr = ptr->next;
    }
    if(ptr == head)
    {
        head->next->prev = NULL;
        head = head->next;
        delete(ptr);
    }
    else if(ptr == tail)
    {
        tail->prev->next = NULL;
        tail = tail->prev;
        delete(ptr);   
    }
    else
    {
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        delete(ptr);
    }
    traverse(head);
    return (head);
}

node *node_insert_pos(int pos, node *head)
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
        new_node->next->prev = new_node;
        ptr->next = new_node;
    }
    traverse(head);
    return (head);
}

node *node_delete_pos(int pos, node *head)
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

    string a, b;
    while(b != "end")
    {
        cout << "Enter : 'pos' - positional operation\n\t'data' - data operation\n\t'end' - end of the program\n";
        cin >> b;
        if(b == "data")
        {  
            while (a != "exit")
            {
                cout << "Enter : 'insert', 'delete' or 'exit' : ";
                cin >> a;
                if (a == "insert")
                {
                    int info;
                    cout << "Enter : \n\t'-1' to add at first position\n\tdata after which you want to add the node : ";
                    cin >> info;
                    head = node_insert_info(info, head);
                }
                else if (a == "delete")
                {
                    int info;
                    cout << "Enter the data that you want to delete: ";
                    cin >> info;
                    head = node_delete_info(info, head);
                }
                else if (a == "exit")
                {
                    cout << "Good Bye :)\n";
                }
                else
                    cout << "\nWrong Input !\n";
            }
            a = "";
        }
        else if(b == "pos")
        {
            cout << "'0' for last node\n'1' for first node\n"; 
            while (a != "exit")
            {
                cout << "Enter : 'insert', 'delete' or 'exit' ";
                cin >> a;
                if (a == "insert")
                {
                    int pos;
                    cout << "Enter the pos where you want to add the new node: ";
                    cin >> pos;
                    head = node_insert_pos(pos, head);
                }
                else if (a == "delete")
                {
                    int pos;
                    cout << "Enter the pos at which you want to delete the node: ";
                    cin >> pos;
                    head = node_delete_pos(pos, head);
                }
                else if (a == "exit")
                {
                    cout << "Good Bye :)\n";
                }
                else
                    cout << "\nWrong Input !\n";
            }
        }
        else if(b == "end")
        {
            cout << "End of the program.";
            break;
        }
        else
            cout << "Wrong Input !";
    }    
    return 0;
}