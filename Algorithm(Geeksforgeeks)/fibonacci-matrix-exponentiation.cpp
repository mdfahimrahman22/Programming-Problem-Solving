#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
void multiply(int a[][2],int b[][2])
{
    int n=2;
    int mul[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mul[i][j] = 0;
            for (int k = 0; k < n; k++)
                mul[i][j] += a[i][k]*b[k][j];
        }
    }
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            a[i][j] = mul[i][j];

}
//Fast exponentiation applied
int mat_pow(int F[][2],int n)
{
    if(n==0||n==1)return 1;
    int M[][2] = {{1,1}, {1,0}};

    mat_pow(F,n/2);
    multiply(F,F);
    if(n%2!=0)
        multiply(F,M);

}
int fibonacciNthTerm(int n)
{
    int F[2][2]= {{1,1},{1,0}};
    if(n==0)return 0;
    if(n==1|n==2)return 1;
    mat_pow(F,n-1);
    return F[0][1];
}
int main()
{
    fastIo
    cout<<fibonacciNthTerm(10);
    return 0;
}
