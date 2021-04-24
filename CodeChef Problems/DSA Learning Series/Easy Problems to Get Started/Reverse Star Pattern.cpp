#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int n;
    cin>>n;
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<n; j++)
        {
            if(j<i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;

    }

    return 0;
}

