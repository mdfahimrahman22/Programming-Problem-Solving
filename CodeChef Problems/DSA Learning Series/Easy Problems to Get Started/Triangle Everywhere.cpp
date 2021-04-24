#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo

    int n=3;
    int a[n];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+n);
    if(a[0]+a[1]>a[2])
    {

        if(a[0]==a[1]&&a[1]==a[2]&&a[0]==a[2])
        {
            cout<<1<<endl;
        }
        else if(a[0]==a[1]||a[1]==a[2]||a[0]==a[2])
        {
            cout<<2<<endl;
        }
        else if(a[0]!=a[1]&&a[1]!=a[2]&&a[0]!=a[2])
        {
            cout<<3<<endl;
        }
    }
    else cout<<"-1\n";



    return 0;
}

