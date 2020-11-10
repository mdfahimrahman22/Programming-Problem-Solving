#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+10];
    if(n==1)
    {
        cout<<"-1\n";
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        a[i]=i+1;
    }
    if(n%2==0)
    {
        for(int i=0; i<n; i++)
        {
            if(i!=n-1){
                swap(a[i],a[i+1]);
                i++;
            }

        }
    }
    else
    {
        cout<<"-1\n";
        return 0;
    }

    for(int i=0; i<n; i++)
    {

        if(i!=n-1)cout<<a[i]<<" ";
        else cout<<a[i]<<"\n";
    }


    return 0;
}
