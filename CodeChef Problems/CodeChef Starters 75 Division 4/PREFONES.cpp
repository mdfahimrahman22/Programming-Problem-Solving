#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    fastIo;
    freopen("input.txt", "r", stdin);
    int maxOnes = 0;
    int t, n,c=0;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        int maxOnes = 0, temp = 0;
        int maxZeros = 0, l = 0, r;
        int k,i=0;
        for (i = 0; i < n; i++)
        {
            c=0;
            k=i;
            while(s[k]=='0' && k<n){
                c++;
                k++;
            }
            if(c>maxZeros){
                maxZeros=c;
                l=i;
                r=k;
            }
            i=k;
        }

        string newString="";
        for(int i=0;i<n;i++){
            if(i>=l && i<r)continue;
            newString.push_back(s[i]);
        }
        

        for (int i = 0; i < newString.size(); i++)
        {
            c=0;
            k=i;
            while(newString[k]=='1' && k<n){
                c++;
                k++;
            }
            if(c>maxOnes){
                maxOnes=c;
                l=i;
                r=k;
            }
            i=k;
        }

        cout<<maxOnes<<endl;
        
    }

    return 0;
}