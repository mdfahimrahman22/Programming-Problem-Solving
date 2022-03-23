#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ull unsigned long long int
using namespace std;

int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int n=1000,t,prev=1,res=1,count;
    for(int i=1; i<=n; i++)
    {
        prev=1;
        res=1;
        count=0;
        for(int j=2; j<=i; j++)
        {
            res=res|j;
            if(prev==res)count++;
            prev=res;
        }
        cout<<"n="<<i<<" Count="<<count<<" Dif="<<(i-count)<<endl;
    }

//    int t,prev,res,count;
//    ull n;
//    cin>>t;
//    while(t--)
//    {
//        prev=1;
//        res=1;
//        count=0;
//        cin>>n;
//        for(ull i=2; i<=n; i++)
//        {
//            res=res|i;
//            if(prev==res)count++;
//            prev=res;
//        }
//        cout<<count<<endl;
//    }


    return 0;
}

