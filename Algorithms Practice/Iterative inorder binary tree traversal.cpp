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

void inOrder(struct Node *root)
{
    if(root==NULL)return;
    while(true){
        if(root!=NULL){
            pushNode(root);
            root=root->left;
        }else{
        if(isEmpty())
            break;
        root=topNode();
        popNode();
        cout<<root->data<<" ";
        root=root->right;
        }
    }
}

int main()
{
    fastIO
    node* root = new Node(10);
    root->left = new Node(0);
    root->right = new Node(-10);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->right = new Node(11);
    inOrder(root);

    return 0;
}
