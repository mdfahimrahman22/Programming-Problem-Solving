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
node* searchNode(node* node, int key)
{
    if (node == NULL)
        return NULL;
    else if(node->data == key)
        return node;
    else if(node->data < key)
        return searchNode(node->right, key);
    else
        return searchNode(node->left, key);
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
    int x;
    cout<<"Enter a number to search:"<<endl;
    cin>>x;
    if(searchNode(root,x)!=NULL)
    {
        cout<<x<<" is present in the tree"<<endl;
    }
    else
    {
        cout<<x<<" is not present in the tree"<<endl;
    }
    return 0;
}
