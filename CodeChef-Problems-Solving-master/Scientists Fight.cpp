#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    //freopen("abc.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        int n,in;
        cin>>n;
        vector<int> v(n);
        v.clear();
        for(int i=0; i<n; i++)
        {
            cin>>in;
            v.push_back(in);
        }
        sort(v.begin(),v.begin()+n);
        int maximum=INT_MIN;
        int c=1;
        for(int i=0; i<n; i++)
        {
            if(v[i]==v[i+1]&&i!=n-1)
            {
                c++;
            }
            else
            {
                maximum=max(maximum,c);
                c=1;
            }
        }
        cout<<maximum<<endl;

    }
    return 0;
}
