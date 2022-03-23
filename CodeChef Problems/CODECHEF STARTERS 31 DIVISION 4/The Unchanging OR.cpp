#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ull unsigned long long int
using namespace std;

int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t,prev,res,count;
    ull n;
    cin>>t;
    while(t--)
    {
        prev=1;
        res=1;
        count=0;
        cin>>n;
        if(n<=67)
        {
            for(int i=2; i<=n; i++)
            {
                res=res|i;
                if(prev==res)count++;
                prev=res;
            }
        }
        else
        {
            count=n-(floor(log2(n))+1);
        }

        cout<<count<<endl;
    }


    return 0;
}
