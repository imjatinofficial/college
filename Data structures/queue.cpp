#include<iostream>

using namespace std;

int queue_size = 0;

int enqueue(int myArray[], int n)
{
    int data;
    if(queue_size < n)
    {
        cout << "Enter the data in the queue: ";
        cin >> data;
        if(queue_size == 0)
        {
            myArray[0] = data;
            queue_size++;
        }
        else
        {
            for(int i = queue_size; i > 0; i--)
            {
                myArray[i] = myArray[i - 1];
            }
            myArray[0] = data;
            queue_size++;
        }
    }
    return(queue_size);
}


int queue_show(int myArray[], int queue_size)
{
    cout << "Queue is: ";
    if(queue_size == 0)
        cout << "Empty\n";
    else
    {
        for(int i = 0; i < queue_size; i++)
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
    cout << "'push' for push function\n'pop' for pop function\n'exit' to exit program\n'pushall' to enter all the values in the queue in one go\n";
    while(a != "exit")
    {
        cout << "Enter the command: ";
        cin >> a;
        if(a == "push")
        {
            if(queue_size == n)
                cout << "Overflow !\n";
            else
            {
                queue_size = enqueue(myArray, n);
                queue_show(myArray, queue_size);
            }
        }
        else if(a == "pushall")
        {
            if(queue_size == n)
                cout << "Overflow !\n";
            else
            {
                for(int i = 0; i < n; i++)
                {
                    queue_size = enqueue(myArray, n);
                    
                }
                queue_show(myArray, queue_size);
            }
        }
        else if(a == "pop")
        {
            if(queue_size == 0)
                cout << "Underflow !\n";
            else
            {         
                queue_size--;
                queue_show(myArray, queue_size);
            }
        }
        else if(a == "exit")
            cout << "Good Bye :)";
        else
            cout << "Wrong Output !\n";    
    }
    return 0;
}