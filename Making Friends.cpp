#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    int n;
    cin>>n;
    int count=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
