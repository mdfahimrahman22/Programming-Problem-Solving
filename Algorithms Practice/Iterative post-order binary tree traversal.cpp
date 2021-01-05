#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
vector<int> v;
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

void iterativePostorder(node* root)
{
    if (root == NULL)
        return;

    pushNode(root);
    while (!isEmpty())
    {
        root=topNode();
        popNode();
        v.push_back(root->data);
        if (root->left)
            pushNode(root->left);

        if (root->right)
            pushNode(root->right);

    }
    for(int i=v.size()-1;i>=0;i--){
    cout<<v[i]<<" ";
    }
}

int main()
{
    fastIO
    node* root = new Node(1);
    root->left = new Node(-10);
    root->right = new Node(11);
    root->right->right = new Node(16);
    root->right->left = new Node(13);
    root->left->right = new Node(5);
    root->left->right->right = new Node(3);
    iterativePostorder(root);

    return 0;
}

