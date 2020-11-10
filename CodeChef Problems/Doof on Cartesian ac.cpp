#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
freopen("abc.txt","r",stdin);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector< int >a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int q;
        cin >> q;

        while (q--) {
            int x, y;
            cin >> x >> y;
            int idx = lower_bound(a.begin(), a.end(), x+y)-a.begin();

            if (idx < a.size() && a[idx] == x+y) {
                cout << -1 << "\n";
            } else {
                cout << idx << "\n";
            }
        }
    }


    return 0;
}
