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
node* nodeQueue[100];
int last=0,first=0;
bool isEmpty()
{
    if(first==last||last==0)
        return true;
    return false;
}
void pushNode(node* newNode)
{
    nodeQueue[++last]=newNode;
}
node* pullNode()
{
    return nodeQueue[++first];
}

void levelOrder(struct Node *root)
{
    if(root==NULL)return;
    pushNode(root);
    while(!isEmpty())
    {

        root=pullNode();
        cout<<root->data<<" ";
        if(root->left)
        {
            pushNode(root->left);
        }
        if(root->right)
        {
            pushNode(root->right);
        }
    }
}

int main()
{
    fastIO
    node* root = new Node(10);
    root->left = new Node(21);
    root->right = new Node(19);
    root->left->right = new Node(13);
    root->right->left = new Node(34);
    root->right->right = new Node(83);
    levelOrder(root);

    return 0;
}
