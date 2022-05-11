#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve(vector<int> &nums)
{
    int digit = 0;
    int evenDigit = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        digit = log10(nums[i]) + 1;
        if ((digit & 1) == 0)
        {
            evenDigit++;
        }
    }

    cout << evenDigit << endl;
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