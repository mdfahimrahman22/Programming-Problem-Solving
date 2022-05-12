#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        double res=(4*n)/5.0;
        cout<<int(ceil(res))<<endl;
    }

    return 0;
}
