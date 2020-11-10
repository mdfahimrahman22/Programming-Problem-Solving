#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    unsigned long int num;
    cin>>num;
    auto s = to_string(num);
    int n = s.length() - 3;
    while (n > 0)
    {
        s.insert(n, ",");
        n -= 3;
    }
    cout <<s << endl;




    return 0;
}
