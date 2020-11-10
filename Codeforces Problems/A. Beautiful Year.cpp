#include<bits/stdc++.h>
using namespace std;
int main()
{
    int year,error=0;
    cin>>year;
    int digit[10];
    int y2;
    for(int i=year+1; i<=9012; i++)
    {if(i==9000){
    cout<<9012<<endl;
    return 0;
    }
        y2=i;
        error=0;
        for(int j=0; y2!=0; j++)
        {
            digit[j]=y2%10;
            y2/=10;
        }
        sort(digit,digit+4);
        for(int i=0; i<4; i++)
        {
            if(digit[i]==digit[i+1]&&i!=3)
            {
                error=1;
                break;
            }
        }
        if(error==1)
        {
            continue;
        }
        else
        {
            cout<<i<<endl;
            break;
        }

    }



    return 0;
}
