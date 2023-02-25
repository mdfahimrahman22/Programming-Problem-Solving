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

    int t, count;
    string input;
    string pi = "3141592653589793238462643383279";

    cin >> t;
    while (t--)
    {
        cin >> input;
        count = 0;
        for (int i = 0; i < input.size(); i++)
        {
            if (pi[i] != input[i])
                break;
            count++;
        }
        cout << count << endl;
    }

    return 0;
}