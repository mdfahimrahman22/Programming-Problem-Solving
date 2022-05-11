#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve(vector<int> &nums)
{

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     ans.push_back(nums[i]*nums[i]);
    // }
    // sort(ans.begin(),ans.end());
    int n = nums.size();
    vector<int> ans(n);
    int temp, l = 0, r = n - 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (abs(nums[l]) < abs(nums[r]))
        {
            ans[i] = nums[r] * nums[r];
            r--;
        }
        else
        {
            ans[i] = nums[l] * nums[l];
            l++;
        }
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