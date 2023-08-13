#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of cities: "<<endl;
    cin>>n;
    int matrix[n][n];
    matrix[n][n]=0;
    int cnt,cntr=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                cout<<"Is the path present from "<<i<<" to "<<j<<" if yes enter the time taken or 0: "<<endl;
                cin>>matrix[i][j];
            }
            if(i==j)
            {
                matrix[i][j]=0;
            }
            if(matrix[i][j]!=0)
            {
                cnt++;
            }
        }
    }

    cout<<"The matrix is as follows: "<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<"\t"<<i<<"\t";
    }
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
        cout<<i;
        for(int j=1;j<=n;j++)
        {
            cout<<"\t"<<matrix[i][j]<<"\t";
            if(j==n)
            {
                cout<<endl;
            }
        }
    }

     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(matrix[i][j]==0 && matrix[j][i]==0)
                {
                    cntr++;
                }
            }
        }
    }

    if(cntr==0)
    {
        cout<<"\nThe graph is connected graph."<<endl;
    }
    else
    {
        cout<<"\nThe graph is not a connected graph."<<endl;
    }
    return 0;
}
