#include<bits/stdc++.h>
#define fastIO iso_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
class MinHeap
{
    int *a;
    int *b;
    int n,m;
    int heapSizeA,heapSizeB;
public:
    MinHeap(int a[],int b[],int n,int m)
    {
        this->a=a;
        this->b=b;
        this->n=n;
        heapSizeA=n;
        heapSizeB=m;
        this->m=m;
        heapify(this->a,n);
        heapify(this->b,m);
        for(int i=0; i<n-1; i++)
        {
            DeleteA();
        }
        for(int i=0; i<m-1; i++)
        {
            DeleteB();
        }
        int u=unionCount();
        cout<<u<<endl;
    }
    int unionCount()
    {
        int v1[n],v2[m];
        int n1=0,m1=0;
        v1[n1++]=a[0];
        v2[m1++]=b[0];
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                v1[n1++]=a[i];
            }
        }
        for(int i=1; i<m; i++)
        {
            if(b[i]!=b[i-1])
            {
                v2[m1++]=b[i];
            }
        }
        print(v1,n1);
        print(v2,m1);
        int x=n1+m1;
        int j=0;
        for(int i=0; i<n1; i++)
        {
            while(j<m1)
            {
                if(v2[j]==v1[i])
                {
                    x--;
                    j++;
                }
                else if(v2[j]>v1[i])
                {
                    break;
                }
                else
                {
                    j++;
                }
            }
        }

        return x;

    }
    void DeleteA()
    {
        swap(a[heapSizeA-1],a[0]);
        heapSizeA--;
        adjust(a,heapSizeA,0);
    }
    void DeleteB()
    {
        swap(b[heapSizeB-1],b[0]);
        heapSizeB--;
        adjust(b,heapSizeB,0);
    }
    void print(int a[],int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    void adjust(int a[],int n,int i)
    {
        int j=i;
        while(left(j)<n)
        {
            if(right(j)>=n)
            {
                if(a[j]<leftChild(a,j))
                {
                    swap(a[j],a[left(j)]);
                }
                break;
            }
            else if(leftChild(a,j)>rightChild(a,j))
            {
                if(a[j]<leftChild(a,j))
                {
                    swap(a[j],a[left(j)]);
                    j=left(j);
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(a[j]<rightChild(a,j))
                {
                    swap(a[j],a[right(j)]);
                    j=right(j);
                }
                else
                {
                    break;
                }

            }

        }

    }

    void heapify(int arr[],int n)
    {
        for(int i=n/2; i>=0; i--)
        {
            adjust(arr,n,i);
        }
    }

    int left(int i)
    {
        return i*2+1;
    }
    int right(int i)
    {
        return i*2+2;
    }
    int leftChild(int arr[],int i)
    {
        return arr[i*2+1];
    }
    int rightChild(int arr[],int i)
    {
        return arr[i*2+2];
    }
};
int main()
{
    freopen("input.txt","r",stdin);
    int m,n;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<m; i++)cin>>b[i];
    MinHeap hp(a,b,n,m);

    return 0;
}
