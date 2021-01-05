#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef struct Node node;
struct Node
{
    int data;
    struct Node *left, *right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
node* insertNode(node* node, int data)
{
    if (node == NULL) return (new Node(data));

    if (data < node->data)
        node->left  = insertNode(node->left, data);
    else if (data > node->data)
        node->right = insertNode(node->right, data);

    return node;
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<< root->data<<" ";
        inorder(root->right);
    }
}
node * minValueNode(node* myNode)
{
    node *current = myNode;

    while (current && current->left != NULL)
        current = current->left;

    return current;
}

node* deleteNode(node* root, int key)
{

    if (root == NULL) return root;

    if (root->data > key)
        root->left = deleteNode(root->left, key);
    else if (root->data < key)
        root->right = deleteNode(root->right, key);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node* temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main()
{
    fastIO

    node* root = insertNode(NULL, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    cout<<"Before deleting item:"<<endl;
    inorder(root);

    root = deleteNode(root, 20);

    cout<<"\n\nAfter deleting the item:"<<endl;
    inorder(root);

    return 0;
}
