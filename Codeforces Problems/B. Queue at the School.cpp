#include<bits/stdc++.h>
using namespace std;
void show(char c[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<c[i];
    }
    cout<<"\n";
}
int main()
{
    //freopen("abc.txt","r",stdin);
    int n,t;
    cin>>n>>t;
    char c[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>c[i];
    }
    while(t--)
    {
        for(int i=0; i<n-1; i++)
        {
            if(c[i]=='B'&&c[i+1]=='G')
            {
                swap(c[i],c[i+1]);
                i++;
            }
        }

    }

    show(c,n);


    return 0;
}
