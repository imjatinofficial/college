#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *left, *right;
};

node *create(int data);
node *insert(node *root, int data);
void preorder(node *root);
void inorder(node *root);
void postorder(node *root); 

int main()
{
    int n, data; 
    cout << "Enter the number of nodes: ";
    cin >> n;
    node *root = NULL;
    for(int i = 0; i < n; i++)
    {
        cout << "data: ";
        cin >> data;
        root = insert(root, data);
    }
    cout << "Preorder traversing\n";
    preorder(root);
    cout << endl;
    cout << "Inorder traversing\n";
    inorder(root);
    cout << endl;
    cout << "Postorder traversing\n";
    postorder(root);
    cout << endl;
}


node *create(int data)
{
    node *temp = new (struct node);
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return (temp);
}

node *insert(node *root, int data)
{
    if(root == NULL)
        return (create(data));
    else if(data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if(data > root->data)
    {
        root->right = insert(root->right, data);
    } 
    return (root);
}

void preorder(node *root)
{
    if(root == NULL)
        return;
    cout << root->data << " -> ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node *root)
{
    if(root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " -> ";
    inorder(root->right);
}

void postorder(node *root)
{
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " -> ";
}