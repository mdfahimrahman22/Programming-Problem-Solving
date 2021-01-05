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
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout<< root->data<<" ";
        inorder(root->right);
    }
}
node* insertNode(node* node, int data)
{
    if (node == NULL) return (new Node(data));

    if (data <= node->data)
        node->left  = insertNode(node->left, data);
    else if (data > node->data)
        node->right = insertNode(node->right, data);

    return node;
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

    inorder(root);
    return 0;
}
