#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    freopen("input.txt","r",stdin);

    int R,C,q;
    cin>>R>>C>>q;
//    vector<int> v[R+100];
    int arr[R+100][C+100];
    vector<int> rowSum(R+100,0),columnSum(C+100,0);
    while(q--)
    {
        int r,c;
        cin>>r>>c;
        rowSum[r]+=1;
        columnSum[c]+=1;
        arr[r][c]=1;
//        v[r].push_back(c);
    }
    int maximum=INT_MIN,sum=0,maxRowIndex,maxColIndex;
    int rowMax=*max_element(rowSum.begin(),rowSum.end());
    if(rowMax<C)
    {
        for(int i=0; i<R; i++)
        {
            if(rowSum[i]>maximum)
            {
                maxRowIndex=i;
                maximum=rowSum[i];
            }
        }
        maximum=INT_MIN;
        for(int j=0; j<C; j++)
        {
            if(arr[maxRowIndex][j]!=1)
            {
                sum=rowSum[maxRowIndex]+columnSum[j];
                if(sum>maximum)
                {
                    maximum=sum;
                }
            }
        }
    }
    else
    {
        for(int i=0; i<R; i++)
        {
            if(rowSum[i]>maximum)
            {
                maxRowIndex=i;
                maximum=rowSum[i];
            }
        }
        maximum=INT_MIN;
        for(int j=0; j<C; j++)
        {
            if(arr[maxRowIndex][j]!=1)
            {
                sum=rowSum[maxRowIndex]+columnSum[j];
                if(sum>maximum)
                {
                    maximum=sum;
                }
            }
        }
    }


//    for(int i=0; i<R; i++)
//    {
//        sort(v[i].begin(),v[i].end());
//        int mySize=C-v[i].size()-1;
//        for(int j=0,k=0; j<C; j++)
//        {
//            if(v[i][k]==j)
//            {
//                sum=rowSum[i]+columnSum[j];
//                if(maximum<sum)
//                {
//                    maximum=sum;
//                }
//
//            }
//            else
//            {
//                k++;
//            }
//            if(k==mySize)continue;
//
//        }
//    }
    cout<<maximum<<endl;
    return 0;
}
