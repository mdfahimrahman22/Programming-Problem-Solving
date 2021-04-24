#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int n,l,r;
    cin>>n;
    for(int i=1,j=1; i<=n; i++,j+=5)
    {
        if(i%2!=0)
        {
            for(int k=j; k<j+5; k++)
            {
                cout<<k<<" ";
            }
        }
        else
        {
            for(int k=j+4; k>=j; k--)
            {
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }


    return 0;
}

