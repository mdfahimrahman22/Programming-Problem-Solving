#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    fastIo;
    // freopen("input.txt", "r", stdin);

    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n = s1.size(), pos = 0;
        int totalSlots = n / 4 + 1;
        vector<string> slots;
        for (int i = 0; i < n; i += 4)
        {
            slots.push_back(s1.substr(i, 4));
        }

        for (int i = 0; i < slots.size(); i++)
        {
            // cout << slots[i] << endl;
            if(slots[i]==s2){
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}