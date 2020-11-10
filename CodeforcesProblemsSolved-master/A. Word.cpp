#include<bits/stdc++.h>

using namespace std;
void toLowercase(string s,int n){
char c;
    for(int i=0; i<n; i++)
    {
        c=tolower(s[i]);
        cout<<c;
    }
    cout<<endl;

}
void toUppercase(string s,int n)
{
    char c;
    for(int i=0; i<n; i++)
    {
        c=toupper(s[i]);
        cout<<c;
    }
    cout<<endl;
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int uppercase=0,lowercase=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            uppercase++;
        }
    }
    if(2*uppercase>n)
    {
       toUppercase(s,n);
    }else{
    toLowercase(s,n);
    }



    return 0;
}
