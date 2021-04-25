#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int n,x,rev,digit;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        rev=0;
        digit=log10(x);

        for(int j=x; j>0; j/=10)
        {
            rev+=(j%10)*round(pow(10,digit--));

        }
        cout<<rev<<endl;
    }

    return 0;
}

