#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter the maximum size of the queue: ";
    cin >> n;
    int myQueue[n];
    cout << "Enter: '1' for enqueue, '2' for dequeue and '3' to exit\n";
    int front = -1, rear = -1;
    repeat:
        cout << "Enter command: ";
        cin >> m;
        switch (m)
        {
        case 1:
            if(rear < n-1)
            {
                front = 0;
                rear++;
                cout << "Enter value: ";
                cin >> myQueue[rear];
                cout << "Queue is : ";
                for(int i = 0;i <= rear; i++)
                {
                    cout << myQueue[i] << " ";
                }
                cout << endl;
            }
            else
                cout << "Overflow !\n";    
            goto repeat;
        case 2:
            if(front == -1)
                cout << "Underflow !\n";
            else if(rear == front)
            {
                rear--;
                front--;
                cout << "Queue is Empty now.\n";
            }
            else
            {
                for(int i = 0; i < rear; i++)
                {
                    myQueue[i] = myQueue[i + 1];
                }
                rear--;
                cout << "Queue is : ";
                for(int i = front;i <= rear; i++)
                {
                    cout << myQueue[i] << " ";
                }
                cout << endl;
            }
            goto repeat;
        case 3:
            cout << "Good Bye :)";
            break;
        default:
            cout << "Wrong Input !\n";
            goto repeat;
        }
    return 0;
}