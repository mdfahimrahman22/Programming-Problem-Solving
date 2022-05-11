#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
        if (nums[i] == 0)
            ans.push_back(0);
        cout<<nums[i]<<endl;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " ";
}
int main()
{
    fastIo;
    freopen("input.txt", "r", stdin);

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