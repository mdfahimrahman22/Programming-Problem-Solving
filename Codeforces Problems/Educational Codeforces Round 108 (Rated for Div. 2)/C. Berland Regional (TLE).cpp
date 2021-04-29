#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int u[n+10];
        ll s[n+10];
        ll sum[n+10]= {0},total=0;
        for(int i=0; i<n; i++)
        {
            cin>>u[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            total+=s[i];
        }
        unordered_set <int> uni;
        vector<int>v[n+10];
        for(int i=0; i<n; i++)
        {
            uni.insert(u[i]);
            v[u[i]].push_back(s[i]);
            sum[u[i]]+=s[i];
        }
        int uniSize=uni.size();
        int j=0;
        int uniArr[uniSize+10],vecLen[uniSize+10];
        for (auto itr = uni.begin(); itr != uni.end(); itr++)
        {
            uniArr[j]=*itr;
            sort(v[*itr].begin(),v[*itr].end(), greater<int>());
            vecLen[j]=v[*itr].size();
            j++;
        }
        int maxLen=*max_element(vecLen,vecLen+j);

        ll minus=0,k;
        for(k=1; k<=maxLen; k++)
        {
            int curSize=0,x=0;
            minus=0;
            for(int i=1; i<=j; i++)
            {
                curSize=v[uniArr[i-1]].size();
                if(curSize<k)
                {
                    minus+=sum[uniArr[i-1]];
                    continue;
                }
                if(curSize%k!=0)
                {
                    x=(curSize/k)*k;

                    for(int it=x; it<curSize; it++)
                    {
                        minus+=v[uniArr[i-1]][it];
                    }
                }
            }
            cout<<total-minus<<" ";
        }
        for(;k<=n;k++){
            cout<<"0 ";
        }
        cout<<endl;


    }



    return 0;
}

