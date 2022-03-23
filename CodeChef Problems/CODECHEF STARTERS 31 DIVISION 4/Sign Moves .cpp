#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    long long int n,curPos;
    cin>>t;
    while(t--)
    {
        cin>>n;
        curPos=0;
        if(n%2==0)
        {
            curPos=n/2;
        }
        else
        {
            curPos=ceil(n/2.0)*-1;
        }

        cout<<curPos<<endl;
    }


    return 0;
}
