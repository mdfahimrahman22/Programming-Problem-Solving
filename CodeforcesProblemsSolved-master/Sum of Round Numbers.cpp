#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;
int main()
{
    FastIO
    //freopen("abc.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        int n,digit,k=0;
        cin>>n;
        digit=log(n)+1;
        int b[digit+10];
        for(int i=10,j=0; j<digit; j++,i*=10)
        {
            int mod=n%i;
            if(mod==0)
            {

            }
            else
            {
                b[k++]=mod;
                n-=mod;
            }
        }
        cout<<k<<endl;
        for(int i=0; i<k; i++)
        {
            if(i!=k-1)
                cout<<b[i]<<" ";
            else
            {
                cout<<b[i]<<"\n";
            }
        }


    }

    return 0;
}
