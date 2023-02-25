#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
#define MX 100
int parent[MX];
void makeSet(int u)
{
    parent[u] = u;
}
void init()
{
    for (int i = 1; i <= 8; i++)
    {
        makeSet(i);
    }
}

int Find(int u)
{
    if (u == parent[u])
        return u;
    return parent[u]=Find(parent[u]);
}

void Union(int u, int v)
{
    int p = Find(u);
    int q = Find(v);
    if (p != q)
    {
        parent[q] = p;
    }
}

int main()
{
    fastIo;
    init();
    // for (int i = 1; i <= 8; i++)
    // {
    //     cout << "Parent of " << i << " is " << parent[i] << endl;
    // }

    Union(7,8);
    Union(6,7);

    cout << Find(2) << endl;

    return 0;
}