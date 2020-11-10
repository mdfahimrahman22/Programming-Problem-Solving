#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
void printNo(){
cout<<"NO\n";
        return;
}
void print(int a[],int index)
{
    long long int sum=0;
    if(a[index-1]%2!=a[index-2]%2)
    {
        cout<<"NO\n";
        return;
    }
    if(a[index-1]!=0)
    {
        cout<<"YES\n";
        for(int i=0; i<index; i++)
        {
//            sum+=a[i];
            if(i!=index-1)
            {
                cout<<a[i]<<" ";
            }
            else
            {
                cout<<a[i]<<endl;
            }
        }
    }
    else
    {
        cout<<"NO\n";
    }
//    cout<<"sum="<<sum<<endl<<endl;
}
void bothSame(long long int n,int k)
{
    cout<<"YES\n";
    for(int i=0; i<k; i++)
    {
        if(i!=k-1)
            cout<<1<<" ";
        else cout<<1<<"\n";

    }
//    cout<<"sum="<<n<<endl<<endl;

}
void bothOdd(long long int n,int k)
{

    int a[k+10],index=0,box=k,x,y;
    for(int i=0;; i++)
    {
        x=n/2;
        y=x+n-2*x;
        if(x%2==0&&y%2==0)
        {
            x++;
            y--;
        }
        if(x%2==0)
            if(x<y)
                swap(x,y);

        a[index++]=x;
        box--;
        if(box==y)
        {
            for(int z=1; z<=box; z++)
            {
                a[index++]=1;
            }
            break;
        }

        if(box==0)
            break;
        n=y;

    }
    print(a,index);


}
void bothEven(long long int n,int k)
{
    int a[k+10],index=0;
    if(n%k==0){
    for(int i=0;i<k;i++){
        a[index++]=n/k;
    }
    print(a,index);
    return;
}
    int x=k-1;
    int y=n/x;
    long int baki=n-x*y;
    int box=k;

    if(baki==0)
    {
        if(y%2==1!=x%2==0)
        {
            baki=x;
            y--;
        }
    }
    for(int i=0; i<x; i++)
    {
        a[index++]=y;
        if(box==y)
        {
            for(int z=1; z<=box; z++)
            {
                a[index++]=1;
            }
            break;
        }
        if(a[index-1]==0)
           {
            printNo();
            return;
           }
    }
    a[index++]=baki;
    print(a,index);
}
void evenOdd(long long int n,int k)
{int a[k+10],index=0;
    if(n%k==0){
    for(int i=0;i<k;i++){
        a[index++]=n/k;
    }
    print(a,index);
    return;
}
    long long int sum=0;

    int x=n/k-1;
    for(int i=0; i<k-1; i++)
    {
        a[index++]=x;
        if(a[index-1]==0)
           {
            printNo();
            return;
           }

    }
    a[index++]=n-(k-1)*x;
    print(a,index);
}
int main()
{
    FastIO
    freopen("abc.txt","r",stdin);

    int t;
    long long int n;
    int k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
//if((n%10)%2==0&&k%2==0)
cout<<n<<" "<<k<<endl;
        if(k==1)
        {
            cout<<"YES\n"<<n<<endl;
        }
        else if(n<k)
        {
            cout<<"NO\n";
            continue;
        }
        else if(n==k)
            bothSame(n,k);
        else if((n%10)%2==1&&k%2==1)
            bothOdd(n,k);
        else if((n%10)%2==0&&k%2==1)
            evenOdd(n,k);
        else
            bothEven(n,k);
    }

    return 0;
}
