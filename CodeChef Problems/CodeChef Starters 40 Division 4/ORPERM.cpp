// #include <bits/stdc++.h>
// #define fastIo                        \
//     ios_base::sync_with_stdio(false); \
//     cin.tie(NULL);                    \
//     cout.tie(NULL);
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     vector<long long int> a(n), b(n);
//     for (int i = 0; i < n; i++)
//         cin >> a[i];
//     for (int i = 0; i < n; i++)
//         cin >> b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());
//     int x = a[0] ^ b[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (x != (a[i] ^ b[i]))
//         {
//             cout << -1 << endl;
//             return;
//         }
//     }
//     cout << x << endl;
// }
// int main()
// {
//     fastIo;
//     // freopen("input.txt","r",stdin);
    
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }

//     return 0;
// }