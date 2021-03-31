#include <iostream>

using namespace std;

struct node
{
    int data;
    node* right = NULL;
    node* left = NULL;
};

node* create(int data)
{
    node* temp = new node;
    temp->data = data;
    return temp;
}

node* insert(node* root, int data)
{
    if(root == NULL)
        return create(data);
    else if(data < root->data)
        root->left = insert(root, data);
    else if(data > root->data)
        root->right = insert(root, data);
    return root;
}

int main()
{

}