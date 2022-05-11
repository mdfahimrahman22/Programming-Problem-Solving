#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve(vector<int> &nums)
{
    int len = 0;
    int maxLen = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            len++;
        }
        else
        {
            maxLen = max(maxLen, len);
            len=0;
        }
    }
    maxLen = max(maxLen, len);
    cout<<maxLen<<endl;
}
int main()
{
    fastIo;
    freopen("input.txt","r",stdin);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    solve(v);

    return 0;
}