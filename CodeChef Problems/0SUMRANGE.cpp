#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int sumOfZero(ll arr[],int n)
{
    ll sum=0;
    int count=0;
    for(int i=0; i<n; i++)
    {
        sum=arr[i];
        for(int j=i+1; j<n; j++)
        {
            sum+=arr[j];
            if(sum==0)
            {
                count++;
            }
        }

    }
    return count;
}
int main()
{
    fastIO
//    freopen("abc.txt","r",stdin);

    int l;
    cin >> l;
    ll arr[l+10];
    for (int i = 0; i < l; i++)
    {
        cin >> arr[i];
    }
    cout<<sumOfZero(arr,l)<<endl;

    return 0;
}
