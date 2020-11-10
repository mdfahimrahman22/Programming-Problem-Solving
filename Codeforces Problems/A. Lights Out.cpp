#include<bits/stdc++.h>
using namespace std;
int in[9][9];
void show(int a[][9])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]%2==0)
                cout<<"1";
            else
                cout<<"0";

        }
        cout<<endl;
    }
}
void show2(int a[][9])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
                cout<<a[i][j];
        }
        cout<<endl;
    }
}
void modify(int a[][9],int i,int j,int t)
{
    a[i][j]+=t;
    if(j<2)
    {
        a[i][j+1]+=t;
    }
    if(j>0)
    {
        a[i][j-1]+=t;
    }

    if(i>0)
    {
        a[i-1][j]+=t;
    }
    if(i<2)
    {
        a[i+1][j]+=t;
    }
}

int main()
{
    //freopen("abc.txt","r",stdin);
    int x;

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>x;
            modify(in,i,j,x);
            //in[i][j]=x;
        }
    }
    show(in);


    return 0;
}
