#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
void printW(float w[],int n)
{
    cout<<"w = ";
    for (int x=0; x<n; x++)
    {
        cout<<w[x]<<" ";
    }
    cout<<endl;

}
int main()
{
    fastIo
    freopen("input.txt","r",stdin);
    float alpha;
    int n,n1,n2,iterations;
    float x1,x2;
//printf("Alpha:");
    cin>>alpha>>n;
//printf("n1");
    cin>>n1;
    float w1[n1][2];

    for (int i=0; i<n1; i++)
    {
        cin>>x1>>x2;
        w1[i][0]=x1;
        w1[i][1]=x2;
    }

    cin>>n2;
    float w2[n2][2];
    for (int i=0; i<n2; i++)
    {
        cin>>x1>>x2;
        w2[i][0]=x1;
        w2[i][1]=x2;
    }

    float y1[n1][n]= {0,0};
    float y2[n2][n]= {0,0};
    float w[n];
    float ySum[n];
    for (int i=0; i<n; i++)
    {
        w[i]=1;
        ySum[i]=0;
    }

    for (int i=0; i<n1; i++)
    {
        x1=w1[i][0];
        x2=w1[i][1];
//        y1[i][0]=x1;//X1
//        y1[i][1]=x2*x2;//X2^2
//        y1[i][2]=x1+x2;//X1+X2
//        y1[i][3]=x1-x2;//X1-X2
//        y1[i][4]=1;

        y1[i][0]=x1*x1;//X1^2
        y1[i][1]=x2*x2;//X2^2
        y1[i][2]=x1*x2;//X1*X2
        y1[i][3]=x1;//X1
        y1[i][4]=x2;//X2
        y1[i][5]=1;
    }
    for (int i=0; i<n2; i++)
    {
        x1=w2[i][0];
        x2=w2[i][1];
//        y2[i][0]=-x1;//X1
//        y2[i][1]=-(x2*x2);//X2^2
//        y2[i][2]=-(x1+x2);//X1+X2
//        y2[i][3]=-(x1-x2);//X1-X2
//        y2[i][4]=-1;

        y2[i][0]=-x1*x1;//X1^2
        y2[i][1]=-x2*x2;//X2^2
        y2[i][2]=-x1*x2;//X1*X2
        y2[i][3]=-x1;//X1
        y2[i][4]=-x2;//X2
        y2[i][5]=-1;
    }

    for (int i=0; i<n1; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<y1[i][j]<<"\t";
        }
        cout<<endl;
    }
    for (int i=0; i<n2; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<y2[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n";
    cin>>iterations;

    for(int it=0; it<iterations; it++)
    {

        cout<<"\nIteration "<<it+1<<endl;
        //For W1
        for (int i=0; i<n1; i++)
        {
            cout<<"\nStep "<<i+1<<":"<<endl;
            printW(w,n);

            cout<<"Y1"<<i+1<<" = ";
            for (int x=0; x<n; x++)
            {
                cout<<y1[i][x]<<" ";

            }
            cout<<endl;

            float wty=0;
            for (int j=0; j<n; j++)
            {
                wty+=w[j]*y1[i][j];
//                cout<<w[j]<<" "<<y1[i][j]<<endl;
            }
            cout<<"wTy = "<<wty<<endl;
            if(wty<0)
            {
                for (int j=0; j<n; j++)
                {

                    float res=ySum[j]+y1[i][j];
                    ySum[j]=res;
                }
            }
        }
        //For W2
        for (int i=0; i<n2; i++)
        {
            cout<<"\nStep "<<i+n1+1<<":"<<endl;
            printW(w,n);

            cout<<"Y2"<<i+1<<" = ";
            for (int x=0; x<n; x++)
            {
                cout<<y2[i][x]<<" ";

            }
            cout<<endl;

            float wty=0;
            for (int j=0; j<n; j++)
            {
                wty+=w[j]*y2[i][j];
//                cout<<w[j]<<" "<<y1[i][j]<<endl;
            }
            cout<<"wTy = "<<wty<<endl;
            if(wty<0)
            {

                for (int j=0; j<n; j++)
                {
                    float res=ySum[j]+y2[i][j];
                    ySum[j]=res;
                }
            }
        }
        cout<<"Summation of Yij = ";
        for(int i=0; i<n; i++)
        {
            cout<<ySum[i]<<" ";
        }
        cout<<endl;
        for (int j=0; j<n; j++)
        {
            float res=w[j]+alpha*ySum[j];
            w[j]=res;
        }
        printW(w,n);

    }


    return 0;
}

//Test Case:1
//0.8 6
//3
//1 1
//1 -3
//4 5
//3
//2 2.5
//0 2
//2 3
//1
//Test Case:2
//1.0 5
//2
//1 -3
//2 5
//2
//2 1
//-5 2
//1
