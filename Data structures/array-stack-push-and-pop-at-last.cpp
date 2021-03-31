#include<iostream>

using namespace std;

int top = 0;

int stack_push(int myArray[], int n)
{
    int data;
    if(top < n)
    {
        cout << "Enter the data in the stack: ";
        cin >> data;
        myArray[top] = data;
        top++;

    }
    return(top);
}


int show_stack(int myArray[], int top)
{
    cout << "Stack is: ";
    if(top == 0)
        cout << "Empty\n";
    else
    {
        for(int i = 0; i < top; i++)
        {
            cout << myArray[i];
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int myArray[n];
    string a;
    cout << "'push' for push function\n'pop' for pop function\n'exit' to exit program\n'pushall' to enter all the values in the stack in one go\n";
    while(a != "exit")
    {
        cout << "Enter the command: ";
        cin >> a;
        if(a == "push")
        {
            if(top == n)
                cout << "Overflow !\n";
            else
            {
                top = stack_push(myArray, n);
                show_stack(myArray, top);
            }
        }
        else if(a == "pushall")
        {
            if(top == n)
                cout << "Overflow !\n";
            else
            {
                for(int i = 0; i < n; i++)
                {
                    top = stack_push(myArray, n);
                    
                }
                show_stack(myArray, top);
            }
        }
        else if(a == "pop")
        {
            if(top == 0)
                cout << "Underflow !\n";
            else
            {         
                top--;
                show_stack(myArray, top);
            }
        }
        else if(a == "exit")
            cout << "Good Bye :)";
        else
            cout << "Wrong Output !\n";    
    }
    return 0;
}