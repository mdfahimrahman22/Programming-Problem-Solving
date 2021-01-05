#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
typedef struct Node node;
node* nodeStack[100];
int top=0;
bool isEmpty()
{
    if(top==0)
        return true;
    return false;
}
void pushNode(node* newNode)
{
    nodeStack[++top]=newNode;
}
node* topNode()
{
    return nodeStack[top];
}
void popNode()
{
    --top;
}

void iterativePreorder(node* root)
{
    if (root == NULL)
        return;

    pushNode(root);
    while (isEmpty() == false)
    {
        node* tempNode = topNode();
        cout<<tempNode->data<<" ";
        popNode();

        if (tempNode->right)
            pushNode(tempNode->right);
        if (tempNode->left)
            pushNode(tempNode->left);
    }
}

int main()
{
    fastIO
    node* root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    root->right->left = new Node(2);
    iterativePreorder(root);

    return 0;
}
