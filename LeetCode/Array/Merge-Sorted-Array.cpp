#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans;
    int pos1 = 0, pos2 = 0;
    while (pos1 < m && pos2 < n)
    {
        if (nums1[pos1] <= nums2[pos2])
            ans.push_back(nums1[pos1++]);
        else
            ans.push_back(nums2[pos2++]);
    }
    
    while (pos1 < m)
        ans.push_back(nums1[pos1++]);
    while (pos2 < n)
        ans.push_back(nums2[pos2++]);
    for (int i = 0; i < n + m; i++)
        cout << ans[i] << " ";
}
int main()
{
    fastIo;
    freopen("input.txt", "r", stdin);

    int n, m;
    cin >> n >> m;
    vector<int> nums1(n + m);
    for (int i = 0; i < n + m; i++)
        cin >> nums1[i];

    vector<int> nums2(m);
    for (int i = 0; i < m; i++)
        cin >> nums2[i];

    solve(nums1, n, nums2, m);

    return 0;
}