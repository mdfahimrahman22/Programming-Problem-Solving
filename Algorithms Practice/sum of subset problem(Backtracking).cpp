#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
class Node
{
public:
    int sum;
    int it;
    int side;
    int remain;

    Node(int Sum,int i,int Side,int r)
    {
        sum=Sum;
        it=i;
        side=Side;
        remain=r;
    }

    Node() {}
};
vector<int>v;
void printStack(stack<Node> myStack,int n)
{
    stack<Node>s=myStack;
    int a[n+10],i=0,k=0;
    while(!s.empty())
    {
        a[i++]=s.top().side;
//        cout << s.top().sum<<" "<<s.top().it<<" "<<s.top().side<<" "<<s.top().remain<<endl;
//        cout <<s.top().it<<" "<< s.top().side<<" \n";
        s.pop();
    }
    i--;
    for(int j=i-1; j>=0; j--,k++)
    {
        cout<<a[j]<<" ";
    }
    for(; k<n; k++)
    {
        cout<<0<<" ";
    }
    cout<<endl;
}
void backtracking(int a[],int n,int Remain,int desiredSum)
{
    stack<Node>st;
    Node temp;
    int r=Remain;
    Node node(0,0,1,r);
    st.push(node);
    int stoppingCriteria=pow(2,n);

    for(int i=0,j=0; i<n&&j<stoppingCriteria; i++,j++)
    {
        if(i+1==n&&st.top().side==0&&st.top().sum!=desiredSum)
        {
            while(st.top().side==0)
            {
                st.pop();
                i--;
            }
            temp=st.top();
            st.pop();
            int x=st.top().sum;
            int y=temp.remain;
            Node node(x,i,0,y);
            i--;
            st.push(node);
        }
        else if(st.top().sum==desiredSum)
        {
            printStack(st,n);
//            cout<<"My st="<<st.top().side<<endl;
            st.pop();
            i--;
            while(st.top().side==0)
            {
                st.pop();
                i--;
            }
//            cout<<"\nHurre!! "<<st.top().it<<" "<<st.top().side<<endl;
            if(st.top().it==1&&st.top().side==1&&st.top().remain==r-a[0])
            {

                temp=st.top();
                st.pop();
                int x=0;
                int y=temp.remain;
                Node node(x,i,0,y);
                i--;
                st.push(node);

            }
            else
            {

                temp=st.top();
                st.pop();
                int x=st.top().sum;
                int y=temp.remain;
                Node node(x,i,0,y);
                i--;
                st.push(node);

            }

        }
        else if(st.top().sum>desiredSum)
        {
            temp=st.top();
            st.pop();

                int x=st.top().sum;
                int y=temp.remain;
                Node node(x,i,0,y);
                i--;
                st.push(node);

        }
        else if(st.top().remain+st.top().sum<desiredSum)
        {
            while(st.top().side==0)
            {
                st.pop();
                i--;
            }
            temp=st.top();
            st.pop();
            int x=st.top().sum;
            int y=temp.remain;
            Node node(x,i,0,y);
            i--;
            st.push(node);
        }
        else
        {
            int x=st.top().sum+a[i],y=st.top().remain-a[i];
            Node node(x,i+1,1,y);
            st.push(node);
        }
//         cout << "i = "<<i+1<<endl;
//        cout << st.top().sum<<" "<<st.top().it<<" "<<st.top().side<<" "<<st.top().remain<<endl;
    }
    printStack(st,n);

}
int main()
{
    fastIo
    int a[]= {5,10,12,13,15,15};
    int n=sizeof(a)/sizeof(a[0]);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    backtracking(a,n,sum,30);

    return 0;
}

