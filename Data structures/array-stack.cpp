#include<iostream>

using namespace std;

int stack_size = 0;

// int stack_push(int myArray[], int n)
// {
//     int data;
//     if(stack_size < n)
//     {
//         cout << "Enter the data in the stack: ";
//         cin >> data;
//         if(stack_size == 0)
//         {
//             myArray[0] = data;
//             stack_size++;
//         }
//         else
//         {
//             for(int i = stack_size; i > 0; i--)
//             {
//                 myArray[i] = myArray[i - 1];
//             }
//             myArray[0] = data;
//             stack_size++;
//         }
//     }
//     return(stack_size);
// }

// int stack_pop(int myArray[], int n)
// {
//     for(int i = 0; i < stack_size; i++)
//     {
//         myArray[i] = myArray[i + 1];
//     }
//     stack_size--;
//     return(stack_size);
// }

// int show_stack(int myArray[], int stack_size)
// {
//     cout << "Stack is: ";
//     if(stack_size == 0)
//         cout << "Empty\n";
//     else
//     {
//         for(int i = 0; i < stack_size; i++)
//         {
//             cout << myArray[i];
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main()
{
    int n, myArray[n];
    cout << "Enter the size of the array: ";
    // cin >> n;
    // string a;
    // cout << "'push' for push function\n'pop' for pop function\n'exit' to exit program\n'pushall' to enter all the values in the stack in one go\n";
    // while(a != "exit")
    // {
    //     cout << "Enter the command: ";
    //     cin >> a;
    //     if(a == "push")
    //     {
    //         if(stack_size == n)
    //             cout << "Overflow !\n";
    //         else
    //         {
    //             stack_size = stack_push(myArray, n);
    //             show_stack(myArray, stack_size);
    //         }
    //     }
    //     else if(a == "pushall")
    //     {
    //         if(stack_size == n)
    //             cout << "Overflow !\n";
    //         else
    //         {
    //             for(int i = 0; i < n; i++)
    //             {
    //                 stack_size = stack_push(myArray, n);
                    
    //             }
    //             show_stack(myArray, stack_size);
    //         }
    //     }
    //     else if(a == "pop")
    //     {
    //         if(stack_size == 0)
    //             cout << "Underflow !\n";
    //         else
    //         {         
    //             stack_size = stack_pop(myArray, n);
    //             show_stack(myArray, stack_size);
    //         }
    //     }
    //     else if(a == "exit")
    //         cout << "Good Bye :)";
    //     else
    //         cout << "Wrong Output !\n";    
    // }
    return 0;
}