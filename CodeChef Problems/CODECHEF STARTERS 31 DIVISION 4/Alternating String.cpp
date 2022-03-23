#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    freopen("input.txt","r",stdin);

    int t,n;
    cin>>t;
    while(t--)
    {
        int res=0;
        string s;
        cin >> n >> s;
        for(int i = 1; i < n; i++)
        {
            cout<<s[i]<<" "<<s[i-1]<<endl;
            res += (s[i] != s[i - 1]);
        }
        cout << min(res + 2, n) << '\n';
    }

    return 0;
}
