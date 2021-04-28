#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
bool multipleOfThree(long long int K, int dig0, int dig1)
{
    // sum of digits
    long long int sum = 0;

    // store the sum of first two digits
    // modulo 10 in a temporary variable
    int temp = (dig0 + dig1) % 10;

    sum = dig0 + dig1;

    // if the number N is a two digit number
    if (K == 2)
    {
        if (sum % 3 == 0)
            return true;
        else
            return false;
    }

    // add temp to sum to get the sum
    // of first three digits which are
    // not a part of cycle
    sum += temp;

    // get the number of groups in cycle
    long long int numberofGroups = (K - 3) / 4;

    // get the remaining number of digits
    int remNumberofDigits = (K - 3) % 4;

    // if temp = 5 or temp = 0 then sum of each group will
    // be 0
    if (temp == 5 || temp == 0)
        sum += (numberofGroups * 0);

    else
        // add sum of 20 for each group (2, 4, 8, 6)
        sum += (numberofGroups * 20);

    // find the remaining sum of remaining digits
    for (int i = 0; i < remNumberofDigits; i++)
    {
        temp = (2 * temp) % 10;
        sum += temp;
    }

    // check if it is divisible by 3 or not
    if (sum % 3 == 0)
        return true;
    else
        return false;
}
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);

    int t,d0,d1;
    long long int k;
    cin>>t;

    while(t--)
    {
        cin>>k;
        cin>>d0>>d1;
        if(multipleOfThree(k,d0,d1))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }



    return 0;
}

